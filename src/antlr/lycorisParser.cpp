
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
      "indexarr", "fordeclaration", "declaration", "staticarr", "exprlist", 
      "affectation", "type", "expr", "or", "mor_", "xor_", "mxor_", "and_", 
      "mand_", "equal", "mequal", "comparaison", "mcomparaison", "addsub", 
      "maddsub", "muldivmod", "mmuldivmod", "unary", "atom"
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
  	4,1,53,321,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,1,0,5,0,62,8,0,10,0,12,0,65,9,0,1,0,1,0,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,2,1,2,5,2,78,8,2,10,2,12,2,81,9,2,3,2,83,8,2,1,3,1,3,1,
  	3,1,3,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,99,8,5,1,5,1,5,1,5,
  	1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,112,8,5,1,5,1,5,3,5,116,8,5,1,5,1,
  	5,1,5,3,5,121,8,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,5,5,
  	135,8,5,10,5,12,5,138,9,5,1,5,3,5,141,8,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,
  	3,5,150,8,5,1,5,5,5,153,8,5,10,5,12,5,156,9,5,1,5,1,5,1,5,1,5,5,5,162,
  	8,5,10,5,12,5,165,9,5,1,5,3,5,168,8,5,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,
  	1,7,1,8,1,8,1,8,1,8,1,8,3,8,184,8,8,1,9,1,9,1,9,5,9,189,8,9,10,9,12,9,
  	192,9,9,1,10,1,10,1,10,5,10,197,8,10,10,10,12,10,200,9,10,3,10,202,8,
  	10,1,11,1,11,1,11,1,12,1,12,4,12,209,8,12,11,12,12,12,210,3,12,213,8,
  	12,1,13,1,13,1,13,1,13,1,13,1,13,3,13,221,8,13,1,14,1,14,5,14,225,8,14,
  	10,14,12,14,228,9,14,1,15,1,15,1,15,1,16,1,16,5,16,235,8,16,10,16,12,
  	16,238,9,16,1,17,1,17,1,17,1,18,1,18,5,18,245,8,18,10,18,12,18,248,9,
  	18,1,19,1,19,1,19,1,20,1,20,5,20,255,8,20,10,20,12,20,258,9,20,1,21,1,
  	21,1,21,1,22,1,22,5,22,265,8,22,10,22,12,22,268,9,22,1,23,1,23,1,23,1,
  	24,1,24,5,24,275,8,24,10,24,12,24,278,9,24,1,25,1,25,1,25,1,26,1,26,5,
  	26,285,8,26,10,26,12,26,288,9,26,1,27,1,27,1,27,1,28,1,28,1,28,3,28,296,
  	8,28,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,4,29,309,
  	8,29,11,29,12,29,310,3,29,313,8,29,1,29,1,29,1,29,1,29,3,29,319,8,29,
  	1,29,0,0,30,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,
  	42,44,46,48,50,52,54,56,58,0,7,2,0,6,12,45,45,1,0,13,18,1,0,25,26,1,0,
  	27,30,1,0,31,32,2,0,19,19,33,34,3,0,19,19,32,32,35,36,332,0,63,1,0,0,
  	0,2,68,1,0,0,0,4,82,1,0,0,0,6,84,1,0,0,0,8,88,1,0,0,0,10,167,1,0,0,0,
  	12,169,1,0,0,0,14,173,1,0,0,0,16,178,1,0,0,0,18,190,1,0,0,0,20,201,1,
  	0,0,0,22,203,1,0,0,0,24,206,1,0,0,0,26,214,1,0,0,0,28,222,1,0,0,0,30,
  	229,1,0,0,0,32,232,1,0,0,0,34,239,1,0,0,0,36,242,1,0,0,0,38,249,1,0,0,
  	0,40,252,1,0,0,0,42,259,1,0,0,0,44,262,1,0,0,0,46,269,1,0,0,0,48,272,
  	1,0,0,0,50,279,1,0,0,0,52,282,1,0,0,0,54,289,1,0,0,0,56,295,1,0,0,0,58,
  	318,1,0,0,0,60,62,3,2,1,0,61,60,1,0,0,0,62,65,1,0,0,0,63,61,1,0,0,0,63,
  	64,1,0,0,0,64,66,1,0,0,0,65,63,1,0,0,0,66,67,5,0,0,1,67,1,1,0,0,0,68,
  	69,3,24,12,0,69,70,5,51,0,0,70,71,5,37,0,0,71,72,3,4,2,0,72,73,5,38,0,
  	0,73,74,3,10,5,0,74,3,1,0,0,0,75,79,3,6,3,0,76,78,3,8,4,0,77,76,1,0,0,
  	0,78,81,1,0,0,0,79,77,1,0,0,0,79,80,1,0,0,0,80,83,1,0,0,0,81,79,1,0,0,
  	0,82,75,1,0,0,0,82,83,1,0,0,0,83,5,1,0,0,0,84,85,3,24,12,0,85,86,5,51,
  	0,0,86,87,3,18,9,0,87,7,1,0,0,0,88,89,5,43,0,0,89,90,3,6,3,0,90,9,1,0,
  	0,0,91,92,5,1,0,0,92,93,5,37,0,0,93,94,3,26,13,0,94,95,5,38,0,0,95,98,
  	3,10,5,0,96,97,5,2,0,0,97,99,3,10,5,0,98,96,1,0,0,0,98,99,1,0,0,0,99,
  	168,1,0,0,0,100,101,5,3,0,0,101,102,5,37,0,0,102,103,3,26,13,0,103,104,
  	5,38,0,0,104,105,3,10,5,0,105,168,1,0,0,0,106,107,5,4,0,0,107,111,5,37,
  	0,0,108,109,3,24,12,0,109,110,3,14,7,0,110,112,1,0,0,0,111,108,1,0,0,
  	0,111,112,1,0,0,0,112,113,1,0,0,0,113,115,5,44,0,0,114,116,3,26,13,0,
  	115,114,1,0,0,0,115,116,1,0,0,0,116,117,1,0,0,0,117,120,5,44,0,0,118,
  	119,5,51,0,0,119,121,3,22,11,0,120,118,1,0,0,0,120,121,1,0,0,0,121,122,
  	1,0,0,0,122,123,5,38,0,0,123,168,3,10,5,0,124,125,5,5,0,0,125,126,3,26,
  	13,0,126,127,5,44,0,0,127,168,1,0,0,0,128,140,5,51,0,0,129,130,5,37,0,
  	0,130,131,3,20,10,0,131,132,5,38,0,0,132,141,1,0,0,0,133,135,3,12,6,0,
  	134,133,1,0,0,0,135,138,1,0,0,0,136,134,1,0,0,0,136,137,1,0,0,0,137,139,
  	1,0,0,0,138,136,1,0,0,0,139,141,3,22,11,0,140,129,1,0,0,0,140,136,1,0,
  	0,0,141,142,1,0,0,0,142,143,5,44,0,0,143,168,1,0,0,0,144,145,3,24,12,
  	0,145,146,5,51,0,0,146,149,3,18,9,0,147,148,5,45,0,0,148,150,3,26,13,
  	0,149,147,1,0,0,0,149,150,1,0,0,0,150,154,1,0,0,0,151,153,3,16,8,0,152,
  	151,1,0,0,0,153,156,1,0,0,0,154,152,1,0,0,0,154,155,1,0,0,0,155,157,1,
  	0,0,0,156,154,1,0,0,0,157,158,5,44,0,0,158,168,1,0,0,0,159,163,5,41,0,
  	0,160,162,3,10,5,0,161,160,1,0,0,0,162,165,1,0,0,0,163,161,1,0,0,0,163,
  	164,1,0,0,0,164,166,1,0,0,0,165,163,1,0,0,0,166,168,5,42,0,0,167,91,1,
  	0,0,0,167,100,1,0,0,0,167,106,1,0,0,0,167,124,1,0,0,0,167,128,1,0,0,0,
  	167,144,1,0,0,0,167,159,1,0,0,0,168,11,1,0,0,0,169,170,5,39,0,0,170,171,
  	3,26,13,0,171,172,5,40,0,0,172,13,1,0,0,0,173,174,5,51,0,0,174,175,3,
  	18,9,0,175,176,5,45,0,0,176,177,3,26,13,0,177,15,1,0,0,0,178,179,5,43,
  	0,0,179,180,5,51,0,0,180,183,3,18,9,0,181,182,5,45,0,0,182,184,3,26,13,
  	0,183,181,1,0,0,0,183,184,1,0,0,0,184,17,1,0,0,0,185,186,5,39,0,0,186,
  	187,5,48,0,0,187,189,5,40,0,0,188,185,1,0,0,0,189,192,1,0,0,0,190,188,
  	1,0,0,0,190,191,1,0,0,0,191,19,1,0,0,0,192,190,1,0,0,0,193,198,3,26,13,
  	0,194,195,5,43,0,0,195,197,3,26,13,0,196,194,1,0,0,0,197,200,1,0,0,0,
  	198,196,1,0,0,0,198,199,1,0,0,0,199,202,1,0,0,0,200,198,1,0,0,0,201,193,
  	1,0,0,0,201,202,1,0,0,0,202,21,1,0,0,0,203,204,7,0,0,0,204,205,3,26,13,
  	0,205,23,1,0,0,0,206,212,7,1,0,0,207,209,5,19,0,0,208,207,1,0,0,0,209,
  	210,1,0,0,0,210,208,1,0,0,0,210,211,1,0,0,0,211,213,1,0,0,0,212,208,1,
  	0,0,0,212,213,1,0,0,0,213,25,1,0,0,0,214,220,3,28,14,0,215,216,5,20,0,
  	0,216,217,3,26,13,0,217,218,5,21,0,0,218,219,3,26,13,0,219,221,1,0,0,
  	0,220,215,1,0,0,0,220,221,1,0,0,0,221,27,1,0,0,0,222,226,3,32,16,0,223,
  	225,3,30,15,0,224,223,1,0,0,0,225,228,1,0,0,0,226,224,1,0,0,0,226,227,
  	1,0,0,0,227,29,1,0,0,0,228,226,1,0,0,0,229,230,5,22,0,0,230,231,3,32,
  	16,0,231,31,1,0,0,0,232,236,3,36,18,0,233,235,3,34,17,0,234,233,1,0,0,
  	0,235,238,1,0,0,0,236,234,1,0,0,0,236,237,1,0,0,0,237,33,1,0,0,0,238,
  	236,1,0,0,0,239,240,5,23,0,0,240,241,3,36,18,0,241,35,1,0,0,0,242,246,
  	3,40,20,0,243,245,3,38,19,0,244,243,1,0,0,0,245,248,1,0,0,0,246,244,1,
  	0,0,0,246,247,1,0,0,0,247,37,1,0,0,0,248,246,1,0,0,0,249,250,5,24,0,0,
  	250,251,3,40,20,0,251,39,1,0,0,0,252,256,3,44,22,0,253,255,3,42,21,0,
  	254,253,1,0,0,0,255,258,1,0,0,0,256,254,1,0,0,0,256,257,1,0,0,0,257,41,
  	1,0,0,0,258,256,1,0,0,0,259,260,7,2,0,0,260,261,3,44,22,0,261,43,1,0,
  	0,0,262,266,3,48,24,0,263,265,3,46,23,0,264,263,1,0,0,0,265,268,1,0,0,
  	0,266,264,1,0,0,0,266,267,1,0,0,0,267,45,1,0,0,0,268,266,1,0,0,0,269,
  	270,7,3,0,0,270,271,3,48,24,0,271,47,1,0,0,0,272,276,3,52,26,0,273,275,
  	3,50,25,0,274,273,1,0,0,0,275,278,1,0,0,0,276,274,1,0,0,0,276,277,1,0,
  	0,0,277,49,1,0,0,0,278,276,1,0,0,0,279,280,7,4,0,0,280,281,3,52,26,0,
  	281,51,1,0,0,0,282,286,3,56,28,0,283,285,3,54,27,0,284,283,1,0,0,0,285,
  	288,1,0,0,0,286,284,1,0,0,0,286,287,1,0,0,0,287,53,1,0,0,0,288,286,1,
  	0,0,0,289,290,7,5,0,0,290,291,3,56,28,0,291,55,1,0,0,0,292,293,7,6,0,
  	0,293,296,3,56,28,0,294,296,3,58,29,0,295,292,1,0,0,0,295,294,1,0,0,0,
  	296,57,1,0,0,0,297,319,5,48,0,0,298,319,5,49,0,0,299,319,5,53,0,0,300,
  	319,5,52,0,0,301,319,5,50,0,0,302,312,5,51,0,0,303,304,5,37,0,0,304,305,
  	3,20,10,0,305,306,5,38,0,0,306,313,1,0,0,0,307,309,3,12,6,0,308,307,1,
  	0,0,0,309,310,1,0,0,0,310,308,1,0,0,0,310,311,1,0,0,0,311,313,1,0,0,0,
  	312,303,1,0,0,0,312,308,1,0,0,0,312,313,1,0,0,0,313,319,1,0,0,0,314,315,
  	5,37,0,0,315,316,3,26,13,0,316,317,5,38,0,0,317,319,1,0,0,0,318,297,1,
  	0,0,0,318,298,1,0,0,0,318,299,1,0,0,0,318,300,1,0,0,0,318,301,1,0,0,0,
  	318,302,1,0,0,0,318,314,1,0,0,0,319,59,1,0,0,0,31,63,79,82,98,111,115,
  	120,136,140,149,154,163,167,183,190,198,201,210,212,220,226,236,246,256,
  	266,276,286,295,310,312,318
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
    setState(63);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 516096) != 0)) {
      setState(60);
      definition();
      setState(65);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(66);
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
    setState(68);
    type();
    setState(69);
    match(lycorisParser::IDENT);
    setState(70);
    match(lycorisParser::LP);
    setState(71);
    paramfunction();
    setState(72);
    match(lycorisParser::RP);
    setState(73);
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
    setState(82);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 516096) != 0)) {
      setState(75);
      antlrcpp::downCast<ParamfunctionContext *>(_localctx)->t1 = paramun();
      setState(79);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == lycorisParser::COMMA) {
        setState(76);
        antlrcpp::downCast<ParamfunctionContext *>(_localctx)->tn = mulparam();
        setState(81);
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
    setState(84);
    type();
    setState(85);
    match(lycorisParser::IDENT);
    setState(86);
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
    setState(88);
    match(lycorisParser::COMMA);
    setState(89);
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

lycorisParser::FordeclarationContext* lycorisParser::InstructionContext::fordeclaration() {
  return getRuleContext<lycorisParser::FordeclarationContext>(0);
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

std::vector<lycorisParser::DeclarationContext *> lycorisParser::InstructionContext::declaration() {
  return getRuleContexts<lycorisParser::DeclarationContext>();
}

lycorisParser::DeclarationContext* lycorisParser::InstructionContext::declaration(size_t i) {
  return getRuleContext<lycorisParser::DeclarationContext>(i);
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
    setState(167);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case lycorisParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(91);
        match(lycorisParser::T__0);
        setState(92);
        match(lycorisParser::LP);
        setState(93);
        antlrcpp::downCast<InstructionContext *>(_localctx)->ifcond = expr();
        setState(94);
        match(lycorisParser::RP);
        setState(95);
        antlrcpp::downCast<InstructionContext *>(_localctx)->ifblock = instruction();
        setState(98);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          setState(96);
          match(lycorisParser::T__1);
          setState(97);
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
        setState(100);
        match(lycorisParser::T__2);
        setState(101);
        match(lycorisParser::LP);
        setState(102);
        antlrcpp::downCast<InstructionContext *>(_localctx)->whilecond = expr();
        setState(103);
        match(lycorisParser::RP);
        setState(104);
        antlrcpp::downCast<InstructionContext *>(_localctx)->whileblock = instruction();
        break;
      }

      case lycorisParser::T__3: {
        enterOuterAlt(_localctx, 3);
        setState(106);
        match(lycorisParser::T__3);
        setState(107);
        match(lycorisParser::LP);
        setState(111);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 516096) != 0)) {
          setState(108);
          antlrcpp::downCast<InstructionContext *>(_localctx)->tinit = type();
          setState(109);
          antlrcpp::downCast<InstructionContext *>(_localctx)->dinit = fordeclaration();
        }
        setState(113);
        match(lycorisParser::SEMICOLON);
        setState(115);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 17733168346431488) != 0)) {
          setState(114);
          antlrcpp::downCast<InstructionContext *>(_localctx)->forcond = expr();
        }
        setState(117);
        match(lycorisParser::SEMICOLON);
        setState(120);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == lycorisParser::IDENT) {
          setState(118);
          antlrcpp::downCast<InstructionContext *>(_localctx)->aftername = match(lycorisParser::IDENT);
          setState(119);
          antlrcpp::downCast<InstructionContext *>(_localctx)->after = affectation();
        }
        setState(122);
        match(lycorisParser::RP);
        setState(123);
        antlrcpp::downCast<InstructionContext *>(_localctx)->forblock = instruction();
        break;
      }

      case lycorisParser::T__4: {
        enterOuterAlt(_localctx, 4);
        setState(124);
        match(lycorisParser::T__4);
        setState(125);
        antlrcpp::downCast<InstructionContext *>(_localctx)->ret = expr();
        setState(126);
        match(lycorisParser::SEMICOLON);
        break;
      }

      case lycorisParser::IDENT: {
        enterOuterAlt(_localctx, 5);
        setState(128);
        antlrcpp::downCast<InstructionContext *>(_localctx)->namec = match(lycorisParser::IDENT);
        setState(140);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case lycorisParser::LP: {
            setState(129);
            match(lycorisParser::LP);
            setState(130);
            antlrcpp::downCast<InstructionContext *>(_localctx)->parameter = exprlist();
            setState(131);
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
            setState(136);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == lycorisParser::LC) {
              setState(133);
              indexarr();
              setState(138);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
            setState(139);
            antlrcpp::downCast<InstructionContext *>(_localctx)->aff = affectation();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(142);
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
        setState(144);
        type();
        setState(145);
        antlrcpp::downCast<InstructionContext *>(_localctx)->var = match(lycorisParser::IDENT);
        setState(146);
        antlrcpp::downCast<InstructionContext *>(_localctx)->sarr = staticarr();
        setState(149);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == lycorisParser::ASSIGN) {
          setState(147);
          match(lycorisParser::ASSIGN);
          setState(148);
          antlrcpp::downCast<InstructionContext *>(_localctx)->value = expr();
        }
        setState(154);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == lycorisParser::COMMA) {
          setState(151);
          declaration();
          setState(156);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(157);
        match(lycorisParser::SEMICOLON);
        break;
      }

      case lycorisParser::LA: {
        enterOuterAlt(_localctx, 7);
        setState(159);
        match(lycorisParser::LA);
        setState(163);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 2253998837456954) != 0)) {
          setState(160);
          antlrcpp::downCast<InstructionContext *>(_localctx)->block = instruction();
          setState(165);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(166);
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
    setState(169);
    match(lycorisParser::LC);
    setState(170);
    expr();
    setState(171);
    match(lycorisParser::RC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FordeclarationContext ------------------------------------------------------------------

lycorisParser::FordeclarationContext::FordeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lycorisParser::FordeclarationContext::ASSIGN() {
  return getToken(lycorisParser::ASSIGN, 0);
}

tree::TerminalNode* lycorisParser::FordeclarationContext::IDENT() {
  return getToken(lycorisParser::IDENT, 0);
}

lycorisParser::StaticarrContext* lycorisParser::FordeclarationContext::staticarr() {
  return getRuleContext<lycorisParser::StaticarrContext>(0);
}

lycorisParser::ExprContext* lycorisParser::FordeclarationContext::expr() {
  return getRuleContext<lycorisParser::ExprContext>(0);
}


size_t lycorisParser::FordeclarationContext::getRuleIndex() const {
  return lycorisParser::RuleFordeclaration;
}

void lycorisParser::FordeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFordeclaration(this);
}

void lycorisParser::FordeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lycorisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFordeclaration(this);
}


