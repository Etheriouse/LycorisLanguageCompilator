#ifndef visitor_h
#define visitor_h

#include "../asd/program.h"

template <typename S, typename H>
class VisitorExpr
{

public:
    virtual S visitBinOp(BinOp binop, H heritage) const = 0;
    virtual S visitBinOp(BinOp binop, H heritage) const = 0;
    virtual S visitBinOp(BinOp binop, H heritage) const = 0;
    virtual S visitBinOp(BinOp binop, H heritage) const = 0;
    virtual S visitBinOp(BinOp binop, H heritage) const = 0;
    virtual S visitBinOp(BinOp binop, H heritage) const = 0;
    virtual ~VisitorExpr() = default;
};

#endif