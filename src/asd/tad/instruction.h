#ifndef instruction_h
#define instruction_h

class TypeChecker;

#include "../operator_tad.h"

#include <string>
#include <iostream>

class Instruction {
public:
    virtual void pretty_print(int ident = 0) const = 0;
    virtual std::string to_string() const = 0;
    virtual bool accept(TypeChecker *visitor, Type type) = 0;
    virtual ~Instruction() = default;
};

#endif