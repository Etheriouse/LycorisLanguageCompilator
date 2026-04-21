
// Generated from src/antlr/lycoris.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "lycorisParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by lycorisParser.
 */
class  lycorisVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by lycorisParser.
   */
    virtual std::any visitProg(lycorisParser::ProgContext *context) = 0;

    virtual std::any visitDefinition(lycorisParser::DefinitionContext *context) = 0;

    virtual std::any visitParamfunction(lycorisParser::ParamfunctionContext *context) = 0;

    virtual std::any visitParamun(lycorisParser::ParamunContext *context) = 0;

    virtual std::any visitMulparam(lycorisParser::MulparamContext *context) = 0;

    virtual std::any visitInstruction(lycorisParser::InstructionContext *context) = 0;

    virtual std::any visitIndexarr(lycorisParser::IndexarrContext *context) = 0;

    virtual std::any visitFordeclaration(lycorisParser::FordeclarationContext *context) = 0;

    virtual std::any visitDeclaration(lycorisParser::DeclarationContext *context) = 0;

    virtual std::any visitStaticarr(lycorisParser::StaticarrContext *context) = 0;

    virtual std::any visitExprlist(lycorisParser::ExprlistContext *context) = 0;

    virtual std::any visitAffectation(lycorisParser::AffectationContext *context) = 0;

    virtual std::any visitType(lycorisParser::TypeContext *context) = 0;

    virtual std::any visitExpr(lycorisParser::ExprContext *context) = 0;

    virtual std::any visitOr(lycorisParser::OrContext *context) = 0;

    virtual std::any visitMor_(lycorisParser::Mor_Context *context) = 0;

    virtual std::any visitXor_(lycorisParser::Xor_Context *context) = 0;

    virtual std::any visitMxor_(lycorisParser::Mxor_Context *context) = 0;

    virtual std::any visitAnd_(lycorisParser::And_Context *context) = 0;

    virtual std::any visitMand_(lycorisParser::Mand_Context *context) = 0;

    virtual std::any visitEqual(lycorisParser::EqualContext *context) = 0;

    virtual std::any visitMequal(lycorisParser::MequalContext *context) = 0;

    virtual std::any visitComparaison(lycorisParser::ComparaisonContext *context) = 0;

    virtual std::any visitMcomparaison(lycorisParser::McomparaisonContext *context) = 0;

    virtual std::any visitAddsub(lycorisParser::AddsubContext *context) = 0;

    virtual std::any visitMaddsub(lycorisParser::MaddsubContext *context) = 0;

    virtual std::any visitMuldivmod(lycorisParser::MuldivmodContext *context) = 0;

    virtual std::any visitMmuldivmod(lycorisParser::MmuldivmodContext *context) = 0;

    virtual std::any visitUnary(lycorisParser::UnaryContext *context) = 0;

    virtual std::any visitAtom(lycorisParser::AtomContext *context) = 0;


};

