#ifndef for_h
#define for_h

#include <string>
#include <iostream>

#include "../instruction.h"
#include "../expression.h"
#include "../../optional.h"
#include "declaration.h"
#include "affectation.h"

class For : public Instruction
{
public:
    For(Declaration *decla, Expression *condition, Affectation *aff, Instruction *b);
    ~For();
    std::string to_string() const override;
    void pretty_print(int ident) const override;
    bool accept(TypeChecker *visitor, Type type) override;
    Optional<Declaration> initIterator;
    Optional<Expression> condition;
    Optional<Affectation> afterOperation;
    Instruction *block;
};

#endif