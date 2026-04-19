
// Generated from src/antlr/lycoris.g4 by ANTLR 4.13.2


#include "lycorisListener.h"
#include "lycorisVisitor.h"

#include "lycorisParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct LycorisParserStaticData final {
  LycorisParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  LycorisParserStaticData(const LycorisParserStaticData&) = delete;
  LycorisParserStaticData(LycorisParserStaticData&&) = delete;
  LycorisParserStaticData& operator=(const LycorisParserStaticData&) = delete;
  LycorisParserStaticData& operator=(LycorisParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag lycorisParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<LycorisParserStaticData> lycorisParserStaticData = nullptr;

void lycorisParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (lycorisParserStaticData != nullptr) {
    return;
  }
#else
  assert(lycorisParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<LycorisParserStaticData>(
    std::vector<std::string>{
      "prog", "expr", "mor_", "xor_", "mxor_", "and_", "mand_", "equal", 
      "mequal", "comparaison", "mcomparaison", "addsub", "maddsub", "muldivmod", 
      "mmuldivmod", "unary", "atom"
    },
    std::vector<std::string>{
      "", "'||'", "'<>'", "'&&'", "'=='", "'!='", "'<'", "'>'", "'<='", 
      "'>='", "'+'", "'-'", "'*'", "'/'", "'%'", "'&'", "'!'", "'('", "')'", 
      "'['", "']'", "'{'", "'}'", "','", "';'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "LP", "RP", "LC", "RC", "LA", "RA", "COMMA", "SEMICOLON", "NEWLINE", 
      "WS", "INT", "FLOAT", "BOOL", "IDENT", "CHAR", "STRING"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,32,150,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,1,0,1,0,1,0,5,0,38,8,0,10,0,12,0,41,9,0,1,0,1,
  	0,1,1,1,1,5,1,47,8,1,10,1,12,1,50,9,1,1,2,1,2,1,2,1,3,1,3,5,3,57,8,3,
  	10,3,12,3,60,9,3,1,4,1,4,1,4,1,5,1,5,5,5,67,8,5,10,5,12,5,70,9,5,1,6,
  	1,6,1,6,1,7,1,7,5,7,77,8,7,10,7,12,7,80,9,7,1,8,1,8,1,8,1,9,1,9,5,9,87,
  	8,9,10,9,12,9,90,9,9,1,10,1,10,1,10,1,11,1,11,5,11,97,8,11,10,11,12,11,
  	100,9,11,1,12,1,12,1,12,1,13,1,13,5,13,107,8,13,10,13,12,13,110,9,13,
  	1,14,1,14,1,14,1,15,1,15,1,15,3,15,118,8,15,1,16,1,16,1,16,1,16,1,16,
  	1,16,1,16,1,16,1,16,1,16,5,16,130,8,16,10,16,12,16,133,9,16,3,16,135,
  	8,16,1,16,1,16,1,16,1,16,1,16,3,16,142,8,16,1,16,1,16,1,16,1,16,3,16,
  	148,8,16,1,16,0,0,17,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,0,
  	5,1,0,4,5,1,0,6,9,1,0,10,11,1,0,12,14,2,0,11,12,15,16,151,0,39,1,0,0,
  	0,2,44,1,0,0,0,4,51,1,0,0,0,6,54,1,0,0,0,8,61,1,0,0,0,10,64,1,0,0,0,12,
  	71,1,0,0,0,14,74,1,0,0,0,16,81,1,0,0,0,18,84,1,0,0,0,20,91,1,0,0,0,22,
  	94,1,0,0,0,24,101,1,0,0,0,26,104,1,0,0,0,28,111,1,0,0,0,30,117,1,0,0,
  	0,32,147,1,0,0,0,34,35,3,2,1,0,35,36,5,24,0,0,36,38,1,0,0,0,37,34,1,0,
  	0,0,38,41,1,0,0,0,39,37,1,0,0,0,39,40,1,0,0,0,40,42,1,0,0,0,41,39,1,0,
  	0,0,42,43,5,0,0,1,43,1,1,0,0,0,44,48,3,6,3,0,45,47,3,4,2,0,46,45,1,0,
  	0,0,47,50,1,0,0,0,48,46,1,0,0,0,48,49,1,0,0,0,49,3,1,0,0,0,50,48,1,0,
  	0,0,51,52,5,1,0,0,52,53,3,6,3,0,53,5,1,0,0,0,54,58,3,10,5,0,55,57,3,8,
  	4,0,56,55,1,0,0,0,57,60,1,0,0,0,58,56,1,0,0,0,58,59,1,0,0,0,59,7,1,0,
  	0,0,60,58,1,0,0,0,61,62,5,2,0,0,62,63,3,10,5,0,63,9,1,0,0,0,64,68,3,14,
  	7,0,65,67,3,12,6,0,66,65,1,0,0,0,67,70,1,0,0,0,68,66,1,0,0,0,68,69,1,
  	0,0,0,69,11,1,0,0,0,70,68,1,0,0,0,71,72,5,3,0,0,72,73,3,14,7,0,73,13,
  	1,0,0,0,74,78,3,18,9,0,75,77,3,16,8,0,76,75,1,0,0,0,77,80,1,0,0,0,78,
  	76,1,0,0,0,78,79,1,0,0,0,79,15,1,0,0,0,80,78,1,0,0,0,81,82,7,0,0,0,82,
  	83,3,18,9,0,83,17,1,0,0,0,84,88,3,22,11,0,85,87,3,20,10,0,86,85,1,0,0,
  	0,87,90,1,0,0,0,88,86,1,0,0,0,88,89,1,0,0,0,89,19,1,0,0,0,90,88,1,0,0,
  	0,91,92,7,1,0,0,92,93,3,22,11,0,93,21,1,0,0,0,94,98,3,26,13,0,95,97,3,
  	24,12,0,96,95,1,0,0,0,97,100,1,0,0,0,98,96,1,0,0,0,98,99,1,0,0,0,99,23,
  	1,0,0,0,100,98,1,0,0,0,101,102,7,2,0,0,102,103,3,26,13,0,103,25,1,0,0,
  	0,104,108,3,30,15,0,105,107,3,28,14,0,106,105,1,0,0,0,107,110,1,0,0,0,
  	108,106,1,0,0,0,108,109,1,0,0,0,109,27,1,0,0,0,110,108,1,0,0,0,111,112,
  	7,3,0,0,112,113,3,30,15,0,113,29,1,0,0,0,114,115,7,4,0,0,115,118,3,30,
  	15,0,116,118,3,32,16,0,117,114,1,0,0,0,117,116,1,0,0,0,118,31,1,0,0,0,
  	119,148,5,27,0,0,120,148,5,28,0,0,121,148,5,32,0,0,122,148,5,31,0,0,123,
  	148,5,29,0,0,124,141,5,30,0,0,125,134,5,17,0,0,126,131,3,2,1,0,127,128,
  	5,23,0,0,128,130,3,2,1,0,129,127,1,0,0,0,130,133,1,0,0,0,131,129,1,0,
  	0,0,131,132,1,0,0,0,132,135,1,0,0,0,133,131,1,0,0,0,134,126,1,0,0,0,134,
  	135,1,0,0,0,135,136,1,0,0,0,136,142,5,18,0,0,137,138,5,19,0,0,138,139,
  	3,2,1,0,139,140,5,20,0,0,140,142,1,0,0,0,141,125,1,0,0,0,141,137,1,0,
  	0,0,141,142,1,0,0,0,142,148,1,0,0,0,143,144,5,17,0,0,144,145,3,2,1,0,
  	145,146,5,18,0,0,146,148,1,0,0,0,147,119,1,0,0,0,147,120,1,0,0,0,147,
  	121,1,0,0,0,147,122,1,0,0,0,147,123,1,0,0,0,147,124,1,0,0,0,147,143,1,
  	0,0,0,148,33,1,0,0,0,13,39,48,58,68,78,88,98,108,117,131,134,141,147
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  lycorisParserStaticData = std::move(staticData);
}

}

lycorisParser::lycorisParser(TokenStream *input) : lycorisParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

lycorisParser::lycorisParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  lycorisParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *lycorisParserStaticData->atn, lycorisParserStaticData->decisionToDFA, lycorisParserStaticData->sharedContextCache, options);
}

