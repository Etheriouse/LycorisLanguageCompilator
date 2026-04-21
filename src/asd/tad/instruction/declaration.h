#ifndef declaration_h
#define declaration_h

#include <string>
#include <iostream>
#include <vector>

#include "../instruction.h"
#include "../expression.h"
#include "../../optional.h"
#include "../../operator_tad.h"


class Declaration : public Instruction
{
public:
    typedef struct
    {
        std::string name;
        Optional<Expression> value;
    } Declare;

    Declaration(Type type, std::vector<Declare> content) : type(type), variables(content) {};
    std::string to_string() const override;
    void pretty_print(int ident) const override;
    bool accept(TypeChecker *visitor, Type type) override;
    Type type;
    std::vector<Declare> variables;
};

#endif