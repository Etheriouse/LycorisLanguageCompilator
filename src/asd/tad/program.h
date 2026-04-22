#ifndef program_h
#define program_h

#include <string>
#include <vector>

#include "definition.h"


class Program
{
public:
    Program(std::vector<Definition *> defs) : defs(defs) {};
    ~Program();
    std::string to_string() const;
    void pretty_print(int ident = 0) const;
    std::vector<Definition *> defs;
};

#endif