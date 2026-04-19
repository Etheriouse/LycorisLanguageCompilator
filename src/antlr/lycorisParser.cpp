
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
      "prog", "definition", "paramfunction", "paramun", "mulparam", "instruction", 
      "indexarr", "declaration", "staticarr", "exprlist", "affectation", 
      "type", "expr", "or", "mor_", "xor_", "mxor_", "and_", "mand_", "equal", 
      "mequal", "comparaison", "mcomparaison", "addsub", "maddsub", "muldivmod", 
      "mmuldivmod", "unary", "atom"
    },
    std::vector<std::string>{
      "", "'if'", "'else'", "'while'", "'for'", "'return'", "'+='", "'-='", 
      "'*='", "'/='", "'&='", "'<>='", "'|='", "'int'", "'float'", "'string'", 
      "'char'", "'bool'", "'void'", "'*'", "'\\u003F'", "':'", "'||'", "'<>'", 
      "'&&'", "'=='", "'!='", "'<'", "'>'", "'<='", "'>='", "'+'", "'-'", 
      "'/'", "'%'", "'&'", "'!'", "'('", "')'", "'['", "']'", "'{'", "'}'", 
      "','", "';'", "'='"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "LP", "RP", "LC", "RC", "LA", "RA", "COMMA", "SEMICOLON", 
      "ASSIGN", "NEWLINE", "WS", "INT", "FLOAT", "BOOL", "IDENT", "CHAR", 
      "STRING"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,53,314,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,1,0,5,0,60,8,0,10,0,12,0,63,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,2,1,2,5,2,76,8,2,10,2,12,2,79,9,2,3,2,81,8,2,1,3,1,3,1,3,1,3,1,4,
  	1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,97,8,5,1,5,1,5,1,5,1,5,1,5,1,
  	5,1,5,1,5,1,5,1,5,1,5,3,5,110,8,5,1,5,1,5,3,5,114,8,5,1,5,1,5,1,5,3,5,
  	119,8,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,5,5,133,8,5,10,
  	5,12,5,136,9,5,1,5,3,5,139,8,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,148,8,
  	5,1,5,5,5,151,8,5,10,5,12,5,154,9,5,1,5,1,5,1,5,1,5,5,5,160,8,5,10,5,
  	12,5,163,9,5,1,5,3,5,166,8,5,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,3,7,
  	177,8,7,1,8,1,8,1,8,5,8,182,8,8,10,8,12,8,185,9,8,1,9,1,9,1,9,5,9,190,
  	8,9,10,9,12,9,193,9,9,3,9,195,8,9,1,10,1,10,1,10,1,11,1,11,4,11,202,8,
  	11,11,11,12,11,203,3,11,206,8,11,1,12,1,12,1,12,1,12,1,12,1,12,3,12,214,
  	8,12,1,13,1,13,5,13,218,8,13,10,13,12,13,221,9,13,1,14,1,14,1,14,1,15,
  	1,15,5,15,228,8,15,10,15,12,15,231,9,15,1,16,1,16,1,16,1,17,1,17,5,17,
  	238,8,17,10,17,12,17,241,9,17,1,18,1,18,1,18,1,19,1,19,5,19,248,8,19,
  	10,19,12,19,251,9,19,1,20,1,20,1,20,1,21,1,21,5,21,258,8,21,10,21,12,
  	21,261,9,21,1,22,1,22,1,22,1,23,1,23,5,23,268,8,23,10,23,12,23,271,9,
  	23,1,24,1,24,1,24,1,25,1,25,5,25,278,8,25,10,25,12,25,281,9,25,1,26,1,
  	26,1,26,1,27,1,27,1,27,3,27,289,8,27,1,28,1,28,1,28,1,28,1,28,1,28,1,
  	28,1,28,1,28,1,28,1,28,4,28,302,8,28,11,28,12,28,303,3,28,306,8,28,1,
  	28,1,28,1,28,1,28,3,28,312,8,28,1,28,0,0,29,0,2,4,6,8,10,12,14,16,18,
  	20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,0,7,2,0,6,12,
  	45,45,1,0,13,18,1,0,25,26,1,0,27,30,1,0,31,32,2,0,19,19,33,34,3,0,19,
  	19,32,32,35,36,326,0,61,1,0,0,0,2,66,1,0,0,0,4,80,1,0,0,0,6,82,1,0,0,
  	0,8,86,1,0,0,0,10,165,1,0,0,0,12,167,1,0,0,0,14,171,1,0,0,0,16,183,1,
  	0,0,0,18,194,1,0,0,0,20,196,1,0,0,0,22,199,1,0,0,0,24,207,1,0,0,0,26,
  	215,1,0,0,0,28,222,1,0,0,0,30,225,1,0,0,0,32,232,1,0,0,0,34,235,1,0,0,
  	0,36,242,1,0,0,0,38,245,1,0,0,0,40,252,1,0,0,0,42,255,1,0,0,0,44,262,
  	1,0,0,0,46,265,1,0,0,0,48,272,1,0,0,0,50,275,1,0,0,0,52,282,1,0,0,0,54,
  	288,1,0,0,0,56,311,1,0,0,0,58,60,3,2,1,0,59,58,1,0,0,0,60,63,1,0,0,0,
  	61,59,1,0,0,0,61,62,1,0,0,0,62,64,1,0,0,0,63,61,1,0,0,0,64,65,5,0,0,1,
  	65,1,1,0,0,0,66,67,3,22,11,0,67,68,5,51,0,0,68,69,5,37,0,0,69,70,3,4,
  	2,0,70,71,5,38,0,0,71,72,3,10,5,0,72,3,1,0,0,0,73,77,3,6,3,0,74,76,3,
  	8,4,0,75,74,1,0,0,0,76,79,1,0,0,0,77,75,1,0,0,0,77,78,1,0,0,0,78,81,1,
  	0,0,0,79,77,1,0,0,0,80,73,1,0,0,0,80,81,1,0,0,0,81,5,1,0,0,0,82,83,3,
  	22,11,0,83,84,5,51,0,0,84,85,3,16,8,0,85,7,1,0,0,0,86,87,5,43,0,0,87,
  	88,3,6,3,0,88,9,1,0,0,0,89,90,5,1,0,0,90,91,5,37,0,0,91,92,3,24,12,0,
  	92,93,5,38,0,0,93,96,3,10,5,0,94,95,5,2,0,0,95,97,3,10,5,0,96,94,1,0,
  	0,0,96,97,1,0,0,0,97,166,1,0,0,0,98,99,5,3,0,0,99,100,5,37,0,0,100,101,
  	3,24,12,0,101,102,5,38,0,0,102,103,3,10,5,0,103,166,1,0,0,0,104,105,5,
  	4,0,0,105,109,5,37,0,0,106,107,3,22,11,0,107,108,3,14,7,0,108,110,1,0,
  	0,0,109,106,1,0,0,0,109,110,1,0,0,0,110,111,1,0,0,0,111,113,5,44,0,0,
  	112,114,3,24,12,0,113,112,1,0,0,0,113,114,1,0,0,0,114,115,1,0,0,0,115,
  	118,5,44,0,0,116,117,5,51,0,0,117,119,3,20,10,0,118,116,1,0,0,0,118,119,
  	1,0,0,0,119,120,1,0,0,0,120,121,5,38,0,0,121,166,3,10,5,0,122,123,5,5,
  	0,0,123,124,3,24,12,0,124,125,5,44,0,0,125,166,1,0,0,0,126,138,5,51,0,
  	0,127,128,5,37,0,0,128,129,3,18,9,0,129,130,5,38,0,0,130,139,1,0,0,0,
  	131,133,3,12,6,0,132,131,1,0,0,0,133,136,1,0,0,0,134,132,1,0,0,0,134,
  	135,1,0,0,0,135,137,1,0,0,0,136,134,1,0,0,0,137,139,3,20,10,0,138,127,
  	1,0,0,0,138,134,1,0,0,0,139,140,1,0,0,0,140,141,5,44,0,0,141,166,1,0,
  	0,0,142,143,3,22,11,0,143,144,5,51,0,0,144,147,3,16,8,0,145,146,5,45,
  	0,0,146,148,3,24,12,0,147,145,1,0,0,0,147,148,1,0,0,0,148,152,1,0,0,0,
  	149,151,3,14,7,0,150,149,1,0,0,0,151,154,1,0,0,0,152,150,1,0,0,0,152,
  	153,1,0,0,0,153,155,1,0,0,0,154,152,1,0,0,0,155,156,5,44,0,0,156,166,
  	1,0,0,0,157,161,5,41,0,0,158,160,3,10,5,0,159,158,1,0,0,0,160,163,1,0,
  	0,0,161,159,1,0,0,0,161,162,1,0,0,0,162,164,1,0,0,0,163,161,1,0,0,0,164,
  	166,5,42,0,0,165,89,1,0,0,0,165,98,1,0,0,0,165,104,1,0,0,0,165,122,1,
  	0,0,0,165,126,1,0,0,0,165,142,1,0,0,0,165,157,1,0,0,0,166,11,1,0,0,0,
  	167,168,5,39,0,0,168,169,3,24,12,0,169,170,5,40,0,0,170,13,1,0,0,0,171,
  	172,5,43,0,0,172,173,5,51,0,0,173,176,3,16,8,0,174,175,5,45,0,0,175,177,
  	3,24,12,0,176,174,1,0,0,0,176,177,1,0,0,0,177,15,1,0,0,0,178,179,5,39,
  	0,0,179,180,5,48,0,0,180,182,5,40,0,0,181,178,1,0,0,0,182,185,1,0,0,0,
  	183,181,1,0,0,0,183,184,1,0,0,0,184,17,1,0,0,0,185,183,1,0,0,0,186,191,
  	3,24,12,0,187,188,5,43,0,0,188,190,3,24,12,0,189,187,1,0,0,0,190,193,
  	1,0,0,0,191,189,1,0,0,0,191,192,1,0,0,0,192,195,1,0,0,0,193,191,1,0,0,
  	0,194,186,1,0,0,0,194,195,1,0,0,0,195,19,1,0,0,0,196,197,7,0,0,0,197,
  	198,3,24,12,0,198,21,1,0,0,0,199,205,7,1,0,0,200,202,5,19,0,0,201,200,
  	1,0,0,0,202,203,1,0,0,0,203,201,1,0,0,0,203,204,1,0,0,0,204,206,1,0,0,
  	0,205,201,1,0,0,0,205,206,1,0,0,0,206,23,1,0,0,0,207,213,3,26,13,0,208,
  	209,5,20,0,0,209,210,3,24,12,0,210,211,5,21,0,0,211,212,3,24,12,0,212,
  	214,1,0,0,0,213,208,1,0,0,0,213,214,1,0,0,0,214,25,1,0,0,0,215,219,3,
  	30,15,0,216,218,3,28,14,0,217,216,1,0,0,0,218,221,1,0,0,0,219,217,1,0,
  	0,0,219,220,1,0,0,0,220,27,1,0,0,0,221,219,1,0,0,0,222,223,5,22,0,0,223,
  	224,3,30,15,0,224,29,1,0,0,0,225,229,3,34,17,0,226,228,3,32,16,0,227,
  	226,1,0,0,0,228,231,1,0,0,0,229,227,1,0,0,0,229,230,1,0,0,0,230,31,1,
  	0,0,0,231,229,1,0,0,0,232,233,5,23,0,0,233,234,3,34,17,0,234,33,1,0,0,
  	0,235,239,3,38,19,0,236,238,3,36,18,0,237,236,1,0,0,0,238,241,1,0,0,0,
  	239,237,1,0,0,0,239,240,1,0,0,0,240,35,1,0,0,0,241,239,1,0,0,0,242,243,
  	5,24,0,0,243,244,3,38,19,0,244,37,1,0,0,0,245,249,3,42,21,0,246,248,3,
  	40,20,0,247,246,1,0,0,0,248,251,1,0,0,0,249,247,1,0,0,0,249,250,1,0,0,
  	0,250,39,1,0,0,0,251,249,1,0,0,0,252,253,7,2,0,0,253,254,3,42,21,0,254,
  	41,1,0,0,0,255,259,3,46,23,0,256,258,3,44,22,0,257,256,1,0,0,0,258,261,
  	1,0,0,0,259,257,1,0,0,0,259,260,1,0,0,0,260,43,1,0,0,0,261,259,1,0,0,
  	0,262,263,7,3,0,0,263,264,3,46,23,0,264,45,1,0,0,0,265,269,3,50,25,0,
  	266,268,3,48,24,0,267,266,1,0,0,0,268,271,1,0,0,0,269,267,1,0,0,0,269,
  	270,1,0,0,0,270,47,1,0,0,0,271,269,1,0,0,0,272,273,7,4,0,0,273,274,3,
  	50,25,0,274,49,1,0,0,0,275,279,3,54,27,0,276,278,3,52,26,0,277,276,1,
  	0,0,0,278,281,1,0,0,0,279,277,1,0,0,0,279,280,1,0,0,0,280,51,1,0,0,0,
  	281,279,1,0,0,0,282,283,7,5,0,0,283,284,3,54,27,0,284,53,1,0,0,0,285,
  	286,7,6,0,0,286,289,3,54,27,0,287,289,3,56,28,0,288,285,1,0,0,0,288,287,
  	1,0,0,0,289,55,1,0,0,0,290,312,5,48,0,0,291,312,5,49,0,0,292,312,5,53,
  	0,0,293,312,5,52,0,0,294,312,5,50,0,0,295,305,5,51,0,0,296,297,5,37,0,
  	0,297,298,3,18,9,0,298,299,5,38,0,0,299,306,1,0,0,0,300,302,3,12,6,0,
  	301,300,1,0,0,0,302,303,1,0,0,0,303,301,1,0,0,0,303,304,1,0,0,0,304,306,
  	1,0,0,0,305,296,1,0,0,0,305,301,1,0,0,0,305,306,1,0,0,0,306,312,1,0,0,
  	0,307,308,5,37,0,0,308,309,3,24,12,0,309,310,5,38,0,0,310,312,1,0,0,0,
  	311,290,1,0,0,0,311,291,1,0,0,0,311,292,1,0,0,0,311,293,1,0,0,0,311,294,
  	1,0,0,0,311,295,1,0,0,0,311,307,1,0,0,0,312,57,1,0,0,0,31,61,77,80,96,
  	109,113,118,134,138,147,152,161,165,176,183,191,194,203,205,213,219,229,
  	239,249,259,269,279,288,303,305,311
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

std::vector<lycorisParser::DefinitionContext *> lycorisParser::ProgContext::definition() {
  return getRuleContexts<lycorisParser::DefinitionContext>();
}

lycorisParser::DefinitionContext* lycorisParser::ProgContext::definition(size_t i) {
  return getRuleContext<lycorisParser::DefinitionContext>(i);
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
    setState(61);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 516096) != 0)) {
      setState(58);
      definition();
      setState(63);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(64);
    match(lycorisParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefinitionContext ------------------------------------------------------------------

lycorisParser::DefinitionContext::DefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lycorisParser::TypeContext* lycorisParser::DefinitionContext::type() {
  return getRuleContext<lycorisParser::TypeContext>(0);
}

tree::TerminalNode* lycorisParser::DefinitionContext::IDENT() {
  return getToken(lycorisParser::IDENT, 0);
}

tree::TerminalNode* lycorisParser::DefinitionContext::LP() {
  return getToken(lycorisParser::LP, 0);
}

lycorisParser::ParamfunctionContext* lycorisParser::DefinitionContext::paramfunction() {
  return getRuleContext<lycorisParser::ParamfunctionContext>(0);
}

tree::TerminalNode* lycorisParser::DefinitionContext::RP() {
  return getToken(lycorisParser::RP, 0);
}

lycorisParser::InstructionContext* lycorisParser::DefinitionContext::instruction() {
  return getRuleContext<lycorisParser::InstructionContext>(0);
}


size_t lycorisParser::DefinitionContext::getRuleIndex() const {
  return lycorisParser::RuleDefinition;
}

void lycorisParser::DefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefinition(this);
}

void lycorisParser::DefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefinition(this);
}


