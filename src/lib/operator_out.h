#ifndef operator_out_h
#define operator_out_h

#include "../asd/program.h"

std::ostream &operator<<(std::ostream &os, const Expression &expr);
std::ostream &operator<<(std::ostream &os, const Instruction &instr);


#endif