#include "preprocessor.h"
#include <fstream>
#include <iostream>
#include <cctype>
#include <sstream>

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

    return file;
}