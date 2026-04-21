
// Generated from src/antlr/lycoris.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "lycorisVisitor.h"


/**
 * This class provides an empty implementation of lycorisVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  lycorisBaseVisitor : public lycorisVisitor {
public:

  virtual std::any visitProg(lycorisParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinition(lycorisParser::DefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamfunction(lycorisParser::ParamfunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamun(lycorisParser::ParamunContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulparam(lycorisParser::MulparamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInstruction(lycorisParser::InstructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndexarr(lycorisParser::IndexarrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFordeclaration(lycorisParser::FordeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaration(lycorisParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStaticarr(lycorisParser::StaticarrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprlist(lycorisParser::ExprlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAffectation(lycorisParser::AffectationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(lycorisParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(lycorisParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOr(lycorisParser::OrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMor_(lycorisParser::Mor_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXor_(lycorisParser::Xor_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMxor_(lycorisParser::Mxor_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnd_(lycorisParser::And_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMand_(lycorisParser::Mand_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqual(lycorisParser::EqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMequal(lycorisParser::MequalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparaison(lycorisParser::ComparaisonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMcomparaison(lycorisParser::McomparaisonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddsub(lycorisParser::AddsubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMaddsub(lycorisParser::MaddsubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMuldivmod(lycorisParser::MuldivmodContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMmuldivmod(lycorisParser::MmuldivmodContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnary(lycorisParser::UnaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtom(lycorisParser::AtomContext *ctx) override {
    return visitChildren(ctx);
  }


};

