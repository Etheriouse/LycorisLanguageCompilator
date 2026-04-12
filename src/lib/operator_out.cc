#include "../asd/program.h"

std::ostream &operator<<(std::ostream &os, const Expression &expr)
{
    return os << expr.to_string();
}

std::ostream &operator<<(std::ostream &os, const Instruction &instr)
{
    return os << instr.to_string();
}