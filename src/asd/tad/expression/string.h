#ifndef string_h
#define string_h

#include <iostream>
#include <string>
#include "../expression.h"

class String : public Value
{
public:
    String(std::string str) : str(str) {};
    std::string getString();
    std::string to_string() const override;
    void pretty_print() const override;
    bool accept(TypeCheckerExpr *visitor, Type type) override;
    std::string str;
};


#endif