#ifndef ternary_h
#define ternary_h

#include <string>
#include <iostream>
#include "../expression.h"

class Ternary : public Expression
{
public:
    Ternary(Expression *a, Expression *b, Expression *c) : cond(a), a(b), b(c) {};
    ~Ternary();
    std::string to_string() const override;
    void pretty_print() const override;
    bool accept(TypeCheckerExpr *visitor, Type type) override;
    Expression *cond, *a, *b;
};

#endif