std::any lycorisParser::DefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitDefinition(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::DefinitionContext* lycorisParser::definition() {
  DefinitionContext *_localctx = _tracker.createInstance<DefinitionContext>(_ctx, getState());
  enterRule(_localctx, 2, lycorisParser::RuleDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    type();
    setState(67);
    match(lycorisParser::IDENT);
    setState(68);
    match(lycorisParser::LP);
    setState(69);
    paramfunction();
    setState(70);
    match(lycorisParser::RP);
    setState(71);
    instruction();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamfunctionContext ------------------------------------------------------------------

lycorisParser::ParamfunctionContext::ParamfunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lycorisParser::ParamunContext* lycorisParser::ParamfunctionContext::paramun() {
  return getRuleContext<lycorisParser::ParamunContext>(0);
}

std::vector<lycorisParser::MulparamContext *> lycorisParser::ParamfunctionContext::mulparam() {
  return getRuleContexts<lycorisParser::MulparamContext>();
}

lycorisParser::MulparamContext* lycorisParser::ParamfunctionContext::mulparam(size_t i) {
  return getRuleContext<lycorisParser::MulparamContext>(i);
}


size_t lycorisParser::ParamfunctionContext::getRuleIndex() const {
  return lycorisParser::RuleParamfunction;
}

void lycorisParser::ParamfunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParamfunction(this);
}

void lycorisParser::ParamfunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParamfunction(this);
}


std::any lycorisParser::ParamfunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitParamfunction(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::ParamfunctionContext* lycorisParser::paramfunction() {
  ParamfunctionContext *_localctx = _tracker.createInstance<ParamfunctionContext>(_ctx, getState());
  enterRule(_localctx, 4, lycorisParser::RuleParamfunction);
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
    setState(80);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 516096) != 0)) {
      setState(73);
      antlrcpp::downCast<ParamfunctionContext *>(_localctx)->t1 = paramun();
      setState(77);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == lycorisParser::COMMA) {
        setState(74);
        antlrcpp::downCast<ParamfunctionContext *>(_localctx)->tn = mulparam();
        setState(79);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamunContext ------------------------------------------------------------------

lycorisParser::ParamunContext::ParamunContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lycorisParser::TypeContext* lycorisParser::ParamunContext::type() {
  return getRuleContext<lycorisParser::TypeContext>(0);
}

tree::TerminalNode* lycorisParser::ParamunContext::IDENT() {
  return getToken(lycorisParser::IDENT, 0);
}

lycorisParser::StaticarrContext* lycorisParser::ParamunContext::staticarr() {
  return getRuleContext<lycorisParser::StaticarrContext>(0);
}


size_t lycorisParser::ParamunContext::getRuleIndex() const {
  return lycorisParser::RuleParamun;
}

void lycorisParser::ParamunContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParamun(this);
}

