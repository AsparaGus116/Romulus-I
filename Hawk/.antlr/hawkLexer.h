
// Generated from c:/Users/gusbr/Desktop/CodingShit/Romulus-I/Hawk/hawkLexer.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  hawkLexer : public antlr4::Lexer {
public:
  enum {
    KBOOL = 1, KINT = 2, KCHAR = 3, KVOID = 4, KADD = 5, KSUB = 6, KMUL = 7, 
    KDIV = 8, KMOD = 9, KBAND = 10, KBOR = 11, KBNOT = 12, KNOT = 13, KXOR = 14, 
    KOR = 15, KAND = 16, KSHL = 17, KSHR = 18, LPAREN = 19, RPAREN = 20, 
    LBRACKET = 21, RBRACKET = 22, LBRACE = 23, RBRACE = 24, KASSIGN = 25, 
    KADDASSIGN = 26, KSUBASSIGN = 27, KMULASSIGN = 28, KDIVASSIGN = 29, 
    KMODASSIGN = 30, KANDASSIGN = 31, KORASSIGN = 32, KNOTASSIGN = 33, KXORASSIGN = 34, 
    KSHLASSIGN = 35, KSHRASSIGN = 36, KQUESTION = 37, KCOLON = 38, KEQ = 39, 
    KNE = 40, KG = 41, KL = 42, KGE = 43, KLE = 44, KINC = 45, KDEC = 46, 
    KSTATIC = 47, KCONST = 48, KSTRUCT = 49, KIF = 50, KELSE = 51, KWHILE = 52, 
    KDO = 53, KFOR = 54, COMMA = 55, SEMICOLON = 56, DOT = 57, ARROW = 58, 
    ID = 59, INT = 60, HEX = 61, BIN = 62, COMMENT = 63, BLOCKCOMMENT = 64, 
    WS = 65
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

