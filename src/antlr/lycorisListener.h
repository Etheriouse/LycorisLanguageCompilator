
// Generated from src/antlr/lycoris.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "lycorisParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by lycorisParser.
 */
class  lycorisListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(lycorisParser::ProgContext *ctx) = 0;
  virtual void exitProg(lycorisParser::ProgContext *ctx) = 0;

  virtual void enterDefinition(lycorisParser::DefinitionContext *ctx) = 0;
  virtual void exitDefinition(lycorisParser::DefinitionContext *ctx) = 0;

  virtual void enterParamfunction(lycorisParser::ParamfunctionContext *ctx) = 0;
  virtual void exitParamfunction(lycorisParser::ParamfunctionContext *ctx) = 0;

  virtual void enterParamun(lycorisParser::ParamunContext *ctx) = 0;
  virtual void exitParamun(lycorisParser::ParamunContext *ctx) = 0;

  virtual void enterMulparam(lycorisParser::MulparamContext *ctx) = 0;
  virtual void exitMulparam(lycorisParser::MulparamContext *ctx) = 0;

  virtual void enterInstruction(lycorisParser::InstructionContext *ctx) = 0;
  virtual void exitInstruction(lycorisParser::InstructionContext *ctx) = 0;

  virtual void enterIndexarr(lycorisParser::IndexarrContext *ctx) = 0;
  virtual void exitIndexarr(lycorisParser::IndexarrContext *ctx) = 0;

  virtual void enterDeclaration(lycorisParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(lycorisParser::DeclarationContext *ctx) = 0;

  virtual void enterStaticarr(lycorisParser::StaticarrContext *ctx) = 0;
  virtual void exitStaticarr(lycorisParser::StaticarrContext *ctx) = 0;

  virtual void enterExprlist(lycorisParser::ExprlistContext *ctx) = 0;
  virtual void exitExprlist(lycorisParser::ExprlistContext *ctx) = 0;

  virtual void enterAffectation(lycorisParser::AffectationContext *ctx) = 0;
  virtual void exitAffectation(lycorisParser::AffectationContext *ctx) = 0;

  virtual void enterType(lycorisParser::TypeContext *ctx) = 0;
  virtual void exitType(lycorisParser::TypeContext *ctx) = 0;

  virtual void enterExpr(lycorisParser::ExprContext *ctx) = 0;
  virtual void exitExpr(lycorisParser::ExprContext *ctx) = 0;

  virtual void enterOr(lycorisParser::OrContext *ctx) = 0;
  virtual void exitOr(lycorisParser::OrContext *ctx) = 0;

  virtual void enterMor_(lycorisParser::Mor_Context *ctx) = 0;
  virtual void exitMor_(lycorisParser::Mor_Context *ctx) = 0;

  virtual void enterXor_(lycorisParser::Xor_Context *ctx) = 0;
  virtual void exitXor_(lycorisParser::Xor_Context *ctx) = 0;

  virtual void enterMxor_(lycorisParser::Mxor_Context *ctx) = 0;
  virtual void exitMxor_(lycorisParser::Mxor_Context *ctx) = 0;

  virtual void enterAnd_(lycorisParser::And_Context *ctx) = 0;
  virtual void exitAnd_(lycorisParser::And_Context *ctx) = 0;

  virtual void enterMand_(lycorisParser::Mand_Context *ctx) = 0;
  virtual void exitMand_(lycorisParser::Mand_Context *ctx) = 0;

  virtual void enterEqual(lycorisParser::EqualContext *ctx) = 0;
  virtual void exitEqual(lycorisParser::EqualContext *ctx) = 0;

  virtual void enterMequal(lycorisParser::MequalContext *ctx) = 0;
  virtual void exitMequal(lycorisParser::MequalContext *ctx) = 0;

  virtual void enterComparaison(lycorisParser::ComparaisonContext *ctx) = 0;
  virtual void exitComparaison(lycorisParser::ComparaisonContext *ctx) = 0;

  virtual void enterMcomparaison(lycorisParser::McomparaisonContext *ctx) = 0;
  virtual void exitMcomparaison(lycorisParser::McomparaisonContext *ctx) = 0;

  virtual void enterAddsub(lycorisParser::AddsubContext *ctx) = 0;
  virtual void exitAddsub(lycorisParser::AddsubContext *ctx) = 0;

  virtual void enterMaddsub(lycorisParser::MaddsubContext *ctx) = 0;
  virtual void exitMaddsub(lycorisParser::MaddsubContext *ctx) = 0;

  virtual void enterMuldivmod(lycorisParser::MuldivmodContext *ctx) = 0;
  virtual void exitMuldivmod(lycorisParser::MuldivmodContext *ctx) = 0;

  virtual void enterMmuldivmod(lycorisParser::MmuldivmodContext *ctx) = 0;
  virtual void exitMmuldivmod(lycorisParser::MmuldivmodContext *ctx) = 0;

  virtual void enterUnary(lycorisParser::UnaryContext *ctx) = 0;
  virtual void exitUnary(lycorisParser::UnaryContext *ctx) = 0;

  virtual void enterAtom(lycorisParser::AtomContext *ctx) = 0;
  virtual void exitAtom(lycorisParser::AtomContext *ctx) = 0;


};