void lycorisParser::ParamunContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParamun(this);
}


std::any lycorisParser::ParamunContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitParamun(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::ParamunContext* lycorisParser::paramun() {
  ParamunContext *_localctx = _tracker.createInstance<ParamunContext>(_ctx, getState());
  enterRule(_localctx, 6, lycorisParser::RuleParamun);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    type();
    setState(83);
    match(lycorisParser::IDENT);
    setState(84);
    staticarr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulparamContext ------------------------------------------------------------------

lycorisParser::MulparamContext::MulparamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lycorisParser::MulparamContext::COMMA() {
  return getToken(lycorisParser::COMMA, 0);
}

lycorisParser::ParamunContext* lycorisParser::MulparamContext::paramun() {
  return getRuleContext<lycorisParser::ParamunContext>(0);
}


size_t lycorisParser::MulparamContext::getRuleIndex() const {
  return lycorisParser::RuleMulparam;
}

void lycorisParser::MulparamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulparam(this);
}

void lycorisParser::MulparamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulparam(this);
}


std::any lycorisParser::MulparamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitMulparam(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::MulparamContext* lycorisParser::mulparam() {
  MulparamContext *_localctx = _tracker.createInstance<MulparamContext>(_ctx, getState());
  enterRule(_localctx, 8, lycorisParser::RuleMulparam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    match(lycorisParser::COMMA);
    setState(87);
    antlrcpp::downCast<MulparamContext *>(_localctx)->tn = paramun();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

lycorisParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lycorisParser::InstructionContext::LP() {
  return getToken(lycorisParser::LP, 0);
}

tree::TerminalNode* lycorisParser::InstructionContext::RP() {
  return getToken(lycorisParser::RP, 0);
}

lycorisParser::ExprContext* lycorisParser::InstructionContext::expr() {
  return getRuleContext<lycorisParser::ExprContext>(0);
}

std::vector<lycorisParser::InstructionContext *> lycorisParser::InstructionContext::instruction() {
  return getRuleContexts<lycorisParser::InstructionContext>();
}

lycorisParser::InstructionContext* lycorisParser::InstructionContext::instruction(size_t i) {
  return getRuleContext<lycorisParser::InstructionContext>(i);
}

std::vector<tree::TerminalNode *> lycorisParser::InstructionContext::SEMICOLON() {
  return getTokens(lycorisParser::SEMICOLON);
}

tree::TerminalNode* lycorisParser::InstructionContext::SEMICOLON(size_t i) {
  return getToken(lycorisParser::SEMICOLON, i);
}

lycorisParser::TypeContext* lycorisParser::InstructionContext::type() {
  return getRuleContext<lycorisParser::TypeContext>(0);
}

std::vector<lycorisParser::DeclarationContext *> lycorisParser::InstructionContext::declaration() {
  return getRuleContexts<lycorisParser::DeclarationContext>();
}

lycorisParser::DeclarationContext* lycorisParser::InstructionContext::declaration(size_t i) {
  return getRuleContext<lycorisParser::DeclarationContext>(i);
}

tree::TerminalNode* lycorisParser::InstructionContext::IDENT() {
  return getToken(lycorisParser::IDENT, 0);
}

lycorisParser::AffectationContext* lycorisParser::InstructionContext::affectation() {
  return getRuleContext<lycorisParser::AffectationContext>(0);
}

lycorisParser::ExprlistContext* lycorisParser::InstructionContext::exprlist() {
  return getRuleContext<lycorisParser::ExprlistContext>(0);
}

std::vector<lycorisParser::IndexarrContext *> lycorisParser::InstructionContext::indexarr() {
  return getRuleContexts<lycorisParser::IndexarrContext>();
}

lycorisParser::IndexarrContext* lycorisParser::InstructionContext::indexarr(size_t i) {
  return getRuleContext<lycorisParser::IndexarrContext>(i);
}

lycorisParser::StaticarrContext* lycorisParser::InstructionContext::staticarr() {
  return getRuleContext<lycorisParser::StaticarrContext>(0);
}

tree::TerminalNode* lycorisParser::InstructionContext::ASSIGN() {
  return getToken(lycorisParser::ASSIGN, 0);
}

tree::TerminalNode* lycorisParser::InstructionContext::LA() {
  return getToken(lycorisParser::LA, 0);
}

tree::TerminalNode* lycorisParser::InstructionContext::RA() {
  return getToken(lycorisParser::RA, 0);
}


size_t lycorisParser::InstructionContext::getRuleIndex() const {
  return lycorisParser::RuleInstruction;
}

void lycorisParser::InstructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstruction(this);
}

void lycorisParser::InstructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstruction(this);
}


std::any lycorisParser::InstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitInstruction(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::InstructionContext* lycorisParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 10, lycorisParser::RuleInstruction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(165);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case lycorisParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(89);
        match(lycorisParser::T__0);
        setState(90);
        match(lycorisParser::LP);
        setState(91);
        antlrcpp::downCast<InstructionContext *>(_localctx)->ifcond = expr();
        setState(92);
        match(lycorisParser::RP);
        setState(93);
        antlrcpp::downCast<InstructionContext *>(_localctx)->ifblock = instruction();
        setState(96);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          setState(94);
          match(lycorisParser::T__1);
          setState(95);
          antlrcpp::downCast<InstructionContext *>(_localctx)->elseblock = instruction();
          break;
        }

        default:
          break;
        }
        break;
      }

      case lycorisParser::T__2: {
        enterOuterAlt(_localctx, 2);
        setState(98);
        match(lycorisParser::T__2);
        setState(99);
        match(lycorisParser::LP);
        setState(100);
        antlrcpp::downCast<InstructionContext *>(_localctx)->whilecond = expr();
        setState(101);
        match(lycorisParser::RP);
        setState(102);
        antlrcpp::downCast<InstructionContext *>(_localctx)->whileblock = instruction();
        break;
      }

      case lycorisParser::T__3: {
        enterOuterAlt(_localctx, 3);
        setState(104);
        match(lycorisParser::T__3);
        setState(105);
        match(lycorisParser::LP);
        setState(109);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 516096) != 0)) {
          setState(106);
          antlrcpp::downCast<InstructionContext *>(_localctx)->tinit = type();
          setState(107);
          antlrcpp::downCast<InstructionContext *>(_localctx)->dinit = declaration();
        }
        setState(111);
        match(lycorisParser::SEMICOLON);
        setState(113);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 17733168346431488) != 0)) {
          setState(112);
          antlrcpp::downCast<InstructionContext *>(_localctx)->forcond = expr();
        }
        setState(115);
        match(lycorisParser::SEMICOLON);
        setState(118);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == lycorisParser::IDENT) {
          setState(116);
          antlrcpp::downCast<InstructionContext *>(_localctx)->aftername = match(lycorisParser::IDENT);
          setState(117);
          antlrcpp::downCast<InstructionContext *>(_localctx)->after = affectation();
        }
        setState(120);
        match(lycorisParser::RP);
        setState(121);
        antlrcpp::downCast<InstructionContext *>(_localctx)->forblock = instruction();
        break;
      }

      case lycorisParser::T__4: {
        enterOuterAlt(_localctx, 4);
        setState(122);
        match(lycorisParser::T__4);
        setState(123);
        antlrcpp::downCast<InstructionContext *>(_localctx)->ret = expr();
        setState(124);
        match(lycorisParser::SEMICOLON);
        break;
      }

      case lycorisParser::IDENT: {
        enterOuterAlt(_localctx, 5);
        setState(126);
        antlrcpp::downCast<InstructionContext *>(_localctx)->namec = match(lycorisParser::IDENT);
        setState(138);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case lycorisParser::LP: {
            setState(127);
            match(lycorisParser::LP);
            setState(128);
            antlrcpp::downCast<InstructionContext *>(_localctx)->parameter = exprlist();
            setState(129);
            match(lycorisParser::RP);
            break;
          }

          case lycorisParser::T__5:
          case lycorisParser::T__6:
          case lycorisParser::T__7:
          case lycorisParser::T__8:
          case lycorisParser::T__9:
          case lycorisParser::T__10:
          case lycorisParser::T__11:
          case lycorisParser::LC:
          case lycorisParser::ASSIGN: {
            setState(134);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == lycorisParser::LC) {
              setState(131);
              indexarr();
              setState(136);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
            setState(137);
            antlrcpp::downCast<InstructionContext *>(_localctx)->aff = affectation();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(140);
        match(lycorisParser::SEMICOLON);
        break;
      }

      case lycorisParser::T__12:
      case lycorisParser::T__13:
      case lycorisParser::T__14:
      case lycorisParser::T__15:
      case lycorisParser::T__16:
      case lycorisParser::T__17: {
        enterOuterAlt(_localctx, 6);
        setState(142);
        type();
        setState(143);
        antlrcpp::downCast<InstructionContext *>(_localctx)->var = match(lycorisParser::IDENT);
        setState(144);
        antlrcpp::downCast<InstructionContext *>(_localctx)->sarr = staticarr();
        setState(147);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == lycorisParser::ASSIGN) {
          setState(145);
          match(lycorisParser::ASSIGN);
          setState(146);
          antlrcpp::downCast<InstructionContext *>(_localctx)->value = expr();
        }
        setState(152);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == lycorisParser::COMMA) {
          setState(149);
          declaration();
          setState(154);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(155);
        match(lycorisParser::SEMICOLON);
        break;
      }

      case lycorisParser::LA: {
        enterOuterAlt(_localctx, 7);
        setState(157);
        match(lycorisParser::LA);
        setState(161);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 2253998837456954) != 0)) {
          setState(158);
          antlrcpp::downCast<InstructionContext *>(_localctx)->block = instruction();
          setState(163);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(164);
        match(lycorisParser::RA);
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

//----------------- IndexarrContext ------------------------------------------------------------------

lycorisParser::IndexarrContext::IndexarrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lycorisParser::IndexarrContext::LC() {
  return getToken(lycorisParser::LC, 0);
}

lycorisParser::ExprContext* lycorisParser::IndexarrContext::expr() {
  return getRuleContext<lycorisParser::ExprContext>(0);
}

tree::TerminalNode* lycorisParser::IndexarrContext::RC() {
  return getToken(lycorisParser::RC, 0);
}


size_t lycorisParser::IndexarrContext::getRuleIndex() const {
  return lycorisParser::RuleIndexarr;
}

void lycorisParser::IndexarrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndexarr(this);
}

