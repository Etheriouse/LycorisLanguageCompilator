#include "declaration.h"
#include "../../../visitor/type_checker.h"

#define UNUSED(expr) (void)(expr)

std::string Declaration::to_string() const
{
    std::string str = "Declaration(" + type.to_string();
    for (Declare d : variables)
    {
        str += ", ";
        str += "(" + d.name;
        if (d.value.isPresent())
        {
            str += ", " + d.value.get()->to_string();
        }
        str += ")";
    }
    return str + ")";
}
void Declaration::pretty_print(int ident) const
{
    UNUSED(ident);
    std::cout << type.to_string() << " ";
    int i = 0;
    for (Declaration::Declare d : variables)
    {
        if (i > 0)
            std::cout << ", ";
        std::cout << d.name;
        if (d.value.isPresent())
        {
            std::cout << " = ";
            d.value.get()->pretty_print();
        }
        i++;
    }
    std::cout << ";";
}

bool Declaration::accept(TypeChecker *visitor, Type type)
{
    return visitor->visitDeclaration(this, type);
}
