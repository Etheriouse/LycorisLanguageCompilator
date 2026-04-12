#ifndef parser_h
#define parser_h

#include <lexer.h>
#include "asd/program.h"

class Parser
{

public:
    Parser(const char *program_filename, const char *config_filename);
    ~Parser();
    void nextToken()
    {
        actual = next;
        str = next_str;
        next_str = lexer->get_word(&next);
        printf("LOG: act %s\n", Type_Token_toString(actual).c_str());
        // printf("LOG: nxt %s\n", Type_Token_toString(next).c_str());
    }
    Expression *parse();

private:
    Token actual = Token::Null;
    Token next = Token::Null;
    Lexer *lexer;
    std::string str;
    std::string next_str;

    Expression *parseExpression();
    Expression *parseXor();
    Expression *parseAnd();
    Expression *parseEqual();
    Expression *parseCompare();
    Expression *parseAddsub();
    Expression *parseMuldivMod();
    Expression *parseUnary();
    Expression *parseAtoms();
};

#endif