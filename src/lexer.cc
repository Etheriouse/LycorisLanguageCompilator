#include <lexer.h>
#include <fstream>
#include <iostream>
#include <cctype>
#include <sstream>

bool isIdentChar(char i) {
    return isalpha(i) || i == '_';
}

Lexer::Lexer(const char *filename, char separtor)
{
    this->preprocessor = new Preprocessor(filename);
    this->file = this->preprocessor->process();
    this->separator = separator;
    std::cout << file << std::endl;
}

char Lexer::get_char()
{
    if (index > file.size() - 1)
    {
        index = 0;
        return '\0';
    }
    incrIndex();
    return file[index - 1];
}

std::string Lexer::get_word(Token *t)
{
    index_file_prev = index_file;
    index_line_prev = index_line;
    std::string value = get_word_p(t);
    return value;
}

std::string Lexer::get_word_p(Token *t)
{
    std::string str;
    if (index >= file.size())
    {
        (*t) = Token::Null;
        return str;
    }
    while (file[index] == separator || file[index] == '\n')
    {
        incrIndex();
    }
    if (!isIdentChar(file[index]))
        return get_not_alpha_char(t);

    (*t) = Token::Ident;
    while (file[index] != separator)
    {
        if (!isIdentChar(file[index]))
        {
            if (is_a_bool_keyword(str))
                (*t) = Token::Boolean;
            if (is_a_keyword(str))
                (*t) = Token::Keyword;
            return str;
        }
        str += file[index];
        incrIndex();
    }
    if (is_a_keyword(str))
        (*t) = Token::Keyword;

    return str;
}

std::string get_special_char(char c, Token *t);

std::string Lexer::get_not_alpha_char(Token *t)
{

    if (file[index] == float_separator)
    {
        (*t) = Token::Float;
        std::string str_num;
        do
        {
            str_num += file[index];
            incrIndex();
        } while (isdigit(file[index]));
        return str_num;
    }
    else if (isdigit(file[index]))
    {
        (*t) = Token::Integer;
        std::string str_num;
        char nb_float_sep = 0;
        while (isdigit(file[index]) || file[index] == float_separator)
        {
            if (file[index] == float_separator)
            {
                nb_float_sep++;
                (*t) = Token::Float;
            }
            str_num += file[index];
            incrIndex();
            if (nb_float_sep > 1)
            {
                (*t) = Token::Error;
                return "ERROR";
            }
        }
        return str_num;
    }
    else if (file[index] == str_separator)
    {
        (*t) = Token::String;
        std::string str_;
        get_char();
        while (file[index] != str_separator)
        {
            str_ += file[index];
            incrIndex();
        }
        get_char();
        return str_;
    }
    else
    {
        return get_special_char(file[incrIndex()], t);
    }
}

std::string get_special_char(char c, Token *t)
{
    switch (c)
    {
    case '[':
        (*t) = Token::LSBracket;
        return "[";
    case ']':
        (*t) = Token::RSBracket;
        return "]";
    case '{':
        (*t) = Token::LBracket;
        return "{";
    case '}':
        (*t) = Token::RBracket;
        return "}";
    case '(':
        (*t) = Token::LParen;
        return "(";
    case ')':
        (*t) = Token::RParen;
        return ")";
    case ';':
        (*t) = Token::SemiColon;
        return ";";
    case '+':
        (*t) = Token::Add;
        return "+";
    case '-':
        (*t) = Token::Sub;
        return "-";
    case '*':
        (*t) = Token::Star;
        return "*";
    case '/':
        (*t) = Token::Div;
        return "/";
    case '=':
        (*t) = Token::Eq;
        return "=";
    case '!':
        (*t) = Token::Not;
        return "!";
    case '<':
        (*t) = Token::LCrochet;
        return "<";
    case '>':
        (*t) = Token::RCrochet;
        return ">";
    case '%':
        (*t) = Token::Mod;
        return "%";
    case '|':
        (*t) = Token::Bar;
        return "|";
    case '&':
        (*t) = Token::Esperluet;
        return "&";
    case '#':
        (*t) = Token::Hashtag;
        return "#";
    case ',':
        (*t) = Token::Comma;
        return ",";
    default:
        (*t) = Token::Error;
        return "Error";
    }
}

bool Lexer::is_a_keyword(std::string str)
{
    for (unsigned long int i = 0; i < keywords.size(); i++)
    {
        if (keywords[i] == str)
        {
            return true;
        }
    }
    return false;
}

bool Lexer::is_a_bool_keyword(std::string str)
{
    for (unsigned long int i = 0; i < bool_keywords.size(); i++)
    {
        if (bool_keywords[i] == str)
        {
            return true;
        }
    }
    return false;
}

void Lexer::add_keyword(std::string key)
{
    this->keywords.push_back(key);
}

void Lexer::set_keyword_list(std::vector<std::string> l_key)
{
    for (unsigned long int i = 0; i < l_key.size(); i++)
    {
        this->keywords.push_back(l_key[i]);
    }
}

void Lexer::set_bool_keyword_list(std::vector<std::string> l_key)
{
    for (unsigned long int i = 0; i < l_key.size(); i++)
    {
        this->bool_keywords.push_back(l_key[i]);
    }
}

void Lexer::set_float_separator(char separator)
{
    this->float_separator = separator;
}

void Lexer::set_str_separator(char separator)
{
    this->str_separator = separator;
}
std::string special_char_token_print(Token t);
std::string Type_Token_toString(Token t)
{
    switch (t)
    {
    case Token::String:
        return "String";
    case Token::Integer:
        return "Integer";
    case Token::Float:
        return "Float";
    case Token::Keyword:
        return "Keyword";
    case Token::Ident:
        return "Ident";
    case Token::Boolean:
        return "Boolean";
    case Token::Null:
        return "Null";
    case Token::Error:
        return "Error";
    default:
        return special_char_token_print(t);
    }
}

std::string special_char_token_print(Token t)
{
    switch (t)
    {
    case Token::LSBracket:
        return "Left square bracket";
    case Token::RSBracket:
        return "Right square bracket";
    case Token::LBracket:
        return "Left bracket";
    case Token::RBracket:
        return "Right bracket";
    case Token::LParen:
        return "Left parenthese";
    case Token::RParen:
        return "Right parenthese";
    case Token::SemiColon:
        return "Semicolon";
    case Token::Add:
        return "Plus";
    case Token::Sub:
        return "Minus";
    case Token::Star:
        return "Star";
    case Token::Div:
        return "Slash";
    case Token::Eq:
        return "Equal";
    case Token::Not:
        return "Exclamation";
    case Token::LCrochet:
        return "Left crochet";
    case Token::RCrochet:
        return "Right crochet";
    case Token::Mod:
        return "Pourcent";
    case Token::Bar:
        return "Bar";
    case Token::Esperluet:
        return "Esperluet";
    case Token::Hashtag:
        return "Hashtag";
    case Token::Comma:
        return "Comma";
    default:
        return "Unknown";
    }
}
