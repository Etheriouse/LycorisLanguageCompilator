#include <parser.h>

#include <fstream>
#include <iostream>
#include <cctype>
#include <string>
#include <vector>

using namespace std;

#define notfound (long unsigned int) -1

std::vector<std::string> split(const std::string& str, char delimiter);

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
        } else if(str.rfind("keyword", 0) != notfound) {
            size_t index = str.find('\'');
            keyword = split(str.substr(index+1, str.size()-1), ' ');
        }
    }

    this->lexer = new Lexer(program_filename, separator);
    this->lexer->set_float_separator(float_s);
    this->lexer->set_str_separator(str_s);
    this->lexer->set_keyword_list(keyword);
}

Parser::~Parser() {
    delete lexer;
}


void Parser::parse() {
    Type_Token t;
    while(t != Null_t) {
        std::cout << lexer->get_word(&t) << " : " << Type_Token_toString(t) <<std::endl;
    }
}

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    size_t start = 0;
    size_t end = str.find(delimiter);
    
    while (end != std::string::npos) {
        tokens.push_back(str.substr(start, end - start));
        start = end + 1;
        end = str.find(delimiter, start);
    }
    
    tokens.push_back(str.substr(start));
    return tokens;
}