#include "block.h"
#include "../../../lib/utils.h"
#include "../../../visitor/type_checker.h"

#define tab "   "

std::string Block::to_string() const
{
    std::string str = "Block(";
    std::vector<std::string> parts;

    for (auto inst : instructions)
    {
        parts.push_back(inst->to_string());
    }

    str += join(parts, ", ");
    return str += ")";
}

void Block::pretty_print(int ident) const
{
    std::cout << std::endl;
    for (int i = 0; i < ident - 1; i++)
    {
        std::cout << tab;
    }
    std::cout << "{" << std::endl;
    for (auto instr : instructions)
    {
        for (int i = 0; i < ident; i++)
        {
            std::cout << tab;
        }
        instr->pretty_print(ident);
        std::cout << std::endl;
    }
    for (int i = 0; i < ident - 1; i++)
    {
        std::cout << tab;
    }
    std::cout << "}" << std::endl;
}

bool Block::accept(TypeChecker *visitor, Type type)
{
    return visitor->visitBlock(this, type);
}
