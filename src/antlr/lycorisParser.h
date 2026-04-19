
// Generated from src/antlr/lycoris.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  lycorisParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, LP = 17, RP = 18, LC = 19, RC = 20, LA = 21, 
    RA = 22, COMMA = 23, SEMICOLON = 24, NEWLINE = 25, WS = 26, INT = 27, 
    FLOAT = 28, BOOL = 29, IDENT = 30, CHAR = 31, STRING = 32
  };

  enum {
    RuleProg = 0, RuleExpr = 1, RuleMor_ = 2, RuleXor_ = 3, RuleMxor_ = 4, 
    RuleAnd_ = 5, RuleMand_ = 6, RuleEqual = 7, RuleMequal = 8, RuleComparaison = 9, 
    RuleMcomparaison = 10, RuleAddsub = 11, RuleMaddsub = 12, RuleMuldivmod = 13, 
    RuleMmuldivmod = 14, RuleUnary = 15, RuleAtom = 16
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
  class ExprContext;
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
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    lycorisParser::Xor_Context *a = nullptr;
    lycorisParser::Mor_Context *b = nullptr;
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Xor_Context *xor_();
    std::vector<Mor_Context *> mor_();
    Mor_Context* mor_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();

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
    antlr4::tree::TerminalNode *LC();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *RC();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

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

