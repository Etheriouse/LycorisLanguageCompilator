
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

  virtual void enterExpr(lycorisParser::ExprContext *ctx) = 0;
  virtual void exitExpr(lycorisParser::ExprContext *ctx) = 0;

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

