#ifndef block_h
#define block_h

#include <vector>
#include <string>
#include <iostream>

#include "../instruction.h"

class Block : public Instruction
{
public:
    Block(std::vector<Instruction *> instrs) : instructions(instrs) {};
    ~Block();
    std::string to_string() const override;
    void pretty_print(int ident) const override;
    bool accept(TypeChecker *visitor, Type type) override;
    std::vector<Instruction *> instructions;
};


#endif