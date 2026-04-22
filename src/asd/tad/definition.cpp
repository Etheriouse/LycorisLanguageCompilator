#include "definition.h"

Definition::~Definition() {
    delete block;
}

std::string Definition::to_string() const
{
    std::string str = "Definition(" + t.to_string() + ", " + name;
    for (auto p : parameters)
    {
        str += (", " + p.t.to_string() + " " + p.name);
    }
    str += block->to_string();
    return str + ")";
}

void Definition::pretty_print(int ident) const
{
    std::cout << t.to_string() << " " << name << "(";
    int i = 0;
    for (auto p : parameters)
    {
        if (i > 0)
            std::cout << ", ";
        std::cout << p.t.to_string() << " " << p.name;
    }
    std::cout << ")";
    block->pretty_print(ident + 1);
}