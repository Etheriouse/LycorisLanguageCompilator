#ifndef variable_h
#define variable_h

#include <string>
#include <iostream>
#include "../expression.h"

class Variable : public Expression
{
public:
    Variable(std::string name) : name(name) {};
    std::string to_string() const override;
    void pretty_print() const override;
    bool accept(TypeCheckerExpr *visitor, Type type) override;
    std::string name;
};

#endif