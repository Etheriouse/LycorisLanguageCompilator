#include "affectation.h"
#include "../../../visitor/type_checker.h"

#define UNUSED(expr) (void)(expr)

Affectation::~Affectation() {
    delete value;
    for(auto ind : index) {
        delete ind;
    }
}

std::string Affectation::to_string() const
{
    std::string str = "Affectation(" + name + ", ";
    for (auto ind : index)
    {
        str += ind->to_string();
        str += ", ";
    }
    return str + value->to_string() + ")";
}
void Affectation::pretty_print(int ident) const
{
    UNUSED(ident);
    std::cout << name;
    for (auto ind : index)
    {
        std::cout << "[";
        ind->pretty_print();
        std::cout << "]";
    }
    std::cout << "=";
    value->pretty_print();
    std::cout << ";";
}

bool Affectation::accept(TypeChecker *visitor, Type type)
{
    return visitor->visitAffectation(this, type);
}
