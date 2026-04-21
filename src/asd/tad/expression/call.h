#ifndef call_h
#define call_h

#include "../expression.h"
#include <string>
#include <iostream>
#include <vector>

class Call : public Expression
{
public:
    Call(std::string name, std::vector<Expression *> list) : name(name), parameters(list) {};
    std::string to_string() const override;
    void pretty_print() const override;
    bool accept(TypeCheckerExpr *visitor, Type type) override;
    std::string name;
    std::vector<Expression *> parameters;
};

#endif