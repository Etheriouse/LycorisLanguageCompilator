// #define verbose

#include <parser.h>
#include <fstream>
#include <iostream>
#include <cctype>
#include <string>
#include <vector>

#include "lib/utils.h"
#include "lib/console.h"
#include "lib/string_operation.h"

using namespace std;

#define notfound (long unsigned int)-1

bool isKeywordType(std::string str);
Type getTypeFrom(std::string str);

Parser::Parser(const char *program_filename, const char *config_filename)
{
    std::ifstream file(config_filename);
    std::string str;
    std::vector<std::string> keyword;
    std::vector<std::string> keyword_bool;
    char separator, str_s, float_s;
    while (getline(file, str))
    {
        if (str.rfind("separator", 0) != notfound)
        {
            size_t index = str.find('\'');
            separator = str.substr(index + 1, 1).at(0);
        }
        else if (str.rfind("str_separator", 0) != notfound)
        {
            size_t index = str.find('\'');
            str_s = str.substr(index + 1, 1).at(0);
        }
        else if (str.rfind("float_separator", 0) != notfound)
        {
            size_t index = str.find('\'');
            float_s = str.substr(index + 1, 1).at(0);
        }
        else if (str.rfind("keyword", 0) != notfound)
        {
            size_t index = str.find('\'');
            keyword = split(str.substr(index + 1, str.size() - 10), ' ');
        }
        else if (str.rfind("bool_keyword", 0) != notfound)
        {
            size_t index = str.find('\'');
            keyword_bool = split(str.substr(index + 1, str.size() - 15), ' ');
        }
    }

    this->lexer = new Lexer(program_filename, separator);
    this->lexer->set_float_separator(float_s);
    this->lexer->set_str_separator(str_s);
    this->lexer->set_keyword_list(keyword);
    this->lexer->set_bool_keyword_list(keyword);

    next_str = lexer->get_word(&next);
    nextToken();
}

Parser::~Parser()
{
    delete lexer;
}

Program *Parser::parse()
{   
    List<Function *> list;
    while ((actual != Token::Null && actual != Token::Error) && !quit)
    {
        list.append(parseFunction());
    }
    return new Program(list);
}

Function *Parser::parseFunction()
{
    if (isKeywordType(str) && (next == Token::Ident || next == Token::Star || next == Token::LSBracket))
    {
        Type t = getTypeFrom(str);
        nextToken();
        if(actual == Token::Star) {
            do {
                nextToken();
                t = Type::Pointer(t);
            } while(actual == Token::Star);
        } else if(actual == Token::LSBracket && next == Token::RSBracket) {
            nextToken();
            nextToken();
            t = Type::Array(t);
        } else if(actual != Token::Ident) {
            errorf("Parser::parseFunction, undefined type a comma at %lu:%lu\n", lexer->get_index_file(), lexer->get_index_line());
            quit = true;
        }
        std::string name = str;
        nextToken(name);
        if (actual == Token::LParen)
        {
            nextToken();
            List<Definition::Parameter> param;
            while (actual != Token::RParen && !quit)
            {
                Type tp = getTypeFrom(str);
                nextToken();
                std::string namep = str;
                nextToken();
                if (actual == Token::Comma)
                {
                    param.append((Definition::Parameter){tp, namep});
                }
                else if (actual == Token::RParen)
                {
                    param.append((Definition::Parameter){tp, namep});
                    break;
                }
                else
                {
                    errorf("Parser::parseFunction, Wait a comma at %lu:%lu\n", lexer->get_index_file(), lexer->get_index_line());
                    quit = true;
                }
                nextToken();
            }
            nextToken();
            Instruction *i = parseInstruction();
            return new Definition(t, name, param, i);
        }
        else
        {
            errorf("Parser::parseFunction, Wait a left parenthese at %lu:%lu\n", lexer->get_index_file(), lexer->get_index_line());
            quit = true;
            return new Definition(Type::Null(), "none", List<Definition::Parameter>::getEmpty(), Block::getEmpty());
        }
    }
    else
    {
        errorf("Parser::parseFunction, Wait a defintion function at %lu:%lu\n", lexer->get_index_file(), lexer->get_index_line());
        quit = true;
        return new Definition(Type::Null(), "none", List<Definition::Parameter>::getEmpty(), Block::getEmpty());
    }
}

