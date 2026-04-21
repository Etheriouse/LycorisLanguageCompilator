#include "program.h"
#define UNUSED(expr) (void)(expr)


std::string Program::to_string() const
{
    std::string str = "Program(";
    for (auto def : defs)
    {
        str += def->to_string();
    }
    return str + ")";
}
void Program::pretty_print(int ident) const
{
    UNUSED(ident);
    for (auto def : defs)
    {
        def->pretty_print(ident);
    }
}