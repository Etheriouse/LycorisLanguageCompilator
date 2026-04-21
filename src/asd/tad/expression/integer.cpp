#include "integer.h"
#include "../../../visitor/type_checker.h"

int Integer::getInt()
{
    return n;
}
std::string Integer::to_string() const
{
    return "Integer(" + std::to_string(n) + ")";
}
void Integer::pretty_print() const
{
    std::cout << n;
};
bool Integer::accept(TypeCheckerExpr *visitor, Type type)
{
    return visitor->visitInteger(this, type);
}