Instruction *Parser::parseInstruction()
{
    if (quit)
        return Block::getEmpty();
    Instruction *i;
    switch (actual)
    {
    case Token::Keyword:
    {
        i = parseKeyword();
        break;
    }

    case Token::Ident:
    {
        if (next == Token::Eq)
        {
            std::string name = str;
            nextToken();
            nextToken();
            Expression *expr = parseExpression();
            cout << str << endl;
            i = new Affectation(name, expr);
            if (actual != Token::SemiColon)
            {
                errorf("Parser::parseInstruction, affect instruction SemiColon not at %lu:%lu\n", lexer->get_index_file(), lexer->get_index_line());
                quit = true;
                break;
            }
            nextToken();
        }
        else if (next == Token::LParen)
        {
            Expression *e = parseExpression();
            CallFunctionExpr *expr = dynamic_cast<CallFunctionExpr *>(e);
            if (expr == nullptr)
            {
                errorf("Parser::parseInstruction, callFunction Instruction is not a callfunctionExpr %lu:%lu\n", lexer->get_index_file(), lexer->get_index_line());
                quit = true;
                break;
            }
            i = new CallFunction(expr->name, expr->param);
            if (actual != Token::SemiColon)
            {
                errorf("Parser::parseInstruction, callFunction Instruction instruction SemiColon not at %lu:%lu\n", lexer->get_index_file(), lexer->get_index_line());
                quit = true;
                break;
            }
            nextToken();
        }
        else
        {
            errorf("Parser::parseInstruction, Equal sign not present at %lu:%lu\n", lexer->get_index_file(), lexer->get_index_line());
            quit = true;
            break;
        }
        break;
    }

    case Token::LBracket:
    {
        nextToken();
        List<Instruction *> list;
        while (actual != Token::RBracket && !quit)
        {
            list.append(parseInstruction());
        }
        nextToken();
        i = new Block(list);
        break;
    }
    default:
        errorf("Parser::parseInstruction, Invalide instruction at %lu:%lu\n", lexer->get_index_file(), lexer->get_index_line());
        quit = true;
        i = Block::getEmpty();
        break;
    }
    return i;
}

Instruction *Parser::parseKeyword()
{
    if (str == "if")
    {
        return parseIf();
    }
    else if (str == "while")
    {
        return parseWhile();
    }
    else if (isKeywordType(str) || str == "const")
    {
        return parseDeclaration();
    }
    else if (str == "return")
    {
        return parseReturn();
    }
    errorf("Parser::parseKeyword, Undefined keyword %lu:%lu\n", lexer->get_index_file(), lexer->get_index_line());
    quit = true;
    return Block::getEmpty();
}

Instruction *Parser::parseReturn()
{
    nextToken();
    Expression *e = parseExpression();
    Return *i = new Return(e);
    if (actual != Token::SemiColon)
    {
        errorf("Parser::parseReturn, return instruction SemiColon not at %lu:%lu\n", lexer->get_index_file(), lexer->get_index_line());
        quit = true;
    }
    nextToken();
    return i;
}

Instruction *Parser::parseIf()
{
    nextToken();
    Expression *e = parseExpression();
    Instruction *then = parseInstruction();
    if (actual == Token::Keyword && str == "else")
    {
        nextToken();
        Instruction *else_ = parseInstruction();
        return new If(e, then, Optional<Instruction *>::of(&else_));
    }
    return new If(e, then, Optional<Instruction *>::empty());
}

Instruction *Parser::parseWhile()
{
    nextToken();
    Expression *e = parseExpression();
    Instruction *then = parseInstruction();
    return new While(e, then);
}

