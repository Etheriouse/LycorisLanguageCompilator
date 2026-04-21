#ifndef expression_h
#define expression_h

class TypeCheckerExpr;

#include "../operator_tad.h"

class Expression
{
public:
    virtual void pretty_print() const = 0;
    virtual std::string to_string() const = 0;
    virtual bool accept(TypeCheckerExpr *visitor, Type type) = 0;
    virtual ~Expression() = default;
};

class Value : public Expression
{
public:
    virtual void pretty_print() const = 0;
    virtual std::string to_string() const override = 0;
    virtual int getInt() { throw std::runtime_error("Not an int"); }
    virtual bool getBool() { throw std::runtime_error("Not a bool"); }
    virtual float getFloat() { throw std::runtime_error("Not a float"); }
    virtual std::string getString() { throw std::runtime_error("Not an string"); }
    virtual char getChar() { throw std::runtime_error("Not a char"); }
};

#endif