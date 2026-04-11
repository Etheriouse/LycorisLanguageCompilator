#ifndef parser_h
#define parser_h

#include <lexer.h>

class Parser
{

public:
    Parser(const char *program_filename, const char *config_filename);
    ~Parser();
    void parse();

private:
    Lexer *lexer;

};

#endif