std::any lycorisParser::FordeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lycorisVisitor*>(visitor))
    return parserVisitor->visitFordeclaration(this);
  else
    return visitor->visitChildren(this);
}

lycorisParser::FordeclarationContext* lycorisParser::fordeclaration() {
  FordeclarationContext *_localctx = _tracker.createInstance<FordeclarationContext>(_ctx, getState());
  enterRule(_localctx, 14, lycorisParser::RuleFordeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(173);
    antlrcpp::downCast<FordeclarationContext *>(_localctx)->var = match(lycorisParser::IDENT);
    setState(174);
    antlrcpp::downCast<FordeclarationContext *>(_localctx)->sarr = staticarr();
    setState(175);
    match(lycorisParser::ASSIGN);
    setState(176);
    antlrcpp::downCast<FordeclarationContext *>(_localctx)->value = expr();
   
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
  enterRule(_localctx, 16, lycorisParser::RuleDeclaration);
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
    setState(178);
    match(lycorisParser::COMMA);
    setState(179);
    antlrcpp::downCast<DeclarationContext *>(_localctx)->var = match(lycorisParser::IDENT);
    setState(180);
    antlrcpp::downCast<DeclarationContext *>(_localctx)->sarr = staticarr();
    setState(183);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == lycorisParser::ASSIGN) {
      setState(181);
      match(lycorisParser::ASSIGN);
      setState(182);
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
  enterRule(_localctx, 18, lycorisParser::RuleStaticarr);
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
    setState(190);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == lycorisParser::LC) {
      setState(185);
      match(lycorisParser::LC);
      setState(186);
      match(lycorisParser::INT);
      setState(187);
      match(lycorisParser::RC);
      setState(192);
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
  enterRule(_localctx, 20, lycorisParser::RuleExprlist);
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
    setState(201);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17733168346431488) != 0)) {
      setState(193);
      expr();
      setState(198);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == lycorisParser::COMMA) {
        setState(194);
        match(lycorisParser::COMMA);
        setState(195);
        expr();
        setState(200);
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
  enterRule(_localctx, 22, lycorisParser::RuleAffectation);
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
    setState(203);
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
    setState(204);
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
  enterRule(_localctx, 24, lycorisParser::RuleType);
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
    setState(206);
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
    setState(212);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == lycorisParser::T__18) {
      setState(208); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(207);
        match(lycorisParser::T__18);
        setState(210); 
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
  enterRule(_localctx, 26, lycorisParser::RuleExpr);
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
    setState(214);
    antlrcpp::downCast<ExprContext *>(_localctx)->a = or_();
    setState(220);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == lycorisParser::T__19) {
      setState(215);
      match(lycorisParser::T__19);
      setState(216);
      antlrcpp::downCast<ExprContext *>(_localctx)->b = expr();
      setState(217);
      match(lycorisParser::T__20);
      setState(218);
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
  enterRule(_localctx, 28, lycorisParser::RuleOr);
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
    setState(222);
    antlrcpp::downCast<OrContext *>(_localctx)->a = xor_();
    setState(226);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == lycorisParser::T__21) {
      setState(223);
      antlrcpp::downCast<OrContext *>(_localctx)->b = mor_();
      setState(228);
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
  enterRule(_localctx, 30, lycorisParser::RuleMor_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    antlrcpp::downCast<Mor_Context *>(_localctx)->op = match(lycorisParser::T__21);
    setState(230);
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
  enterRule(_localctx, 32, lycorisParser::RuleXor_);
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
    setState(232);
    antlrcpp::downCast<Xor_Context *>(_localctx)->a = and_();
    setState(236);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == lycorisParser::T__22) {
      setState(233);
      antlrcpp::downCast<Xor_Context *>(_localctx)->b = mxor_();
      setState(238);
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
  enterRule(_localctx, 34, lycorisParser::RuleMxor_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(239);
    antlrcpp::downCast<Mxor_Context *>(_localctx)->op = match(lycorisParser::T__22);
    setState(240);
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
  enterRule(_localctx, 36, lycorisParser::RuleAnd_);
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
    setState(242);
    antlrcpp::downCast<And_Context *>(_localctx)->a = equal();
    setState(246);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == lycorisParser::T__23) {
      setState(243);
      antlrcpp::downCast<And_Context *>(_localctx)->b = mand_();
      setState(248);
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
  enterRule(_localctx, 38, lycorisParser::RuleMand_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(249);
    antlrcpp::downCast<Mand_Context *>(_localctx)->op = match(lycorisParser::T__23);
    setState(250);
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
  enterRule(_localctx, 40, lycorisParser::RuleEqual);
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
    antlrcpp::downCast<EqualContext *>(_localctx)->a = comparaison();
    setState(256);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == lycorisParser::T__24

    || _la == lycorisParser::T__25) {
      setState(253);
      antlrcpp::downCast<EqualContext *>(_localctx)->b = mequal();
      setState(258);
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
  enterRule(_localctx, 42, lycorisParser::RuleMequal);
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
    setState(259);
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
    setState(260);
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
  enterRule(_localctx, 44, lycorisParser::RuleComparaison);
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
    antlrcpp::downCast<ComparaisonContext *>(_localctx)->a = addsub();
    setState(266);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2013265920) != 0)) {
      setState(263);
      antlrcpp::downCast<ComparaisonContext *>(_localctx)->b = mcomparaison();
      setState(268);
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
  enterRule(_localctx, 46, lycorisParser::RuleMcomparaison);
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
    setState(269);
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
    setState(270);
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
  enterRule(_localctx, 48, lycorisParser::RuleAddsub);
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
    antlrcpp::downCast<AddsubContext *>(_localctx)->a = muldivmod();
    setState(276);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == lycorisParser::T__30

    || _la == lycorisParser::T__31) {
      setState(273);
      antlrcpp::downCast<AddsubContext *>(_localctx)->b = maddsub();
      setState(278);
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
  enterRule(_localctx, 50, lycorisParser::RuleMaddsub);
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
    setState(279);
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
    setState(280);
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
  enterRule(_localctx, 52, lycorisParser::RuleMuldivmod);
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
    antlrcpp::downCast<MuldivmodContext *>(_localctx)->a = unary();
    setState(286);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 25770328064) != 0)) {
      setState(283);
      antlrcpp::downCast<MuldivmodContext *>(_localctx)->b = mmuldivmod();
      setState(288);
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
  enterRule(_localctx, 54, lycorisParser::RuleMmuldivmod);
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
    setState(289);
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
    setState(290);
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
  enterRule(_localctx, 56, lycorisParser::RuleUnary);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(295);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case lycorisParser::T__18:
      case lycorisParser::T__31:
      case lycorisParser::T__34:
      case lycorisParser::T__35: {
        enterOuterAlt(_localctx, 1);
        setState(292);
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
        setState(293);
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
        setState(294);
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
  enterRule(_localctx, 58, lycorisParser::RuleAtom);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(318);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case lycorisParser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(297);
        match(lycorisParser::INT);
        break;
      }

      case lycorisParser::FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(298);
        match(lycorisParser::FLOAT);
        break;
      }

      case lycorisParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(299);
        match(lycorisParser::STRING);
        break;
      }

      case lycorisParser::CHAR: {
        enterOuterAlt(_localctx, 4);
        setState(300);
        match(lycorisParser::CHAR);
        break;
      }

      case lycorisParser::BOOL: {
        enterOuterAlt(_localctx, 5);
        setState(301);
        match(lycorisParser::BOOL);
        break;
      }

      case lycorisParser::IDENT: {
        enterOuterAlt(_localctx, 6);
        setState(302);
        match(lycorisParser::IDENT);
        setState(312);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case lycorisParser::LP: {
            setState(303);
            match(lycorisParser::LP);
            setState(304);
            antlrcpp::downCast<AtomContext *>(_localctx)->param = exprlist();
            setState(305);
            match(lycorisParser::RP);
            break;
          }

          case lycorisParser::LC: {
            setState(308); 
            _errHandler->sync(this);
            _la = _input->LA(1);
            do {
              setState(307);
              antlrcpp::downCast<AtomContext *>(_localctx)->arr = indexarr();
              setState(310); 
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
        setState(314);
        match(lycorisParser::LP);
        setState(315);
        expr();
        setState(316);
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
