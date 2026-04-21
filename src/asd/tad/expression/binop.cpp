#include "binop.h"
#include "../../../visitor/type_checker.h"

std::string Binop::to_string() const
{
    return "Binop(" + (op.to_string()) + ", " + a->to_string() + ", " + b->to_string() + ")";
}
void Binop::pretty_print() const
{
    a->pretty_print();
    std::cout << " ";
    op.pretty_print();
    std::cout << " ";
    b->pretty_print();
};
bool Binop::accept(TypeCheckerExpr *visitor, Type type)
{
    return visitor->visitBinop(this, type);
}