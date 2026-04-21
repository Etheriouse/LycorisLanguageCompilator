#ifndef type_checker_h
#define type_checker_h

#include "visitorExpr.h"
#include "visitorInstr.h"
#include "../asd/operator_tad.h"
#include "../lib/symbole_table.h"


#include "../asd/tad/program.h"


class SymboleTable;

class TypeChecker : public VisitorInstr<bool, Type>
{
public:
    TypeChecker(SymboleTable *table);
    bool check(Program *node);
    bool visitIf(If *node, Type type);
    bool visitWhile(While *node, Type type);
    bool visitAffectation(Affectation *node, Type type);
    bool visitDeclaration(Declaration *node, Type type);
    bool visitFor(For *node, Type type);
    bool visitReturn(Return *node, Type type);
    bool visitCallInstruction(CallInstruction *node, Type type);
    bool visitBlock(Block *node, Type type);

private:
    SymboleTable *table;
};

class TypeCheckerExpr : public VisitorExpr<bool, Type>
{
public:
    TypeCheckerExpr(SymboleTable *table);
    bool visitString(String *node, Type type);
    bool visitInteger(Integer *node, Type type);
    bool visitFloat(Float *node, Type type);
    bool visitBool(Bool *node, Type type);
    bool visitChar(Char *node, Type type);
    bool visitArrayAtom(ArrayAtom *node, Type type);
    bool visitVariable(Variable *node, Type type);
    bool visitUnary(Unary *node, Type type);
    bool visitBinop(Binop *node, Type type);
    bool visitCall(Call *node, Type type);
    bool visitTernary(Ternary *node, Type type);

private:
    SymboleTable *table;
};

#endif