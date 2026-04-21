#include "call.h"
#include "../../../visitor/type_checker.h"

std::string Call::to_string() const
{
    std::string s = "Call(";
    int i = 0;
    for (auto exp : parameters)
    {
        if (i > 0)
            s += ", ";
        s += exp->to_string();
        i++;
    };
    return s + ")";
}

void Call::pretty_print() const
{
    std::cout << name << "(";
    int i = 0;
    for (auto exp : parameters)
    {
        if (i > 0)
            std::cout << ", ";
        exp->pretty_print();
        i++;
    };
    std::cout << ")";
};

bool Call::accept(TypeCheckerExpr *visitor, Type type)
{
    return visitor->visitCall(this, type);
}