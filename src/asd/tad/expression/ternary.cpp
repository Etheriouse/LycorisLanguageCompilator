#include "ternary.h"
#include "../../../visitor/type_checker.h"

std::string Ternary::to_string() const
{
    return "Ternary(" + cond->to_string() + ", " + a->to_string() + ", " + b->to_string() + ")";
}
void Ternary::pretty_print() const
{
    cond->pretty_print();
    std::cout << " ? ";
    a->pretty_print();
    std::cout << " : ";
    b->pretty_print();
}
bool Ternary::accept(TypeCheckerExpr *visitor, Type type)
{
    return visitor->visitTernary(this, type);
}