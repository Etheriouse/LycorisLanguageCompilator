
// Generated from src/antlr/lycoris.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "lycorisListener.h"


/**
 * This class provides an empty implementation of lycorisListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  lycorisBaseListener : public lycorisListener {
public:

  virtual void enterProg(lycorisParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(lycorisParser::ProgContext * /*ctx*/) override { }

  virtual void enterDefinition(lycorisParser::DefinitionContext * /*ctx*/) override { }
  virtual void exitDefinition(lycorisParser::DefinitionContext * /*ctx*/) override { }

  virtual void enterParamfunction(lycorisParser::ParamfunctionContext * /*ctx*/) override { }
  virtual void exitParamfunction(lycorisParser::ParamfunctionContext * /*ctx*/) override { }

  virtual void enterParamun(lycorisParser::ParamunContext * /*ctx*/) override { }
  virtual void exitParamun(lycorisParser::ParamunContext * /*ctx*/) override { }

  virtual void enterMulparam(lycorisParser::MulparamContext * /*ctx*/) override { }
  virtual void exitMulparam(lycorisParser::MulparamContext * /*ctx*/) override { }

  virtual void enterInstruction(lycorisParser::InstructionContext * /*ctx*/) override { }
  virtual void exitInstruction(lycorisParser::InstructionContext * /*ctx*/) override { }

  virtual void enterIndexarr(lycorisParser::IndexarrContext * /*ctx*/) override { }
  virtual void exitIndexarr(lycorisParser::IndexarrContext * /*ctx*/) override { }

  virtual void enterDeclaration(lycorisParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(lycorisParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterStaticarr(lycorisParser::StaticarrContext * /*ctx*/) override { }
  virtual void exitStaticarr(lycorisParser::StaticarrContext * /*ctx*/) override { }

  virtual void enterExprlist(lycorisParser::ExprlistContext * /*ctx*/) override { }
  virtual void exitExprlist(lycorisParser::ExprlistContext * /*ctx*/) override { }

  virtual void enterAffectation(lycorisParser::AffectationContext * /*ctx*/) override { }
  virtual void exitAffectation(lycorisParser::AffectationContext * /*ctx*/) override { }

  virtual void enterType(lycorisParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(lycorisParser::TypeContext * /*ctx*/) override { }

  virtual void enterExpr(lycorisParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(lycorisParser::ExprContext * /*ctx*/) override { }

  virtual void enterOr(lycorisParser::OrContext * /*ctx*/) override { }
  virtual void exitOr(lycorisParser::OrContext * /*ctx*/) override { }

  virtual void enterMor_(lycorisParser::Mor_Context * /*ctx*/) override { }
  virtual void exitMor_(lycorisParser::Mor_Context * /*ctx*/) override { }

  virtual void enterXor_(lycorisParser::Xor_Context * /*ctx*/) override { }
  virtual void exitXor_(lycorisParser::Xor_Context * /*ctx*/) override { }

  virtual void enterMxor_(lycorisParser::Mxor_Context * /*ctx*/) override { }
  virtual void exitMxor_(lycorisParser::Mxor_Context * /*ctx*/) override { }

  virtual void enterAnd_(lycorisParser::And_Context * /*ctx*/) override { }
  virtual void exitAnd_(lycorisParser::And_Context * /*ctx*/) override { }

  virtual void enterMand_(lycorisParser::Mand_Context * /*ctx*/) override { }
  virtual void exitMand_(lycorisParser::Mand_Context * /*ctx*/) override { }

  virtual void enterEqual(lycorisParser::EqualContext * /*ctx*/) override { }
  virtual void exitEqual(lycorisParser::EqualContext * /*ctx*/) override { }

  virtual void enterMequal(lycorisParser::MequalContext * /*ctx*/) override { }
  virtual void exitMequal(lycorisParser::MequalContext * /*ctx*/) override { }

  virtual void enterComparaison(lycorisParser::ComparaisonContext * /*ctx*/) override { }
  virtual void exitComparaison(lycorisParser::ComparaisonContext * /*ctx*/) override { }

  virtual void enterMcomparaison(lycorisParser::McomparaisonContext * /*ctx*/) override { }
  virtual void exitMcomparaison(lycorisParser::McomparaisonContext * /*ctx*/) override { }

  virtual void enterAddsub(lycorisParser::AddsubContext * /*ctx*/) override { }
  virtual void exitAddsub(lycorisParser::AddsubContext * /*ctx*/) override { }

  virtual void enterMaddsub(lycorisParser::MaddsubContext * /*ctx*/) override { }
  virtual void exitMaddsub(lycorisParser::MaddsubContext * /*ctx*/) override { }

  virtual void enterMuldivmod(lycorisParser::MuldivmodContext * /*ctx*/) override { }
  virtual void exitMuldivmod(lycorisParser::MuldivmodContext * /*ctx*/) override { }

  virtual void enterMmuldivmod(lycorisParser::MmuldivmodContext * /*ctx*/) override { }
  virtual void exitMmuldivmod(lycorisParser::MmuldivmodContext * /*ctx*/) override { }

  virtual void enterUnary(lycorisParser::UnaryContext * /*ctx*/) override { }
  virtual void exitUnary(lycorisParser::UnaryContext * /*ctx*/) override { }

  virtual void enterAtom(lycorisParser::AtomContext * /*ctx*/) override { }
  virtual void exitAtom(lycorisParser::AtomContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

