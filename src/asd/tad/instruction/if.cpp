#include "if.h"
#include "../../../visitor/type_checker.h"

std::string If::to_string() const 
{
    return "If(" + condition->to_string() + ", " + ifblock->to_string() + (elseblock.isPresent() ? ", " + elseblock.get()->to_string() + ")" : ")");
};

void If::pretty_print(int ident) const
{
    std::cout << "if (";
    condition->pretty_print();
    std::cout << ") ";
    ifblock->pretty_print(ident + 1);
    if (elseblock.isPresent())
    {
        std::cout << "else ";
        elseblock.get()->pretty_print(ident + 1);
    }
}

bool If::accept(TypeChecker *visitor, Type type)
{
    return visitor->visitIf(this, type);
}
