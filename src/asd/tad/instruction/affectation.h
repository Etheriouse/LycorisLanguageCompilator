#ifndef affectation_h
#define affectation_h

#include <vector>
#include <string>
#include <iostream>

#include "../instruction.h"
#include "../expression.h"

class Affectation : public Instruction
{
public:
    Affectation(std::string name, Expression *expr) : name(name), value(expr), index(std::vector<Expression *>()) {};
    Affectation(std::string name, Expression *expr1, std::vector<Expression *> expr2) : name(name), value(expr1), index(expr2) {};
    ~Affectation();
    std::string to_string() const override;
    void pretty_print(int ident) const override;
    bool accept(TypeChecker *visitor, Type type) override;
    std::string name;
    Expression *value;
    std::vector<Expression *> index;
};

#endif