#ifndef while_h
#define while_h

#include "../instruction.h"
#include "../expression.h"
#include <string>
#include <iostream>

class While : public Instruction
{
public:
    While(Expression *expr, Instruction *inst) : condition(expr), block(inst) {}
    ~While();
    std::string to_string() const override;
    void pretty_print(int ident) const override;
    bool accept(TypeChecker *visitor, Type type) override;
    Expression *condition;
    Instruction *block;
};



#endif