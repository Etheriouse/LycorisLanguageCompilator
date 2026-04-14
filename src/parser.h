#ifndef parser_h
#define parser_h

#include <lexer.h>
#include "asd/program.h"
#include "lib/console.h"

class Parser
{

public:
    Parser(const char *program_filename, const char *config_filename);
    ~Parser();
    Program *parse();

private:
    Token actual = Token::Null;
    Token next = Token::Null;
    Lexer *lexer;
    std::string str;
    std::string next_str;
    bool quit = false;

    Function *parseFunction();

    Instruction *parseInstruction();
    Instruction *parseKeyword();
    Instruction *parseIf();
    Instruction *parseWhile();
    Instruction *parseDeclaration();
    Instruction *parseReturn();

    Expression *parseExpression();
    Expression *parseXor();
    Expression *parseAnd();
    Expression *parseEqual();
    Expression *parseCompare();
    Expression *parseAddsub();
    Expression *parseMuldivMod();
    Expression *parseUnary();
    Expression *parseAtoms();

    void nextToken(std::string id = "")
    {
        actual = next;
        str = next_str;
        next_str = lexer->get_word(&next);
#ifdef verbose
        logf("%sToken %s", id.c_str(), Type_Token_toString(actual).c_str());
#endif
    }
};

#endif