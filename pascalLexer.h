
// Generated from pascal.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  pascalLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, PLUS = 16, MINUS = 17, TIMES = 18, DIVISION = 19, MOD = 20, 
    ASSIGN = 21, COMMA = 22, SEMI = 23, COLON = 24, EQ = 25, LT = 26, LEQ = 27, 
    GT = 28, GEQ = 29, NEQ = 30, LPAREN = 31, RPAREN = 32, LPARENCOM = 33, 
    RPARENCOM = 34, LBRACK = 35, RBRACK = 36, DOT = 37, LCURLY = 38, RCURLY = 39, 
    ID = 40, NUMBER = 41, STRING = 42, R_COMMENT = 43, C_COMMENT = 44, LINE_COMMENT = 45, 
    WS = 46, ErrorChar = 47
  };

  pascalLexer(antlr4::CharStream *input);
  ~pascalLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

