#include "bool.h"
#include "../../../visitor/type_checker.h"

bool Bool::getBool()
{
    return b;
}
std::string Bool::to_string() const
{
    return "Bool(" + std::to_string(b) + ")";
}
void Bool::pretty_print() const
{
    std::cout << (b ? "true" : "false");
};
bool Bool::accept(TypeCheckerExpr *visitor, Type type)
{
    return visitor->visitBool(this, type);
}