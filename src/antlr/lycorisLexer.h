
// Generated from src/antlr/lycoris.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  lycorisLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, LP = 17, RP = 18, LC = 19, RC = 20, LA = 21, 
    RA = 22, COMMA = 23, SEMICOLON = 24, NEWLINE = 25, WS = 26, INT = 27, 
    FLOAT = 28, BOOL = 29, IDENT = 30, CHAR = 31, STRING = 32
  };

  explicit lycorisLexer(antlr4::CharStream *input);

  ~lycorisLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

