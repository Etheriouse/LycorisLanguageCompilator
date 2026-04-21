#include "return.h"
#include "../../../visitor/type_checker.h"

#define UNUSED(expr) (void)(expr)

std::string Return::to_string() const
{
    return "Return(" + value->to_string() + ")";
}
void Return::pretty_print(int ident) const
{
    UNUSED(ident);
    std::cout << "return ";
    value->pretty_print();
    std::cout << ";";
}

bool Return::accept(TypeChecker *visitor, Type type)
{
    return visitor->visitReturn(this, type);
}
