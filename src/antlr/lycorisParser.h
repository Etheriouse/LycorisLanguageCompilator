
// Generated from src/antlr/lycoris.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  lycorisParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, LP = 37, RP = 38, LC = 39, 
    RC = 40, LA = 41, RA = 42, COMMA = 43, SEMICOLON = 44, ASSIGN = 45, 
    NEWLINE = 46, WS = 47, INT = 48, FLOAT = 49, BOOL = 50, IDENT = 51, 
    CHAR = 52, STRING = 53
  };

  enum {
    RuleProg = 0, RuleDefinition = 1, RuleParamfunction = 2, RuleParamun = 3, 
    RuleMulparam = 4, RuleInstruction = 5, RuleIndexarr = 6, RuleFordeclaration = 7, 
    RuleDeclaration = 8, RuleStaticarr = 9, RuleExprlist = 10, RuleAffectation = 11, 
    RuleType = 12, RuleExpr = 13, RuleOr = 14, RuleMor_ = 15, RuleXor_ = 16, 
    RuleMxor_ = 17, RuleAnd_ = 18, RuleMand_ = 19, RuleEqual = 20, RuleMequal = 21, 
    RuleComparaison = 22, RuleMcomparaison = 23, RuleAddsub = 24, RuleMaddsub = 25, 
    RuleMuldivmod = 26, RuleMmuldivmod = 27, RuleUnary = 28, RuleAtom = 29
  };

  explicit lycorisParser(antlr4::TokenStream *input);

  lycorisParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~lycorisParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgContext;
  class DefinitionContext;
  class ParamfunctionContext;
  class ParamunContext;
  class MulparamContext;
  class InstructionContext;
  class IndexarrContext;
  class FordeclarationContext;
  class DeclarationContext;
  class StaticarrContext;
  class ExprlistContext;
  class AffectationContext;
  class TypeContext;
  class ExprContext;
  class OrContext;
  class Mor_Context;
  class Xor_Context;
  class Mxor_Context;
  class And_Context;
  class Mand_Context;
  class EqualContext;
  class MequalContext;
  class ComparaisonContext;
  class McomparaisonContext;
  class AddsubContext;
  class MaddsubContext;
  class MuldivmodContext;
  class MmuldivmodContext;
  class UnaryContext;
  class AtomContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<DefinitionContext *> definition();
    DefinitionContext* definition(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  DefinitionContext : public antlr4::ParserRuleContext {
  public:
    DefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *IDENT();
    antlr4::tree::TerminalNode *LP();
    ParamfunctionContext *paramfunction();
    antlr4::tree::TerminalNode *RP();
    InstructionContext *instruction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinitionContext* definition();

  class  ParamfunctionContext : public antlr4::ParserRuleContext {
  public:
    lycorisParser::ParamunContext *t1 = nullptr;
    lycorisParser::MulparamContext *tn = nullptr;
    ParamfunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParamunContext *paramun();
    std::vector<MulparamContext *> mulparam();
    MulparamContext* mulparam(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamfunctionContext* paramfunction();

  class  ParamunContext : public antlr4::ParserRuleContext {
  public:
    ParamunContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *IDENT();
    StaticarrContext *staticarr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamunContext* paramun();

  class  MulparamContext : public antlr4::ParserRuleContext {
  public:
    lycorisParser::ParamunContext *tn = nullptr;
    MulparamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    ParamunContext *paramun();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MulparamContext* mulparam();

  class  InstructionContext : public antlr4::ParserRuleContext {
  public:
    lycorisParser::ExprContext *ifcond = nullptr;
    lycorisParser::InstructionContext *ifblock = nullptr;
    lycorisParser::InstructionContext *elseblock = nullptr;
    lycorisParser::ExprContext *whilecond = nullptr;
    lycorisParser::InstructionContext *whileblock = nullptr;
    lycorisParser::TypeContext *tinit = nullptr;
    lycorisParser::FordeclarationContext *dinit = nullptr;
    lycorisParser::ExprContext *forcond = nullptr;
    antlr4::Token *aftername = nullptr;
    lycorisParser::AffectationContext *after = nullptr;
    lycorisParser::InstructionContext *forblock = nullptr;
    lycorisParser::ExprContext *ret = nullptr;
    antlr4::Token *namec = nullptr;
    lycorisParser::ExprlistContext *parameter = nullptr;
    lycorisParser::AffectationContext *aff = nullptr;
    antlr4::Token *var = nullptr;
    lycorisParser::StaticarrContext *sarr = nullptr;
    lycorisParser::ExprContext *value = nullptr;
    lycorisParser::InstructionContext *block = nullptr;
    InstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    ExprContext *expr();
    std::vector<InstructionContext *> instruction();
    InstructionContext* instruction(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);
    TypeContext *type();
    FordeclarationContext *fordeclaration();
    antlr4::tree::TerminalNode *IDENT();
    AffectationContext *affectation();
    ExprlistContext *exprlist();
    std::vector<IndexarrContext *> indexarr();
    IndexarrContext* indexarr(size_t i);
    StaticarrContext *staticarr();
    antlr4::tree::TerminalNode *ASSIGN();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    antlr4::tree::TerminalNode *LA();
    antlr4::tree::TerminalNode *RA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstructionContext* instruction();

  class  IndexarrContext : public antlr4::ParserRuleContext {
  public:
    IndexarrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LC();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexarrContext* indexarr();

  class  FordeclarationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *var = nullptr;
    lycorisParser::StaticarrContext *sarr = nullptr;
    lycorisParser::ExprContext *value = nullptr;
    FordeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *IDENT();
    StaticarrContext *staticarr();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FordeclarationContext* fordeclaration();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *var = nullptr;
    lycorisParser::StaticarrContext *sarr = nullptr;
    lycorisParser::ExprContext *value = nullptr;
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *IDENT();
    StaticarrContext *staticarr();
    antlr4::tree::TerminalNode *ASSIGN();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  StaticarrContext : public antlr4::ParserRuleContext {
  public:
    StaticarrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LC();
    antlr4::tree::TerminalNode* LC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RC();
    antlr4::tree::TerminalNode* RC(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StaticarrContext* staticarr();

  class  ExprlistContext : public antlr4::ParserRuleContext {
  public:
    ExprlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprlistContext* exprlist();

  class  AffectationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    lycorisParser::ExprContext *assign = nullptr;
    AffectationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *ASSIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AffectationContext* affectation();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *raw = nullptr;
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    lycorisParser::OrContext *a = nullptr;
    lycorisParser::ExprContext *b = nullptr;
    lycorisParser::ExprContext *c = nullptr;
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OrContext *or_();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();

  class  OrContext : public antlr4::ParserRuleContext {
  public:
    lycorisParser::Xor_Context *a = nullptr;
    lycorisParser::Mor_Context *b = nullptr;
    OrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Xor_Context *xor_();
    std::vector<Mor_Context *> mor_();
    Mor_Context* mor_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrContext* or_();

  class  Mor_Context : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    lycorisParser::Xor_Context *b = nullptr;
    Mor_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Xor_Context *xor_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mor_Context* mor_();

  class  Xor_Context : public antlr4::ParserRuleContext {
  public:
    lycorisParser::And_Context *a = nullptr;
    lycorisParser::Mxor_Context *b = nullptr;
    Xor_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    And_Context *and_();
    std::vector<Mxor_Context *> mxor_();
    Mxor_Context* mxor_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xor_Context* xor_();

  class  Mxor_Context : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    lycorisParser::And_Context *b = nullptr;
    Mxor_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    And_Context *and_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mxor_Context* mxor_();

  class  And_Context : public antlr4::ParserRuleContext {
  public:
    lycorisParser::EqualContext *a = nullptr;
    lycorisParser::Mand_Context *b = nullptr;
    And_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EqualContext *equal();
    std::vector<Mand_Context *> mand_();
    Mand_Context* mand_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  And_Context* and_();

  class  Mand_Context : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    lycorisParser::EqualContext *b = nullptr;
    Mand_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EqualContext *equal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mand_Context* mand_();

  class  EqualContext : public antlr4::ParserRuleContext {
  public:
    lycorisParser::ComparaisonContext *a = nullptr;
    lycorisParser::MequalContext *b = nullptr;
    EqualContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ComparaisonContext *comparaison();
    std::vector<MequalContext *> mequal();
    MequalContext* mequal(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EqualContext* equal();

  class  MequalContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    lycorisParser::ComparaisonContext *b = nullptr;
    MequalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ComparaisonContext *comparaison();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MequalContext* mequal();

  class  ComparaisonContext : public antlr4::ParserRuleContext {
  public:
    lycorisParser::AddsubContext *a = nullptr;
    lycorisParser::McomparaisonContext *b = nullptr;
    ComparaisonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddsubContext *addsub();
    std::vector<McomparaisonContext *> mcomparaison();
    McomparaisonContext* mcomparaison(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparaisonContext* comparaison();

  class  McomparaisonContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    lycorisParser::AddsubContext *b = nullptr;
    McomparaisonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddsubContext *addsub();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  McomparaisonContext* mcomparaison();

  class  AddsubContext : public antlr4::ParserRuleContext {
  public:
    lycorisParser::MuldivmodContext *a = nullptr;
    lycorisParser::MaddsubContext *b = nullptr;
    AddsubContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MuldivmodContext *muldivmod();
    std::vector<MaddsubContext *> maddsub();
    MaddsubContext* maddsub(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddsubContext* addsub();

  class  MaddsubContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    lycorisParser::MuldivmodContext *b = nullptr;
    MaddsubContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MuldivmodContext *muldivmod();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MaddsubContext* maddsub();

  class  MuldivmodContext : public antlr4::ParserRuleContext {
  public:
    lycorisParser::UnaryContext *a = nullptr;
    lycorisParser::MmuldivmodContext *b = nullptr;
    MuldivmodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryContext *unary();
    std::vector<MmuldivmodContext *> mmuldivmod();
    MmuldivmodContext* mmuldivmod(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MuldivmodContext* muldivmod();

  class  MmuldivmodContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    lycorisParser::UnaryContext *b = nullptr;
    MmuldivmodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryContext *unary();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MmuldivmodContext* mmuldivmod();

  class  UnaryContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    lycorisParser::AtomContext *a = nullptr;
    UnaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryContext *unary();
    AtomContext *atom();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryContext* unary();

  class  AtomContext : public antlr4::ParserRuleContext {
  public:
    lycorisParser::ExprlistContext *param = nullptr;
    lycorisParser::IndexarrContext *arr = nullptr;
    AtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *IDENT();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    ExprlistContext *exprlist();
    std::vector<IndexarrContext *> indexarr();
    IndexarrContext* indexarr(size_t i);
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AtomContext* atom();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

