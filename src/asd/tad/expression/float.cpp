#include "float.h"
#include "../../../visitor/type_checker.h"

float Float::getFloat()
{
    return x;
}
std::string Float::to_string() const
{
    return "Float(" + std::to_string(x) + ")";
}
void Float::pretty_print() const
{
    std::cout << x;
};
bool Float::accept(TypeCheckerExpr *visitor, Type type)
{
    return visitor->visitFloat(this, type);
}