void lycorisParser::IndexarrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndexarr(this);
}


std::any lycorisParser::IndexarrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitIndexarr(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::IndexarrContext* lycorisParser::indexarr() {
  IndexarrContext *_localctx = _tracker.createInstance<IndexarrContext>(_ctx, getState());
  enterRule(_localctx, 12, lycorisParser::RuleIndexarr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    match(lycorisParser::LC);
    setState(168);
    expr();
    setState(169);
    match(lycorisParser::RC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

lycorisParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lycorisParser::DeclarationContext::COMMA() {
  return getToken(lycorisParser::COMMA, 0);
}

tree::TerminalNode* lycorisParser::DeclarationContext::IDENT() {
  return getToken(lycorisParser::IDENT, 0);
}

lycorisParser::StaticarrContext* lycorisParser::DeclarationContext::staticarr() {
  return getRuleContext<lycorisParser::StaticarrContext>(0);
}

tree::TerminalNode* lycorisParser::DeclarationContext::ASSIGN() {
  return getToken(lycorisParser::ASSIGN, 0);
}

lycorisParser::ExprContext* lycorisParser::DeclarationContext::expr() {
  return getRuleContext<lycorisParser::ExprContext>(0);
}


size_t lycorisParser::DeclarationContext::getRuleIndex() const {
  return lycorisParser::RuleDeclaration;
}

void lycorisParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void lycorisParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}


std::any lycorisParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::DeclarationContext* lycorisParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 14, lycorisParser::RuleDeclaration);
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
    setState(171);
    match(lycorisParser::COMMA);
    setState(172);
    antlrcpp::downCast<DeclarationContext *>(_localctx)->var = match(lycorisParser::IDENT);
    setState(173);
    antlrcpp::downCast<DeclarationContext *>(_localctx)->sarr = staticarr();
    setState(176);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == lycorisParser::ASSIGN) {
      setState(174);
      match(lycorisParser::ASSIGN);
      setState(175);
      antlrcpp::downCast<DeclarationContext *>(_localctx)->value = expr();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StaticarrContext ------------------------------------------------------------------

lycorisParser::StaticarrContext::StaticarrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> lycorisParser::StaticarrContext::LC() {
  return getTokens(lycorisParser::LC);
}

tree::TerminalNode* lycorisParser::StaticarrContext::LC(size_t i) {
  return getToken(lycorisParser::LC, i);
}

std::vector<tree::TerminalNode *> lycorisParser::StaticarrContext::INT() {
  return getTokens(lycorisParser::INT);
}

tree::TerminalNode* lycorisParser::StaticarrContext::INT(size_t i) {
  return getToken(lycorisParser::INT, i);
}

std::vector<tree::TerminalNode *> lycorisParser::StaticarrContext::RC() {
  return getTokens(lycorisParser::RC);
}

tree::TerminalNode* lycorisParser::StaticarrContext::RC(size_t i) {
  return getToken(lycorisParser::RC, i);
}


size_t lycorisParser::StaticarrContext::getRuleIndex() const {
  return lycorisParser::RuleStaticarr;
}

void lycorisParser::StaticarrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStaticarr(this);
}

void lycorisParser::StaticarrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStaticarr(this);
}


