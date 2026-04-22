#ifndef binop_h
#define binop_h

#include <string>
#include <iostream>
#include "../expression.h"
#include "../../operator_tad.h"

class Binop : public Expression
{
public:
    Binop(Operator op, Expression *expr1, Expression *expr2) : op(op), a(expr1), b(expr2) {};
    ~Binop();
    std::string to_string() const override ;
    void pretty_print() const override;
    bool accept(TypeCheckerExpr *visitor, Type type) override;
    Operator op;
    Expression *a;
    Expression *b;
};

#endif