#ifndef char_h
#define char_h

#include <iostream>
#include <string>
#include "../expression.h"

class Char : public Value
{
public:
    Char(char c) : c(c) {};
    char getChar();
    std::string to_string() const override;
    void pretty_print() const override;
    bool accept(TypeCheckerExpr *visitor, Type type) override;
    char c;
};


#endif