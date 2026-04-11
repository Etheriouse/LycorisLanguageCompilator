#include <lexer.h>
#include <fstream>
#include <iostream>
#include <cctype>

Lexer::Lexer(const char *filename, char separtor)
{
    std::ifstream file(filename);
    std::string str;
    while (getline(file, str))
    {
        this->file += str;
    }
    this->separator = separtor;
}

char Lexer::get_char()
{
    if (index_file > file.size() - 1)
    {
        index_file = 0;
        return '\0';
    }
    index_file++;
    return file[index_file - 1];
}

std::string Lexer::get_word(Type_Token *t)
{
    std::string str;
    printf("%lu\n", index_file);
    if (index_file == file.size())
    {
        (*t) = Null_t;
        return str;
    }
    while (file[index_file] == separator)
    {
        index_file++;
    }
    if (!isalpha(file[index_file]))
        return get_not_alpha_char(t);

    (*t) = Ident_t;
    while (file[index_file] != separator)
    {
        if (!isalpha(file[index_file]))
        {
            if (is_a_keyword(str))
                (*t) = Keyword_t;
            return str;
        }
        str += file[index_file];
        index_file++;
    }
    if (is_a_keyword(str))
        (*t) = Keyword_t;
    return str;
}

std::string Lexer::get_not_alpha_char(Type_Token *t)
{

    if (file[index_file] == float_separator)
    {
        (*t) = Float_t;
        std::string str_num;
        do
        {
            str_num += file[index_file];
            index_file++;
        } while (isdigit(file[index_file]));
        return str_num;
    }
    else if (isdigit(file[index_file]))
    {
        (*t) = Integer_t;
        std::string str_num;
        char nb_float_sep = 0;
        while (isdigit(file[index_file]) || file[index_file] == float_separator)
        {
            if (file[index_file] == float_separator)
            {
                nb_float_sep++;
                (*t) = Float_t;
            }
            str_num += file[index_file];
            index_file++;
            if (nb_float_sep > 1)
            {
                (*t) = Error_t;
                return "ERROR";
            }
        }
        return str_num;
    }
    else if (file[index_file] == str_separator)
    {
        (*t) = String_t;
        std::string str_;
        get_char();
        while (file[index_file] != str_separator)
        {
            str_ += file[index_file];
            index_file++;
        }
        get_char();
        return str_;
    }
    else
    {
        std::string str;
        (*t) = SpecialChar_t;
        return str + file[index_file++];
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

void Lexer::set_float_separator(char separator)
{
    this->float_separator = separator;
}

void Lexer::set_str_separator(char separator)
{
    this->str_separator = separator;
}

std::string Type_Token_toString(Type_Token t)
{
    switch (t)
    {
    case String_t:
        return "String";
    case Integer_t:
        return "Integer";
    case Float_t:
        return "Float";
    case Keyword_t:
        return "Keyword";
    case SpecialChar_t:
        return "SpecialChar";
    case Ident_t:
        return "Ident";
    default:
        return "Unknown";
    }
}
