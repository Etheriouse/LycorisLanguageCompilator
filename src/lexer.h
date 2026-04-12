#ifndef lexer_cc
#define lexer_cc

#include <string>
#include <vector>
#include <iostream>

enum class Token
{
    String,
    Integer,
    Float,
    Boolean,
    Keyword,
    Ident,
    LBracket, // {
    RBracket,  // }
    LParen, // (
    RParen, // )
    LSBracket, // [
    RSBracket, // ]
    SemiColon, // ;
    Star, // 
    Eq, // =
    Not, // !
    Add, // +
    Sub, // -
    Div, // /
    LCrochet, // <
    RCrochet, // >
    Mod, // %
    Bar, // |
    Esperluet,
    Error,
    Null,
};

std::string Type_Token_toString(Token t);

class Lexer
{

public:
    Lexer(const char *filename, char separator);
    ~Lexer() = default;
    std::string get_word(Token *t);
    bool is_a_keyword(std::string str);
    void add_keyword(std::string key);
    char get_char();

    void set_keyword_list(std::vector<std::string> l_key);
    void set_float_separator(char separator);
    void set_str_separator(char separator);

    u_int64_t get_index_line() {
        return index_line;
    }

    u_int64_t get_index_file() {
        return index_file;
    }

private:
    std::string get_not_alpha_char(Token *t);

    /**
     * Excalty like index++
     * return value befor incr
     */
    u_int64_t incrIndex() {
        u_int64_t tmp = index;
        index++;
        index_line++;
        if (file[index] == '\n')
        {
            index_line = 0;
            index_file++;
        }
        return tmp;
    }

    std::string file;
    std::vector<std::string> keywords;
    u_int64_t index = 0;
    u_int64_t index_line = 1;
    u_int64_t index_file = 1;
    char separator = ' ';
    char float_separator = '.';
    char str_separator = '"';
};

#endif