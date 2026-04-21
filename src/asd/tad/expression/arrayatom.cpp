#include "arrayatom.h"
#include "../../../visitor/type_checker.h"

std::string ArrayAtom::to_string() const
{
    std::string s = "ArrayAtom(" + name;
    for (auto exp : index)
    {
        s += ", ";
        s += exp->to_string();
    };
    return s + ")";
}
void ArrayAtom::pretty_print() const
{
    std::cout << name;
    for (auto exp : index)
    {
        std::cout << "[";
        exp->pretty_print();
        std::cout << "]";
    };
};
bool ArrayAtom::accept(TypeCheckerExpr *visitor, Type type)
{
    return visitor->visitArrayAtom(this, type);
}
