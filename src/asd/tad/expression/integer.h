#ifndef integer_h
#define integer_h

#include "../expression.h"
#include <iostream>
#include <string>

class Integer : public Value
{
public:
    Integer(int n) : n(n) {};
    int getInt();
    std::string to_string() const override;
    void pretty_print() const override;
    bool accept(TypeCheckerExpr *visitor, Type type) override;
    int n;
};


#endif