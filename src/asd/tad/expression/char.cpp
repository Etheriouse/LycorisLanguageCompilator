#include "char.h"
#include "../../../visitor/type_checker.h"

char Char::getChar()
{
    return c;
}
std::string Char::to_string() const
{
    ;
    return "Char(" + std::to_string(c) + ")";
}
void Char::pretty_print() const
{
    std::cout << "'" << c << "'";
};
bool Char::accept(TypeCheckerExpr *visitor, Type type)
{
    return visitor->visitChar(this, type);
}