lycorisParser::~lycorisParser() {
  delete _interpreter;
}

const atn::ATN& lycorisParser::getATN() const {
  return *lycorisParserStaticData->atn;
}

std::string lycorisParser::getGrammarFileName() const {
  return "lycoris.g4";
}

const std::vector<std::string>& lycorisParser::getRuleNames() const {
  return lycorisParserStaticData->ruleNames;
}

const dfa::Vocabulary& lycorisParser::getVocabulary() const {
  return lycorisParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView lycorisParser::getSerializedATN() const {
  return lycorisParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

lycorisParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lycorisParser::ProgContext::EOF() {
  return getToken(lycorisParser::EOF, 0);
}

std::vector<lycorisParser::ExprContext *> lycorisParser::ProgContext::expr() {
  return getRuleContexts<lycorisParser::ExprContext>();
}

lycorisParser::ExprContext* lycorisParser::ProgContext::expr(size_t i) {
  return getRuleContext<lycorisParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> lycorisParser::ProgContext::SEMICOLON() {
  return getTokens(lycorisParser::SEMICOLON);
}

tree::TerminalNode* lycorisParser::ProgContext::SEMICOLON(size_t i) {
  return getToken(lycorisParser::SEMICOLON, i);
}


size_t lycorisParser::ProgContext::getRuleIndex() const {
  return lycorisParser::RuleProg;
}

void lycorisParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void lycorisParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}


std::any lycorisParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::ProgContext* lycorisParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, lycorisParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(39);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8455952384) != 0)) {
      setState(34);
      expr();
      setState(35);
      match(lycorisParser::SEMICOLON);
      setState(41);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(42);
    match(lycorisParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

lycorisParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lycorisParser::Xor_Context* lycorisParser::ExprContext::xor_() {
  return getRuleContext<lycorisParser::Xor_Context>(0);
}

std::vector<lycorisParser::Mor_Context *> lycorisParser::ExprContext::mor_() {
  return getRuleContexts<lycorisParser::Mor_Context>();
}

lycorisParser::Mor_Context* lycorisParser::ExprContext::mor_(size_t i) {
  return getRuleContext<lycorisParser::Mor_Context>(i);
}


size_t lycorisParser::ExprContext::getRuleIndex() const {
  return lycorisParser::RuleExpr;
}

void lycorisParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void lycorisParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


std::any lycorisParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::ExprContext* lycorisParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 2, lycorisParser::RuleExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    antlrcpp::downCast<ExprContext *>(_localctx)->a = xor_();
    setState(48);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == lycorisParser::T__0) {
      setState(45);
      antlrcpp::downCast<ExprContext *>(_localctx)->b = mor_();
      setState(50);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Mor_Context ------------------------------------------------------------------

lycorisParser::Mor_Context::Mor_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lycorisParser::Xor_Context* lycorisParser::Mor_Context::xor_() {
  return getRuleContext<lycorisParser::Xor_Context>(0);
}


size_t lycorisParser::Mor_Context::getRuleIndex() const {
  return lycorisParser::RuleMor_;
}

void lycorisParser::Mor_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMor_(this);
}

void lycorisParser::Mor_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMor_(this);
}


