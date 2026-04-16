#include "preprocessor.h"
#include <fstream>
#include <iostream>
#include <cctype>
#include <sstream>
#include <map>

#include "lib/string_operation.h"

using namespace std;

Preprocessor::Preprocessor(const char *filename)
{
    std::ifstream file(filename);
    if (!file)
        throw std::runtime_error("Cannot open file");

    std::stringstream buffer;
    buffer << file.rdbuf();
    this->file = buffer.str();
}

string Preprocessor::process()
{
    // search all line with define and replace
    replace_define(&this->file);
    include(&this->file);
    return file;
}

bool isIdentChar_(char i)
{
    return isalpha(i) || i == '_';
}

void Preprocessor::replace_define(string *file)
{
    map<string, string> defines;
    for (size_t i = 0; i < file->size(); i++)
    {
        if (file->substr(i, 8) == "#define ")
        {
            size_t end_define = file->find('\n', i) - i;
            if (end_define == std::string::npos)
                end_define = file->size();
            std::string tmp = file->substr(i, end_define).erase(0, 8);
            cout << tmp << endl;
            size_t pos = tmp.find(' ');
            std::string first = tmp.substr(0, pos);
            std::string rest = (pos == std::string::npos) ? "" : tmp.substr(pos + 1);
            defines.insert({first, rest});
            file->erase(i, end_define);
            i--;
        }
    }

    size_t index = 0;
    while (index < file->size())
    {
        size_t start = index;

        while (index < file->size() && isIdentChar_(((*file)[index])))
            index++;

        std::string word = file->substr(start, index - start);

        auto it = defines.find(word);
        if (it != defines.end())
        {
            file->replace(start, word.size(), it->second);

            index = start + it->second.size();
        }
        else
        {
            index++;
        }
    }
}

void Preprocessor::include(string *file)
{
    for (size_t i = 0; i < file->size(); i++)
    {
        if (file->substr(i, 9) == "#include ")
        {
            
            size_t end_include = file->find('\n', i);
            if (end_include == std::string::npos)
                end_include = file->size();
            string filename = split(file->substr(i, end_include - i).erase(0, 9), '"')[1];
            std::ifstream f(filename);
            if (!f)
                throw std::runtime_error("Cannot open file");
            std::stringstream buffer;
            buffer << f.rdbuf();
            file->erase(i, end_include - i);
            std::string file_content = buffer.str();
            replace_define(&file_content);
            file->insert(i, file_content);
            i+=buffer.str().size();
        }
    }
}
