#include <parser.h>

#include <fstream>
#include <iostream>
#include <cctype>
#include <string>
#include <vector>

#include "lib/utils.h"

using namespace std;

#define notfound (long unsigned int)-1

std::vector<std::string> split(const std::string &str, char delimiter);

Parser::Parser(const char *program_filename, const char *config_filename)
{
    std::ifstream file(config_filename);
    std::string str;
    std::vector<std::string> keyword;
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
            keyword = split(str.substr(index + 1, str.size() - 1), ' ');
        }
    }

    this->lexer = new Lexer(program_filename, separator);
    this->lexer->set_float_separator(float_s);
    this->lexer->set_str_separator(str_s);
    this->lexer->set_keyword_list(keyword);
    next_str = lexer->get_word(&next);
    nextToken();
}

Parser::~Parser()
{
    delete lexer;
}

Expression *Parser::parse()
{
    return parseExpression();
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
        std::cout << "xor detected" << std::endl;
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
        std::cout << "compar detected" << std::endl;
        if (!(op == Operator::Gt || op == Operator::Lt))
        {
            std::cout << "ge or le" << std::endl;
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
    if (actual == Token::Not || actual == Token::Sub)
    {
        Operator op = (actual == Token::Not) ? Operator::Not : Operator::Minus;
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
        std::cout << "int register " << stoi(str.c_str()) << std::endl;
        break;
    case Token::Float:
        expr = new Float(stof(str.c_str()));
        std::cout << "float register " << stof(str.c_str()) << std::endl;
        break;
    case Token::Boolean:
        expr = new Boolean(str == "true");
        std::cout << "bool register " << str << std::endl;
        break;
    case Token::String:
        expr = new String(str);
        std::cout << "str register " << str << std::endl;
        break;

    case Token::LParen:
    {
        nextToken();
        Expression *e = parseExpression();
        if (actual != Token::RParen)
        {
            printf("Parenthese not closedat %lu:%lu\n", lexer->get_index_file(), lexer->get_index_line());
        }
        expr = e;
        break;
    }

    default:
        printf("Previous token wait an atoms, but get %s at %lu:%lu\n", Type_Token_toString(actual).c_str(), lexer->get_index_file(), lexer->get_index_line());
        expr = new String("ERROR :c");
        break;
    }
    nextToken();
    return expr;
}