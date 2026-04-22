#ifndef arrayatom_h
#define arrayatom_h

#include <string>
#include <vector>
#include <iostream>
#include "../expression.h"

class ArrayAtom : public Expression
{
public:
    ArrayAtom(std::string name, std::vector<Expression *> expr) : name(name), index(expr) {};
    ~ArrayAtom();
    std::string to_string() const override;
    void pretty_print() const override;
    bool accept(TypeCheckerExpr *visitor, Type type) override;
    std::string name;
    std::vector<Expression *> index;
};

#endif