std::any lycorisParser::StaticarrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitStaticarr(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::StaticarrContext* lycorisParser::staticarr() {
  StaticarrContext *_localctx = _tracker.createInstance<StaticarrContext>(_ctx, getState());
  enterRule(_localctx, 16, lycorisParser::RuleStaticarr);
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
    setState(183);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == lycorisParser::LC) {
      setState(178);
      match(lycorisParser::LC);
      setState(179);
      match(lycorisParser::INT);
      setState(180);
      match(lycorisParser::RC);
      setState(185);
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

//----------------- ExprlistContext ------------------------------------------------------------------

lycorisParser::ExprlistContext::ExprlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<lycorisParser::ExprContext *> lycorisParser::ExprlistContext::expr() {
  return getRuleContexts<lycorisParser::ExprContext>();
}

lycorisParser::ExprContext* lycorisParser::ExprlistContext::expr(size_t i) {
  return getRuleContext<lycorisParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> lycorisParser::ExprlistContext::COMMA() {
  return getTokens(lycorisParser::COMMA);
}

tree::TerminalNode* lycorisParser::ExprlistContext::COMMA(size_t i) {
  return getToken(lycorisParser::COMMA, i);
}


size_t lycorisParser::ExprlistContext::getRuleIndex() const {
  return lycorisParser::RuleExprlist;
}

void lycorisParser::ExprlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprlist(this);
}

void lycorisParser::ExprlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprlist(this);
}


std::any lycorisParser::ExprlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitExprlist(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::ExprlistContext* lycorisParser::exprlist() {
  ExprlistContext *_localctx = _tracker.createInstance<ExprlistContext>(_ctx, getState());
  enterRule(_localctx, 18, lycorisParser::RuleExprlist);
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
    setState(194);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17733168346431488) != 0)) {
      setState(186);
      expr();
      setState(191);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == lycorisParser::COMMA) {
        setState(187);
        match(lycorisParser::COMMA);
        setState(188);
        expr();
        setState(193);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AffectationContext ------------------------------------------------------------------

lycorisParser::AffectationContext::AffectationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lycorisParser::ExprContext* lycorisParser::AffectationContext::expr() {
  return getRuleContext<lycorisParser::ExprContext>(0);
}

tree::TerminalNode* lycorisParser::AffectationContext::ASSIGN() {
  return getToken(lycorisParser::ASSIGN, 0);
}


size_t lycorisParser::AffectationContext::getRuleIndex() const {
  return lycorisParser::RuleAffectation;
}

void lycorisParser::AffectationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAffectation(this);
}

