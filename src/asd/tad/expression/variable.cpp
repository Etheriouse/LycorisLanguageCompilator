#include "variable.h"
#include "../../../visitor/type_checker.h"

std::string Variable::to_string() const
{
    return "Variable(" + name + ")";
}
void Variable::pretty_print() const
{
    std::cout << name;
};
bool Variable::accept(TypeCheckerExpr *visitor, Type type)
{
    return visitor->visitVariable(this, type);
}
