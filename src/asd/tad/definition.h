
#ifndef definition_h
#define definition_h

#include <vector>

#include "../operator_tad.h"
#include "instruction.h"

class Definition
{
public:
    typedef struct
    {
        Type t;
        std::string name;
    } Parameter;

    Definition(Type t, std::string name, std::vector<Parameter> list, Instruction *i) : t(t), name(name), parameters(list), block(i) {};
    std::string to_string() const;
    void pretty_print(int ident) const;
    Type t;
    std::string name;
    std::vector<Parameter> parameters;
    Instruction *block;
};

#endif