#ifndef visitor_instr_h
#define visitor_instr_h

#include "../asd/tad/instruction/if.h"
#include "../asd/tad/instruction/while.h"
#include "../asd/tad/instruction/for.h"
#include "../asd/tad/instruction/declaration.h"
#include "../asd/tad/instruction/affectation.h"
#include "../asd/tad/instruction/return.h"
#include "../asd/tad/instruction/callinstruction.h"
#include "../asd/tad/instruction/block.h"

template <typename S, typename H>
class VisitorInstr
{
public:
    virtual S visitIf(If *node, H heritage) = 0;
    virtual S visitWhile(While *node, H heritage) = 0;
    virtual S visitAffectation(Affectation *node, H heritage) = 0;
    virtual S visitDeclaration(Declaration *node, H heritage) = 0;
    virtual S visitFor(For *node, H heritage) = 0;
    virtual S visitReturn(Return *node, H heritage) = 0;
    virtual S visitCallInstruction(CallInstruction *node, H heritage) = 0;
    virtual S visitBlock(Block *node, H heritage) = 0;
};

#endif