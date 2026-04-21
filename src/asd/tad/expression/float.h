#ifndef float_h
#define float_h

#include <iostream>
#include <string>
#include "../expression.h"

class Float : public Value
{
public:
    Float(float x) : x(x) {};
    float getFloat();
    std::string to_string() const override;
    void pretty_print() const override;
    bool accept(TypeCheckerExpr *visitor, Type type) override;
    float x;
};

#endif