Instruction *Parser::parseDeclaration()
{
    bool immutable = str == "const";
    Optional<List<Integer>> arr_size = Optional<List<Integer>>::of(new List<Integer>());
    if (immutable)
    {
        nextToken();
    }
    Type t = getTypeFrom(str);
    if (next == Token::Star)
    {
        do
        {
            nextToken();
            t = Type::Pointer(t);
        } while (next == Token::Star);
    } 
    nextToken();
    std::string name = str;
    if (next == Token::LSBracket)
    {
        do
        {
            nextToken();
            if (next == Token::RSBracket)
            {
                nextToken();
                t = Type::Array(t);
            }
            else if (next == Token::Integer)
            {
                nextToken();
                arr_size.get()->append(Integer(stoi(str.c_str())));
                if (next == Token::RSBracket)
                {
                    nextToken("size getted ");
                    t = Type::Array(t);
                }
                else
                {
                    errorf("Parser::parseDeclaration, declartion right square bracket not at %lu:%lu\n", lexer->get_index_file(), lexer->get_index_line());
                    quit = true;
                }
            }
            else
            {
                errorf("Parser::parseDeclaration, declartion right square bracket not at %lu:%lu\n", lexer->get_index_file(), lexer->get_index_line());
                quit = true;
            }
        } while (next == Token::LSBracket);
    }
    nextToken();

    if (actual == Token::SemiColon)
    {
        Instruction *i = new Declaration(t, arr_size, name, Optional<Expression>::empty());
        nextToken();
        return i;
    }
    else if (actual == Token::Eq)
    {
        nextToken();
        Expression *e = parseExpression();
        Instruction *i = new Declaration(t, arr_size, name, Optional<Expression>::of(e));
        if (actual != Token::SemiColon)
        {
            errorf("Parser::parseDeclaration, declartion SemiColon not at %lu:%lu\n", lexer->get_index_file(), lexer->get_index_line());
            quit = true;
        }
        nextToken();
        return i;
    }
    else
    {
        errorf("Parser::parseDeclaration, declartion undefied not at %lu:%lu\n", lexer->get_index_file(), lexer->get_index_line());
        quit = true;
        return Block::getEmpty();
    }
}

Expression *Parser::parseExpression()
{
    Expression *left = parseXor();
    while (actual == Token::Bar && next == Token::Bar)
    {
        Operator op = Operator::Or;
        nextToken();
        nextToken();

        Expression *right = parseXor();
        left = new BinOp(left, op, right);
    }
    return left;
}

Expression *Parser::parseXor()
{
    Expression *left = parseAnd();
    while (actual == Token::LCrochet && next == Token::RCrochet)
    {
        Operator op = Operator::Xor;
        nextToken();
        nextToken();

        Expression *right = parseAnd();
        left = new BinOp(left, op, right);
    }
    return left;
}

Expression *Parser::parseAnd()
{
    Expression *left = parseEqual();
    while (actual == Token::Esperluet && next == Token::Esperluet)
    {
        Operator op = Operator::And;
        nextToken();
        nextToken();

        Expression *right = parseEqual();
        left = new BinOp(left, op, right);
    }
    return left;
}

Expression *Parser::parseEqual()
{
    Expression *left = parseCompare();
    while ((actual == Token::Eq && next == Token::Eq) || (actual == Token::Not && next == Token::Eq))
    {
        Operator op = (actual == Token::Eq && next == Token::Eq) ? Operator::Eq : Operator::Neq;
        nextToken();
        nextToken();

        Expression *right = parseCompare();
        left = new BinOp(left, op, right);
    }
    return left;
}

Operator getOpFromToken(Token a, Token n)
{
    if (n == Token::Eq)
    {
        return a == Token::LCrochet ? Operator::Le : Operator::Ge;
    }
    else
    {
        return a == Token::LCrochet ? Operator::Lt : Operator::Gt;
    }
}

Expression *Parser::parseCompare()
{
    Expression *left = parseAddsub();
    while (
        (actual == Token::LCrochet && next == Token::Eq) ||
        (actual == Token::RCrochet && next == Token::Eq) ||
        (actual == Token::LCrochet && next != Token::RCrochet) ||
        (actual == Token::RCrochet /* && next != Token::LCrochet*/))
    {
        Operator op = getOpFromToken(actual, next);
        if (!(op == Operator::Gt || op == Operator::Lt))
        {
            nextToken();
        }
        nextToken();

        Expression *right = parseAddsub();
        left = new BinOp(left, op, right);
    }
    return left;
}

Expression *Parser::parseAddsub()
{
    Expression *left = parseMuldivMod();
    while (actual == Token::Add || actual == Token::Sub)
    {
        Operator op = actual == Token::Add ? Operator::Add : Operator::Sub;
        nextToken();

        Expression *right = parseMuldivMod();
        left = new BinOp(left, op, right);
    }
    return left;
}

