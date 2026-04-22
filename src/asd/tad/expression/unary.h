#ifndef unary_h
#define unary_h

#include <string>
#include <iostream>
#include "../expression.h"
#include "../../operator_tad.h"

class Unary : public Expression
{
public:
    Unary(Operator op, Expression *expr) : op(op), a(expr) {};
    ~Unary();
    std::string to_string() const override;
    void pretty_print() const override;
    bool accept(TypeCheckerExpr *visitor, Type type) override;
    Operator op;
    Expression *a;
};

#endif