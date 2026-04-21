#ifndef compiler_h
#define compiler_h


#include "visitor.h"
#include "../asd/operator_tad.h"
#include "../asd/lycoris_asd.h"
#include "../lib/symbole_table.h"
#include <vector>

using namespace std;

class Compiler : public VisitorInstr<vector<Instruction*>, SymboleTable> 
{

};

#endif