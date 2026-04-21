#include "while.h"
#include "../../../visitor/type_checker.h"

std::string While::to_string() const
{
    return "While(" + condition->to_string() + ", " + block->to_string() + ")";
}
void While::pretty_print(int ident) const
{
    std::cout << "while (";
    condition->pretty_print();
    std::cout << ")";
    block->pretty_print(ident + 1);
}

bool While::accept(TypeChecker *visitor, Type type)
{
    return visitor->visitWhile(this, type);
}