void lycorisParser::AffectationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAffectation(this);
}


std::any lycorisParser::AffectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitAffectation(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::AffectationContext* lycorisParser::affectation() {
  AffectationContext *_localctx = _tracker.createInstance<AffectationContext>(_ctx, getState());
  enterRule(_localctx, 20, lycorisParser::RuleAffectation);
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
    setState(196);
    antlrcpp::downCast<AffectationContext *>(_localctx)->op = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 35184372096960) != 0))) {
      antlrcpp::downCast<AffectationContext *>(_localctx)->op = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(197);
    antlrcpp::downCast<AffectationContext *>(_localctx)->assign = expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

lycorisParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t lycorisParser::TypeContext::getRuleIndex() const {
  return lycorisParser::RuleType;
}

void lycorisParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void lycorisParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


std::any lycorisParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::TypeContext* lycorisParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 22, lycorisParser::RuleType);
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
    setState(199);
    antlrcpp::downCast<TypeContext *>(_localctx)->raw = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 516096) != 0))) {
      antlrcpp::downCast<TypeContext *>(_localctx)->raw = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(205);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == lycorisParser::T__18) {
      setState(201); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(200);
        match(lycorisParser::T__18);
        setState(203); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == lycorisParser::T__18);
    }
   
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