std::any lycorisParser::Mor_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitMor_(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::Mor_Context* lycorisParser::mor_() {
  Mor_Context *_localctx = _tracker.createInstance<Mor_Context>(_ctx, getState());
  enterRule(_localctx, 4, lycorisParser::RuleMor_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    antlrcpp::downCast<Mor_Context *>(_localctx)->op = match(lycorisParser::T__0);
    setState(52);
    antlrcpp::downCast<Mor_Context *>(_localctx)->b = xor_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Xor_Context ------------------------------------------------------------------

lycorisParser::Xor_Context::Xor_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lycorisParser::And_Context* lycorisParser::Xor_Context::and_() {
  return getRuleContext<lycorisParser::And_Context>(0);
}

std::vector<lycorisParser::Mxor_Context *> lycorisParser::Xor_Context::mxor_() {
  return getRuleContexts<lycorisParser::Mxor_Context>();
}

lycorisParser::Mxor_Context* lycorisParser::Xor_Context::mxor_(size_t i) {
  return getRuleContext<lycorisParser::Mxor_Context>(i);
}


size_t lycorisParser::Xor_Context::getRuleIndex() const {
  return lycorisParser::RuleXor_;
}

void lycorisParser::Xor_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXor_(this);
}

void lycorisParser::Xor_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXor_(this);
}


std::any lycorisParser::Xor_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitXor_(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::Xor_Context* lycorisParser::xor_() {
  Xor_Context *_localctx = _tracker.createInstance<Xor_Context>(_ctx, getState());
  enterRule(_localctx, 6, lycorisParser::RuleXor_);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(54);
    antlrcpp::downCast<Xor_Context *>(_localctx)->a = and_();
    setState(58);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == lycorisParser::T__1) {
      setState(55);
      antlrcpp::downCast<Xor_Context *>(_localctx)->b = mxor_();
      setState(60);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Mxor_Context ------------------------------------------------------------------

lycorisParser::Mxor_Context::Mxor_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lycorisParser::And_Context* lycorisParser::Mxor_Context::and_() {
  return getRuleContext<lycorisParser::And_Context>(0);
}


size_t lycorisParser::Mxor_Context::getRuleIndex() const {
  return lycorisParser::RuleMxor_;
}

void lycorisParser::Mxor_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMxor_(this);
}

void lycorisParser::Mxor_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMxor_(this);
}


std::any lycorisParser::Mxor_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitMxor_(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::Mxor_Context* lycorisParser::mxor_() {
  Mxor_Context *_localctx = _tracker.createInstance<Mxor_Context>(_ctx, getState());
  enterRule(_localctx, 8, lycorisParser::RuleMxor_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(61);
    antlrcpp::downCast<Mxor_Context *>(_localctx)->op = match(lycorisParser::T__1);
    setState(62);
    antlrcpp::downCast<Mxor_Context *>(_localctx)->b = and_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- And_Context ------------------------------------------------------------------

lycorisParser::And_Context::And_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lycorisParser::EqualContext* lycorisParser::And_Context::equal() {
  return getRuleContext<lycorisParser::EqualContext>(0);
}

std::vector<lycorisParser::Mand_Context *> lycorisParser::And_Context::mand_() {
  return getRuleContexts<lycorisParser::Mand_Context>();
}

lycorisParser::Mand_Context* lycorisParser::And_Context::mand_(size_t i) {
  return getRuleContext<lycorisParser::Mand_Context>(i);
}


size_t lycorisParser::And_Context::getRuleIndex() const {
  return lycorisParser::RuleAnd_;
}

void lycorisParser::And_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnd_(this);
}

void lycorisParser::And_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnd_(this);
}


std::any lycorisParser::And_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitAnd_(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::And_Context* lycorisParser::and_() {
  And_Context *_localctx = _tracker.createInstance<And_Context>(_ctx, getState());
  enterRule(_localctx, 10, lycorisParser::RuleAnd_);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    antlrcpp::downCast<And_Context *>(_localctx)->a = equal();
    setState(68);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == lycorisParser::T__2) {
      setState(65);
      antlrcpp::downCast<And_Context *>(_localctx)->b = mand_();
      setState(70);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Mand_Context ------------------------------------------------------------------

lycorisParser::Mand_Context::Mand_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lycorisParser::EqualContext* lycorisParser::Mand_Context::equal() {
  return getRuleContext<lycorisParser::EqualContext>(0);
}


size_t lycorisParser::Mand_Context::getRuleIndex() const {
  return lycorisParser::RuleMand_;
}

void lycorisParser::Mand_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMand_(this);
}

void lycorisParser::Mand_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMand_(this);
}


std::any lycorisParser::Mand_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitMand_(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::Mand_Context* lycorisParser::mand_() {
  Mand_Context *_localctx = _tracker.createInstance<Mand_Context>(_ctx, getState());
  enterRule(_localctx, 12, lycorisParser::RuleMand_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    antlrcpp::downCast<Mand_Context *>(_localctx)->op = match(lycorisParser::T__2);
    setState(72);
    antlrcpp::downCast<Mand_Context *>(_localctx)->b = equal();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqualContext ------------------------------------------------------------------

lycorisParser::EqualContext::EqualContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lycorisParser::ComparaisonContext* lycorisParser::EqualContext::comparaison() {
  return getRuleContext<lycorisParser::ComparaisonContext>(0);
}

std::vector<lycorisParser::MequalContext *> lycorisParser::EqualContext::mequal() {
  return getRuleContexts<lycorisParser::MequalContext>();
}

lycorisParser::MequalContext* lycorisParser::EqualContext::mequal(size_t i) {
  return getRuleContext<lycorisParser::MequalContext>(i);
}


size_t lycorisParser::EqualContext::getRuleIndex() const {
  return lycorisParser::RuleEqual;
}

void lycorisParser::EqualContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqual(this);
}

void lycorisParser::EqualContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqual(this);
}


std::any lycorisParser::EqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitEqual(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::EqualContext* lycorisParser::equal() {
  EqualContext *_localctx = _tracker.createInstance<EqualContext>(_ctx, getState());
  enterRule(_localctx, 14, lycorisParser::RuleEqual);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    antlrcpp::downCast<EqualContext *>(_localctx)->a = comparaison();
    setState(78);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == lycorisParser::T__3

    || _la == lycorisParser::T__4) {
      setState(75);
      antlrcpp::downCast<EqualContext *>(_localctx)->b = mequal();
      setState(80);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MequalContext ------------------------------------------------------------------

lycorisParser::MequalContext::MequalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lycorisParser::ComparaisonContext* lycorisParser::MequalContext::comparaison() {
  return getRuleContext<lycorisParser::ComparaisonContext>(0);
}


size_t lycorisParser::MequalContext::getRuleIndex() const {
  return lycorisParser::RuleMequal;
}

void lycorisParser::MequalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMequal(this);
}

void lycorisParser::MequalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMequal(this);
}


std::any lycorisParser::MequalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitMequal(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::MequalContext* lycorisParser::mequal() {
  MequalContext *_localctx = _tracker.createInstance<MequalContext>(_ctx, getState());
  enterRule(_localctx, 16, lycorisParser::RuleMequal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    antlrcpp::downCast<MequalContext *>(_localctx)->op = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == lycorisParser::T__3

    || _la == lycorisParser::T__4)) {
      antlrcpp::downCast<MequalContext *>(_localctx)->op = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(82);
    antlrcpp::downCast<MequalContext *>(_localctx)->b = comparaison();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparaisonContext ------------------------------------------------------------------

lycorisParser::ComparaisonContext::ComparaisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lycorisParser::AddsubContext* lycorisParser::ComparaisonContext::addsub() {
  return getRuleContext<lycorisParser::AddsubContext>(0);
}

std::vector<lycorisParser::McomparaisonContext *> lycorisParser::ComparaisonContext::mcomparaison() {
  return getRuleContexts<lycorisParser::McomparaisonContext>();
}

lycorisParser::McomparaisonContext* lycorisParser::ComparaisonContext::mcomparaison(size_t i) {
  return getRuleContext<lycorisParser::McomparaisonContext>(i);
}


size_t lycorisParser::ComparaisonContext::getRuleIndex() const {
  return lycorisParser::RuleComparaison;
}

void lycorisParser::ComparaisonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparaison(this);
}

void lycorisParser::ComparaisonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparaison(this);
}


std::any lycorisParser::ComparaisonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitComparaison(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::ComparaisonContext* lycorisParser::comparaison() {
  ComparaisonContext *_localctx = _tracker.createInstance<ComparaisonContext>(_ctx, getState());
  enterRule(_localctx, 18, lycorisParser::RuleComparaison);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    antlrcpp::downCast<ComparaisonContext *>(_localctx)->a = addsub();
    setState(88);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 960) != 0)) {
      setState(85);
      antlrcpp::downCast<ComparaisonContext *>(_localctx)->b = mcomparaison();
      setState(90);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- McomparaisonContext ------------------------------------------------------------------

lycorisParser::McomparaisonContext::McomparaisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lycorisParser::AddsubContext* lycorisParser::McomparaisonContext::addsub() {
  return getRuleContext<lycorisParser::AddsubContext>(0);
}


size_t lycorisParser::McomparaisonContext::getRuleIndex() const {
  return lycorisParser::RuleMcomparaison;
}

void lycorisParser::McomparaisonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMcomparaison(this);
}

void lycorisParser::McomparaisonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMcomparaison(this);
}


std::any lycorisParser::McomparaisonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitMcomparaison(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::McomparaisonContext* lycorisParser::mcomparaison() {
  McomparaisonContext *_localctx = _tracker.createInstance<McomparaisonContext>(_ctx, getState());
  enterRule(_localctx, 20, lycorisParser::RuleMcomparaison);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    antlrcpp::downCast<McomparaisonContext *>(_localctx)->op = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 960) != 0))) {
      antlrcpp::downCast<McomparaisonContext *>(_localctx)->op = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(92);
    antlrcpp::downCast<McomparaisonContext *>(_localctx)->b = addsub();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddsubContext ------------------------------------------------------------------

lycorisParser::AddsubContext::AddsubContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lycorisParser::MuldivmodContext* lycorisParser::AddsubContext::muldivmod() {
  return getRuleContext<lycorisParser::MuldivmodContext>(0);
}

std::vector<lycorisParser::MaddsubContext *> lycorisParser::AddsubContext::maddsub() {
  return getRuleContexts<lycorisParser::MaddsubContext>();
}

lycorisParser::MaddsubContext* lycorisParser::AddsubContext::maddsub(size_t i) {
  return getRuleContext<lycorisParser::MaddsubContext>(i);
}


size_t lycorisParser::AddsubContext::getRuleIndex() const {
  return lycorisParser::RuleAddsub;
}

void lycorisParser::AddsubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddsub(this);
}

