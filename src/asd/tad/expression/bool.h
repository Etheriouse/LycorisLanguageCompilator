#ifndef bool_h
#define bool_h

#include <iostream>
#include <string>
#include "../expression.h"

class Bool : public Value
{
public:
    Bool(bool b) : b(b) {};
    bool getBool();
    std::string to_string() const override;
    void pretty_print() const override;
    bool accept(TypeCheckerExpr *visitor, Type type) override;
    bool b;
};

#endif