lycorisParser::OrContext* lycorisParser::ExprContext::or_() {
  return getRuleContext<lycorisParser::OrContext>(0);
}

std::vector<lycorisParser::ExprContext *> lycorisParser::ExprContext::expr() {
  return getRuleContexts<lycorisParser::ExprContext>();
}

lycorisParser::ExprContext* lycorisParser::ExprContext::expr(size_t i) {
  return getRuleContext<lycorisParser::ExprContext>(i);
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
  enterRule(_localctx, 24, lycorisParser::RuleExpr);
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
    setState(207);
    antlrcpp::downCast<ExprContext *>(_localctx)->a = or_();
    setState(213);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == lycorisParser::T__19) {
      setState(208);
      match(lycorisParser::T__19);
      setState(209);
      antlrcpp::downCast<ExprContext *>(_localctx)->b = expr();
      setState(210);
      match(lycorisParser::T__20);
      setState(211);
      antlrcpp::downCast<ExprContext *>(_localctx)->c = expr();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrContext ------------------------------------------------------------------

lycorisParser::OrContext::OrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lycorisParser::Xor_Context* lycorisParser::OrContext::xor_() {
  return getRuleContext<lycorisParser::Xor_Context>(0);
}

std::vector<lycorisParser::Mor_Context *> lycorisParser::OrContext::mor_() {
  return getRuleContexts<lycorisParser::Mor_Context>();
}

lycorisParser::Mor_Context* lycorisParser::OrContext::mor_(size_t i) {
  return getRuleContext<lycorisParser::Mor_Context>(i);
}


size_t lycorisParser::OrContext::getRuleIndex() const {
  return lycorisParser::RuleOr;
}

void lycorisParser::OrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOr(this);
}

void lycorisParser::OrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOr(this);
}