void lycorisParser::AddsubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddsub(this);
}


std::any lycorisParser::AddsubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitAddsub(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::AddsubContext* lycorisParser::addsub() {
  AddsubContext *_localctx = _tracker.createInstance<AddsubContext>(_ctx, getState());
  enterRule(_localctx, 22, lycorisParser::RuleAddsub);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    antlrcpp::downCast<AddsubContext *>(_localctx)->a = muldivmod();
    setState(98);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == lycorisParser::T__9

    || _la == lycorisParser::T__10) {
      setState(95);
      antlrcpp::downCast<AddsubContext *>(_localctx)->b = maddsub();
      setState(100);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MaddsubContext ------------------------------------------------------------------

lycorisParser::MaddsubContext::MaddsubContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lycorisParser::MuldivmodContext* lycorisParser::MaddsubContext::muldivmod() {
  return getRuleContext<lycorisParser::MuldivmodContext>(0);
}


size_t lycorisParser::MaddsubContext::getRuleIndex() const {
  return lycorisParser::RuleMaddsub;
}

void lycorisParser::MaddsubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMaddsub(this);
}

void lycorisParser::MaddsubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMaddsub(this);
}


std::any lycorisParser::MaddsubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitMaddsub(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::MaddsubContext* lycorisParser::maddsub() {
  MaddsubContext *_localctx = _tracker.createInstance<MaddsubContext>(_ctx, getState());
  enterRule(_localctx, 24, lycorisParser::RuleMaddsub);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    antlrcpp::downCast<MaddsubContext *>(_localctx)->op = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == lycorisParser::T__9

    || _la == lycorisParser::T__10)) {
      antlrcpp::downCast<MaddsubContext *>(_localctx)->op = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(102);
    antlrcpp::downCast<MaddsubContext *>(_localctx)->b = muldivmod();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MuldivmodContext ------------------------------------------------------------------

lycorisParser::MuldivmodContext::MuldivmodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lycorisParser::UnaryContext* lycorisParser::MuldivmodContext::unary() {
  return getRuleContext<lycorisParser::UnaryContext>(0);
}

std::vector<lycorisParser::MmuldivmodContext *> lycorisParser::MuldivmodContext::mmuldivmod() {
  return getRuleContexts<lycorisParser::MmuldivmodContext>();
}

lycorisParser::MmuldivmodContext* lycorisParser::MuldivmodContext::mmuldivmod(size_t i) {
  return getRuleContext<lycorisParser::MmuldivmodContext>(i);
}


size_t lycorisParser::MuldivmodContext::getRuleIndex() const {
  return lycorisParser::RuleMuldivmod;
}

void lycorisParser::MuldivmodContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMuldivmod(this);
}

