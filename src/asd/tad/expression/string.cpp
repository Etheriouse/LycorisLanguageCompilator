#include "string.h"
#include "../../../visitor/type_checker.h"

std::string String::getString()
{
    return str;
}
std::string String::to_string() const
{
    return "String(" + str + ")";
}
void String::pretty_print() const
{
    std::cout << "\"" << str << "\"";
};
bool String::accept(TypeCheckerExpr *visitor, Type type)
{
    return visitor->visitString(this, type);
}
