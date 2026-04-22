#include "for.h"
#include "../../../lib/utils.h"
#include "../../../visitor/type_checker.h"

For::~For() {
    if(initIterator.isPresent()) delete initIterator.get();
    if(condition.isPresent()) delete condition.get();
    if(afterOperation.isPresent()) delete afterOperation.get();
    delete block;
}

For::For(Declaration *decla, Expression *condition, Affectation *aff, Instruction *b)
{
    this->initIterator = Optional<Declaration>::of(decla);
    this->condition = Optional<Expression>::of(condition);
    this->afterOperation = Optional<Affectation>::of(aff);
    this->block = b;
}

std::string For::to_string() const
{
    std::string str = "For(";
    std::vector<std::string> parts;

    if (initIterator.isPresent())
        parts.push_back(initIterator.get()->to_string());

    if (condition.isPresent())
        parts.push_back(condition.get()->to_string());

    if (afterOperation.isPresent())
        parts.push_back(afterOperation.get()->to_string());

    str += join(parts, ", ");
    return str += ")";
}

void For::pretty_print(int ident) const
{
    std::cout << "for(";
    if (initIterator.isPresent())
        initIterator.get()->pretty_print(ident);
    else std::cout << ";";
    if (condition.isPresent())
        condition.get()->pretty_print();
    std::cout << ";";
    if (afterOperation.isPresent())
        afterOperation.get()->pretty_print(ident);
    std::cout << ")";
    block->pretty_print(ident + 1);
}

bool For::accept(TypeChecker *visitor, Type type)
{
    return visitor->visitFor(this, type);
}
