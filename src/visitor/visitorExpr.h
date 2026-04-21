#ifndef visitor_expr_h
#define visitor_expr_h

#include "../asd/tad/expression/string.h"
#include "../asd/tad/expression/char.h"
#include "../asd/tad/expression/integer.h"
#include "../asd/tad/expression/float.h"
#include "../asd/tad/expression/bool.h"
#include "../asd/tad/expression/arrayatom.h"
#include "../asd/tad/expression/variable.h"
#include "../asd/tad/expression/unary.h"
#include "../asd/tad/expression/binop.h"
#include "../asd/tad/expression/call.h"
#include "../asd/tad/expression/ternary.h"

template <typename S, typename H>
class VisitorExpr
{
public:
    virtual S visitString(String *node, H heritage) = 0;
    virtual S visitInteger(Integer *node, H heritage) = 0;
    virtual S visitFloat(Float *node, H heritage) = 0;
    virtual S visitBool(Bool *node, H heritage) = 0;
    virtual S visitChar(Char *node, H heritage) = 0;
    virtual S visitArrayAtom(ArrayAtom *node, H heritage) = 0;
    virtual S visitVariable(Variable *node, H heritage) = 0;
    virtual S visitUnary(Unary *node, H heritage) = 0;
    virtual S visitBinop(Binop *node, H heritage) = 0;
    virtual S visitCall(Call *node, H heritage) = 0;
    virtual S visitTernary(Ternary *node, H heritage) = 0;
};

#endif