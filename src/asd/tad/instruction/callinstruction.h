#ifndef callinstruction_h
#define callinstruction_h

#include <iostream>
#include <string>

#include "../instruction.h"
#include "../expression.h"
#include "../expression/call.h"

class CallInstruction : public Instruction
{
public:
    CallInstruction(Call *c) : call(c) {};
    std::string to_string() const override;
    void pretty_print(int ident) const override;
    bool accept(TypeChecker *visitor, Type type) override;
    Call *call;
};

#endif