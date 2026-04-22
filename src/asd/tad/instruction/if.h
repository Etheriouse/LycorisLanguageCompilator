#ifndef if_h
#define if_h

#include <string>
#include "../../optional.h"
#include <iostream>

#include "../instruction.h"
#include "../expression.h"

class If : public Instruction
{
public:
    If(Expression *expr, Instruction *inst) : condition(expr), ifblock(inst), elseblock(Optional<Instruction>::empty()) {}
    If(Expression *expr, Instruction *inst1, Instruction *inst2) : condition(expr), ifblock(inst1), elseblock(Optional<Instruction>::of(inst2)) {}
    ~If();
    std::string to_string() const override;
    void pretty_print(int ident) const override;
    bool accept(TypeChecker *visitor, Type type) override;
    Expression *condition;
    Instruction *ifblock;
    Optional<Instruction> elseblock;
};

#endif