void lycorisParser::MuldivmodContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMuldivmod(this);
}


std::any lycorisParser::MuldivmodContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitMuldivmod(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::MuldivmodContext* lycorisParser::muldivmod() {
  MuldivmodContext *_localctx = _tracker.createInstance<MuldivmodContext>(_ctx, getState());
  enterRule(_localctx, 26, lycorisParser::RuleMuldivmod);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    antlrcpp::downCast<MuldivmodContext *>(_localctx)->a = unary();
    setState(108);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 28672) != 0)) {
      setState(105);
      antlrcpp::downCast<MuldivmodContext *>(_localctx)->b = mmuldivmod();
      setState(110);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MmuldivmodContext ------------------------------------------------------------------

lycorisParser::MmuldivmodContext::MmuldivmodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lycorisParser::UnaryContext* lycorisParser::MmuldivmodContext::unary() {
  return getRuleContext<lycorisParser::UnaryContext>(0);
}


size_t lycorisParser::MmuldivmodContext::getRuleIndex() const {
  return lycorisParser::RuleMmuldivmod;
}

void lycorisParser::MmuldivmodContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMmuldivmod(this);
}

void lycorisParser::MmuldivmodContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMmuldivmod(this);
}


std::any lycorisParser::MmuldivmodContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitMmuldivmod(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::MmuldivmodContext* lycorisParser::mmuldivmod() {
  MmuldivmodContext *_localctx = _tracker.createInstance<MmuldivmodContext>(_ctx, getState());
  enterRule(_localctx, 28, lycorisParser::RuleMmuldivmod);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    antlrcpp::downCast<MmuldivmodContext *>(_localctx)->op = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 28672) != 0))) {
      antlrcpp::downCast<MmuldivmodContext *>(_localctx)->op = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(112);
    antlrcpp::downCast<MmuldivmodContext *>(_localctx)->b = unary();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryContext ------------------------------------------------------------------

lycorisParser::UnaryContext::UnaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lycorisParser::UnaryContext* lycorisParser::UnaryContext::unary() {
  return getRuleContext<lycorisParser::UnaryContext>(0);
}

lycorisParser::AtomContext* lycorisParser::UnaryContext::atom() {
  return getRuleContext<lycorisParser::AtomContext>(0);
}


size_t lycorisParser::UnaryContext::getRuleIndex() const {
  return lycorisParser::RuleUnary;
}

void lycorisParser::UnaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary(this);
}