Expression *Parser::parseMuldivMod()
{
    Expression *left = parseUnary();
    while (actual == Token::Star || actual == Token::Div || actual == Token::Mod)
    {
        Operator op = actual == Token::Star ? Operator::Mul : (actual == Token::Div ? Operator::Div : Operator::Mod);
        nextToken();

        Expression *right = parseUnary();
        left = new BinOp(left, op, right);
    }
    return left;
}

Expression *Parser::parseUnary()
{
    if (actual == Token::Not || actual == Token::Sub || actual == Token::Esperluet || actual == Token::Star)
    {
        Operator op;
        switch (actual)
        {
        case Token::Not:
            op = Operator::Not;
            break;
        case Token::Sub:
            op = Operator::Minus;
            break;
        case Token::Esperluet:
            op = Operator::Reference;
            break;
        case Token::Star:
            op = Operator::Dereference;
            break;
        default:
            break;
        }
        nextToken();

        Expression *right = parseUnary();
        return new UnOp(op, right);
    }

    return parseAtoms();
}

Expression *Parser::parseAtoms()
{
    Expression *expr;

    switch (actual)
    {
    case Token::Integer:
        expr = new Integer(stoi(str.c_str()));
        break;
    case Token::Float:
        expr = new Float(stof(str.c_str()));
        break;
    case Token::Boolean:
        expr = new Boolean(str == "true");
        break;
    case Token::String:
        expr = new String(str);
        break;

    case Token::Ident:
    {
        if (next != Token::LParen && next != Token::LSBracket)
        {
            expr = new Variable(str);
        }
        else if (next == Token::LParen)
        {
            std::string name = str;
            nextToken(); // actual = (
            nextToken();
            List<Expression *> list;
            while (actual != Token::RParen)
            {
                list.append(parseExpression());
                if (actual == Token::Comma)
                {
                    nextToken();
                }
                else if (actual == Token::RParen)
                {
                    break;
                }
                else
                {
                    quit = true;
                    errorf("Parser::parseAtoms: Wait a comma at %lu:%lu\n", lexer->get_index_file(), lexer->get_index_line());
                }
            }
            expr = new CallFunctionExpr(name, list);
        }
        else if (next == Token::LSBracket)
        {
            std::string name = str;
            nextToken(); // actual = (
            nextToken();
            Expression *e = parseExpression();
            if (actual != Token::RSBracket)
            {
                quit = true;
                errorf("Parser::parseAtoms: Wait a right square bracket at %lu:%lu\n", lexer->get_index_file(), lexer->get_index_line());
            }
            expr = new ArrayAtoms(name, e);
            printf("atome\n");
        }
        else
        {
            quit = true;
            errorf("Parser::parseAtoms: Wait a left parenthese at %lu:%lu\n", lexer->get_index_file(), lexer->get_index_line());
        }
    }
    break;

    case Token::LParen:
    {
        nextToken();
        Expression *e = parseExpression();
        if (actual != Token::RParen)
        {
            errorf("Parser::parseAtoms: Parenthese not closedat %lu:%lu\n", lexer->get_index_file(), lexer->get_index_line());
        }
        expr = e;
        break;
    }

    default:
        errorf("Parser::parseAtoms: Previous token wait an atoms, but get %s at %lu:%lu\n", Type_Token_toString(actual).c_str(), lexer->get_index_file(), lexer->get_index_line());
        expr = new String("ERROR :c");
        break;
    }
    nextToken();
    return expr;
}

bool isKeywordType(std::string str)
{

    return str == "float" ||
           str == "int" ||
           str == "string" ||
           str == "bool" ||
           str == "void";
}

Type getTypeFrom(std::string str)
{
    Type t = Type::Null();
    if (str == "int")
    {
        t = Type::Integer();
    }
    else if (str == "bool")
    {
        t = Type::Bool();
    }
    else if (str == "float")
    {
        t = Type::Float();
    }
    else if (str == "string")
    {
        t = Type::String();
    } else if(str == "void") {
        t = Type::Void();
    }
    return t;
}
