#ifndef return_h
#define return_h

#include <string>
#include <iostream>

#include "../instruction.h"
#include "../expression.h"

class Return : public Instruction
{
public:
    Return(Expression *expr) : value(expr) {};
    ~Return();
    std::string to_string() const override;
    void pretty_print(int ident) const override;
    bool accept(TypeChecker *visitor, Type type) override;
    Expression *value;
};


#endif