void lycorisParser::UnaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary(this);
}


std::any lycorisParser::UnaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitUnary(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::UnaryContext* lycorisParser::unary() {
  UnaryContext *_localctx = _tracker.createInstance<UnaryContext>(_ctx, getState());
  enterRule(_localctx, 30, lycorisParser::RuleUnary);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(117);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case lycorisParser::T__10:
      case lycorisParser::T__11:
      case lycorisParser::T__14:
      case lycorisParser::T__15: {
        enterOuterAlt(_localctx, 1);
        setState(114);
        antlrcpp::downCast<UnaryContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 104448) != 0))) {
          antlrcpp::downCast<UnaryContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(115);
        unary();
        break;
      }

      case lycorisParser::LP:
      case lycorisParser::INT:
      case lycorisParser::FLOAT:
      case lycorisParser::BOOL:
      case lycorisParser::IDENT:
      case lycorisParser::CHAR:
      case lycorisParser::STRING: {
        enterOuterAlt(_localctx, 2);
        setState(116);
        antlrcpp::downCast<UnaryContext *>(_localctx)->a = atom();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

lycorisParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lycorisParser::AtomContext::INT() {
  return getToken(lycorisParser::INT, 0);
}

tree::TerminalNode* lycorisParser::AtomContext::FLOAT() {
  return getToken(lycorisParser::FLOAT, 0);
}

tree::TerminalNode* lycorisParser::AtomContext::STRING() {
  return getToken(lycorisParser::STRING, 0);
}

tree::TerminalNode* lycorisParser::AtomContext::CHAR() {
  return getToken(lycorisParser::CHAR, 0);
}

tree::TerminalNode* lycorisParser::AtomContext::BOOL() {
  return getToken(lycorisParser::BOOL, 0);
}

tree::TerminalNode* lycorisParser::AtomContext::IDENT() {
  return getToken(lycorisParser::IDENT, 0);
}

tree::TerminalNode* lycorisParser::AtomContext::LP() {
  return getToken(lycorisParser::LP, 0);
}

tree::TerminalNode* lycorisParser::AtomContext::RP() {
  return getToken(lycorisParser::RP, 0);
}

tree::TerminalNode* lycorisParser::AtomContext::LC() {
  return getToken(lycorisParser::LC, 0);
}

std::vector<lycorisParser::ExprContext *> lycorisParser::AtomContext::expr() {
  return getRuleContexts<lycorisParser::ExprContext>();
}

lycorisParser::ExprContext* lycorisParser::AtomContext::expr(size_t i) {
  return getRuleContext<lycorisParser::ExprContext>(i);
}

tree::TerminalNode* lycorisParser::AtomContext::RC() {
  return getToken(lycorisParser::RC, 0);
}

std::vector<tree::TerminalNode *> lycorisParser::AtomContext::COMMA() {
  return getTokens(lycorisParser::COMMA);
}

tree::TerminalNode* lycorisParser::AtomContext::COMMA(size_t i) {
  return getToken(lycorisParser::COMMA, i);
}


size_t lycorisParser::AtomContext::getRuleIndex() const {
  return lycorisParser::RuleAtom;
}

void lycorisParser::AtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom(this);
}

