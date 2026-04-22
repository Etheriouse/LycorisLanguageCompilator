#include "unary.h"
#include "../../../visitor/type_checker.h"

Unary::~Unary() {
    delete a;
}

std::string Unary::to_string() const
{
    return "Unary(" + (op.to_string()) + ", " + a->to_string() + ")";
}
void Unary::pretty_print() const
{
    op.pretty_print();
    a->pretty_print();
};
bool Unary::accept(TypeCheckerExpr *visitor, Type type)
{
    return visitor->visitUnary(this, type);
}