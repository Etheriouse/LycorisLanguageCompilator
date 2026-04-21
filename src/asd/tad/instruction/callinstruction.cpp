#include "callinstruction.h"
#include "../../../visitor/type_checker.h"

#define UNUSED(expr) (void)(expr)

std::string CallInstruction::to_string() const
{
    return call->to_string();
}
void CallInstruction::pretty_print(int ident) const
{
    UNUSED(ident);
    call->pretty_print();
    std::cout << ";";
}

bool CallInstruction::accept(TypeChecker *visitor, Type type)
{
    return visitor->visitCallInstruction(this, type);
}
