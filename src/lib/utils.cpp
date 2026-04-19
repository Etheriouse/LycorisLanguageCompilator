#include "utils.h"

std::vector<std::string> split(const std::string &str, char delimiter)
{
    std::vector<std::string> tokens;
    size_t start = 0;
    size_t end = str.find(delimiter);

    while (end != std::string::npos)
    {
        tokens.push_back(str.substr(start, end - start));
        start = end + 1;
        end = str.find(delimiter, start);
    }

    tokens.push_back(str.substr(start));
    return tokens;
}

std::string join(const std::vector<std::string>& parts, const std::string& sep)
{
    std::string result;

    for (size_t i = 0; i < parts.size(); i++)
    {
        if (i > 0)
            result += sep;

        result += parts[i];
    }

    return result;
}