void lycorisParser::AtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom(this);
}


std::any lycorisParser::AtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitAtom(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::AtomContext* lycorisParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 32, lycorisParser::RuleAtom);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(147);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case lycorisParser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(119);
        match(lycorisParser::INT);
        break;
      }

      case lycorisParser::FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(120);
        match(lycorisParser::FLOAT);
        break;
      }

      case lycorisParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(121);
        match(lycorisParser::STRING);
        break;
      }

      case lycorisParser::CHAR: {
        enterOuterAlt(_localctx, 4);
        setState(122);
        match(lycorisParser::CHAR);
        break;
      }

      case lycorisParser::BOOL: {
        enterOuterAlt(_localctx, 5);
        setState(123);
        match(lycorisParser::BOOL);
        break;
      }

      case lycorisParser::IDENT: {
        enterOuterAlt(_localctx, 6);
        setState(124);
        match(lycorisParser::IDENT);
        setState(141);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case lycorisParser::LP: {
            setState(125);
            match(lycorisParser::LP);
            setState(134);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if ((((_la & ~ 0x3fULL) == 0) &&
              ((1ULL << _la) & 8455952384) != 0)) {
              setState(126);
              expr();
              setState(131);
              _errHandler->sync(this);
              _la = _input->LA(1);
              while (_la == lycorisParser::COMMA) {
                setState(127);
                match(lycorisParser::COMMA);
                setState(128);
                expr();
                setState(133);
                _errHandler->sync(this);
                _la = _input->LA(1);
              }
            }
            setState(136);
            match(lycorisParser::RP);
            break;
          }

          case lycorisParser::LC: {
            setState(137);
            match(lycorisParser::LC);
            setState(138);
            expr();
            setState(139);
            match(lycorisParser::RC);
            break;
          }

          case lycorisParser::T__0:
          case lycorisParser::T__1:
          case lycorisParser::T__2:
          case lycorisParser::T__3:
          case lycorisParser::T__4:
          case lycorisParser::T__5:
          case lycorisParser::T__6:
          case lycorisParser::T__7:
          case lycorisParser::T__8:
          case lycorisParser::T__9:
          case lycorisParser::T__10:
          case lycorisParser::T__11:
          case lycorisParser::T__12:
          case lycorisParser::T__13:
          case lycorisParser::RP:
          case lycorisParser::RC:
          case lycorisParser::COMMA:
          case lycorisParser::SEMICOLON: {
            break;
          }

        default:
          break;
        }
        break;
      }

      case lycorisParser::LP: {
        enterOuterAlt(_localctx, 7);
        setState(143);
        match(lycorisParser::LP);
        setState(144);
        expr();
        setState(145);
        match(lycorisParser::RP);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void lycorisParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  lycorisParserInitialize();
#else
  ::antlr4::internal::call_once(lycorisParserOnceFlag, lycorisParserInitialize);
#endif
}