std::any lycorisParser::OrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitOr(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::OrContext* lycorisParser::or_() {
  OrContext *_localctx = _tracker.createInstance<OrContext>(_ctx, getState());
  enterRule(_localctx, 26, lycorisParser::RuleOr);
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
    setState(215);
    antlrcpp::downCast<OrContext *>(_localctx)->a = xor_();
    setState(219);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == lycorisParser::T__21) {
      setState(216);
      antlrcpp::downCast<OrContext *>(_localctx)->b = mor_();
      setState(221);
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
  enterRule(_localctx, 28, lycorisParser::RuleMor_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    antlrcpp::downCast<Mor_Context *>(_localctx)->op = match(lycorisParser::T__21);
    setState(223);
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
  enterRule(_localctx, 30, lycorisParser::RuleXor_);
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
    setState(225);
    antlrcpp::downCast<Xor_Context *>(_localctx)->a = and_();
    setState(229);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == lycorisParser::T__22) {
      setState(226);
      antlrcpp::downCast<Xor_Context *>(_localctx)->b = mxor_();
      setState(231);
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
  enterRule(_localctx, 32, lycorisParser::RuleMxor_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232);
    antlrcpp::downCast<Mxor_Context *>(_localctx)->op = match(lycorisParser::T__22);
    setState(233);
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
  enterRule(_localctx, 34, lycorisParser::RuleAnd_);
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
    setState(235);
    antlrcpp::downCast<And_Context *>(_localctx)->a = equal();
    setState(239);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == lycorisParser::T__23) {
      setState(236);
      antlrcpp::downCast<And_Context *>(_localctx)->b = mand_();
      setState(241);
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
  enterRule(_localctx, 36, lycorisParser::RuleMand_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(242);
    antlrcpp::downCast<Mand_Context *>(_localctx)->op = match(lycorisParser::T__23);
    setState(243);
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
  enterRule(_localctx, 38, lycorisParser::RuleEqual);
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
    setState(245);
    antlrcpp::downCast<EqualContext *>(_localctx)->a = comparaison();
    setState(249);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == lycorisParser::T__24

    || _la == lycorisParser::T__25) {
      setState(246);
      antlrcpp::downCast<EqualContext *>(_localctx)->b = mequal();
      setState(251);
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
  enterRule(_localctx, 40, lycorisParser::RuleMequal);
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
    setState(252);
    antlrcpp::downCast<MequalContext *>(_localctx)->op = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == lycorisParser::T__24

    || _la == lycorisParser::T__25)) {
      antlrcpp::downCast<MequalContext *>(_localctx)->op = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(253);
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
  enterRule(_localctx, 42, lycorisParser::RuleComparaison);
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
    setState(255);
    antlrcpp::downCast<ComparaisonContext *>(_localctx)->a = addsub();
    setState(259);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2013265920) != 0)) {
      setState(256);
      antlrcpp::downCast<ComparaisonContext *>(_localctx)->b = mcomparaison();
      setState(261);
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
  enterRule(_localctx, 44, lycorisParser::RuleMcomparaison);
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
    setState(262);
    antlrcpp::downCast<McomparaisonContext *>(_localctx)->op = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2013265920) != 0))) {
      antlrcpp::downCast<McomparaisonContext *>(_localctx)->op = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(263);
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
  enterRule(_localctx, 46, lycorisParser::RuleAddsub);
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
    setState(265);
    antlrcpp::downCast<AddsubContext *>(_localctx)->a = muldivmod();
    setState(269);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == lycorisParser::T__30

    || _la == lycorisParser::T__31) {
      setState(266);
      antlrcpp::downCast<AddsubContext *>(_localctx)->b = maddsub();
      setState(271);
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
  enterRule(_localctx, 48, lycorisParser::RuleMaddsub);
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
    setState(272);
    antlrcpp::downCast<MaddsubContext *>(_localctx)->op = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == lycorisParser::T__30

    || _la == lycorisParser::T__31)) {
      antlrcpp::downCast<MaddsubContext *>(_localctx)->op = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(273);
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
  enterRule(_localctx, 50, lycorisParser::RuleMuldivmod);
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
    setState(275);
    antlrcpp::downCast<MuldivmodContext *>(_localctx)->a = unary();
    setState(279);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 25770328064) != 0)) {
      setState(276);
      antlrcpp::downCast<MuldivmodContext *>(_localctx)->b = mmuldivmod();
      setState(281);
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
  enterRule(_localctx, 52, lycorisParser::RuleMmuldivmod);
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
    setState(282);
    antlrcpp::downCast<MmuldivmodContext *>(_localctx)->op = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 25770328064) != 0))) {
      antlrcpp::downCast<MmuldivmodContext *>(_localctx)->op = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(283);
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
  enterRule(_localctx, 54, lycorisParser::RuleUnary);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(288);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case lycorisParser::T__18:
      case lycorisParser::T__31:
      case lycorisParser::T__34:
      case lycorisParser::T__35: {
        enterOuterAlt(_localctx, 1);
        setState(285);
        antlrcpp::downCast<UnaryContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 107374706688) != 0))) {
          antlrcpp::downCast<UnaryContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(286);
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
        setState(287);
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

lycorisParser::ExprlistContext* lycorisParser::AtomContext::exprlist() {
  return getRuleContext<lycorisParser::ExprlistContext>(0);
}

std::vector<lycorisParser::IndexarrContext *> lycorisParser::AtomContext::indexarr() {
  return getRuleContexts<lycorisParser::IndexarrContext>();
}

lycorisParser::IndexarrContext* lycorisParser::AtomContext::indexarr(size_t i) {
  return getRuleContext<lycorisParser::IndexarrContext>(i);
}

lycorisParser::ExprContext* lycorisParser::AtomContext::expr() {
  return getRuleContext<lycorisParser::ExprContext>(0);
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
  enterRule(_localctx, 56, lycorisParser::RuleAtom);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(311);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case lycorisParser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(290);
        match(lycorisParser::INT);
        break;
      }

      case lycorisParser::FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(291);
        match(lycorisParser::FLOAT);
        break;
      }

      case lycorisParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(292);
        match(lycorisParser::STRING);
        break;
      }

      case lycorisParser::CHAR: {
        enterOuterAlt(_localctx, 4);
        setState(293);
        match(lycorisParser::CHAR);
        break;
      }

      case lycorisParser::BOOL: {
        enterOuterAlt(_localctx, 5);
        setState(294);
        match(lycorisParser::BOOL);
        break;
      }

      case lycorisParser::IDENT: {
        enterOuterAlt(_localctx, 6);
        setState(295);
        match(lycorisParser::IDENT);
        setState(305);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case lycorisParser::LP: {
            setState(296);
            match(lycorisParser::LP);
            setState(297);
            antlrcpp::downCast<AtomContext *>(_localctx)->param = exprlist();
            setState(298);
            match(lycorisParser::RP);
            break;
          }

          case lycorisParser::LC: {
            setState(301); 
            _errHandler->sync(this);
            _la = _input->LA(1);
            do {
              setState(300);
              antlrcpp::downCast<AtomContext *>(_localctx)->arr = indexarr();
              setState(303); 
              _errHandler->sync(this);
              _la = _input->LA(1);
            } while (_la == lycorisParser::LC);
            break;
          }

          case lycorisParser::T__18:
          case lycorisParser::T__19:
          case lycorisParser::T__20:
          case lycorisParser::T__21:
          case lycorisParser::T__22:
          case lycorisParser::T__23:
          case lycorisParser::T__24:
          case lycorisParser::T__25:
          case lycorisParser::T__26:
          case lycorisParser::T__27:
          case lycorisParser::T__28:
          case lycorisParser::T__29:
          case lycorisParser::T__30:
          case lycorisParser::T__31:
          case lycorisParser::T__32:
          case lycorisParser::T__33:
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
        setState(307);
        match(lycorisParser::LP);
        setState(308);
        expr();
        setState(309);
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
