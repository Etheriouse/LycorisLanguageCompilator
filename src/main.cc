#include <iostream>
#include <lexer.h>
using namespace std;

int main(int argc, char const *argv[])
{
    Lexer *lexer = new Lexer("main.llm", ' ');

    std::vector<std::string> keywords = {"int", "bool", "float", "string", "if", "else", "while", "for", "switch", "case", "true", "false"};
    lexer->set_keyword_list(keywords);
    lexer->set_float_separator('.');
    lexer->set_str_separator('"');

    Type_Token t;
    while(t != Null) {
        std::cout << lexer->get_word(&t) << " : " << Type_Token_toString(t) <<std::endl;
    }

    printf("Hello world!\n");
    return 0;
}

