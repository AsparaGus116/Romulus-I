
// Generated from hawkLexer.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace hawk {


class  hawkLexer : public antlr4::Lexer {
public:
  enum {
    KBOOL = 1, KINT = 2, KCHAR = 3, KVOID = 4, KADD = 5, KSUB = 6, KMUL = 7, 
    KDIV = 8, KMOD = 9, KBAND = 10, KBOR = 11, KBNOT = 12, KNOT = 13, KXOR = 14, 
    KOR = 15, KAND = 16, LPAREN = 17, RPAREN = 18, LBRACKET = 19, RBRACKET = 20, 
    LBRACE = 21, RBRACE = 22, KASSIGN = 23, KADDASSIGN = 24, KSUBASSIGN = 25, 
    KMULASSIGN = 26, KDIVASSIGN = 27, KMODASSIGN = 28, KANDASSIGN = 29, 
    KORASSIGN = 30, KNOTASSIGN = 31, KXORASSIGN = 32, KEQ = 33, KNE = 34, 
    KG = 35, KL = 36, KGE = 37, KLE = 38, KINC = 39, KDEC = 40, KIF = 41, 
    KELSE = 42, KWHILE = 43, KFOR = 44, COMMA = 45, SEMICOLON = 46, ID = 47, 
    INT = 48, HEX = 49, BIN = 50, WS = 51
  };

  explicit hawkLexer(antlr4::CharStream *input);

  ~hawkLexer() override;


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

}  // namespace hawk
