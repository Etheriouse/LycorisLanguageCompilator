#ifndef lexer_cc
#define lexer_cc

#include <string>
#include <vector>

enum Type_Token
{
    String,
    Integer,
    Float,
    Keyword,
    SpecialChar,
    Ident,
    Error,
    Null,
};

std::string Type_Token_toString(Type_Token t);

class Lexer
{

public:
    Lexer(const char *filename, char separator);
    std::string get_word(Type_Token *t);
    bool is_a_keyword(std::string str);
    void add_keyword(std::string key);
    char get_char();

    void set_keyword_list(std::vector<std::string> l_key);
    void set_float_separator(char separator);
    void set_str_separator(char separator);

private:
    std::string get_not_alpha_char(Type_Token *t);

    std::string file;
    std::vector<std::string> keywords;
    unsigned long int index_file;
    char separator = ' ';
    char float_separator = '.';
    char str_separator = '"';
};

#endif