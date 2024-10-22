
// Generated from hawkParser.g4 by ANTLR 4.13.2


#include "hawkParserVisitor.h"

#include "hawkParser.h"


using namespace antlrcpp;
using namespace hawk;

using namespace antlr4;

namespace {

struct HawkParserStaticData final {
  HawkParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  HawkParserStaticData(const HawkParserStaticData&) = delete;
  HawkParserStaticData(HawkParserStaticData&&) = delete;
  HawkParserStaticData& operator=(const HawkParserStaticData&) = delete;
  HawkParserStaticData& operator=(HawkParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag hawkparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<HawkParserStaticData> hawkparserParserStaticData = nullptr;

void hawkparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (hawkparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(hawkparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<HawkParserStaticData>(
    std::vector<std::string>{
      "program", "type", "op", "assignOp", "number", "cond", "stmt", "trueStmt", 
      "expr", "functionStmt", "ifStmt", "ifBlock", "elifBlock", "elseBlock", 
      "whileStmt", "forRange"
    },
    std::vector<std::string>{
      "", "'bool'", "'int'", "'char'", "'void'", "'+'", "'-'", "'*'", "'/'", 
      "'%'", "'&'", "'|'", "'~'", "'!'", "'^'", "'||'", "'&&'", "'('", "')'", 
      "'['", "']'", "'{'", "'}'", "'='", "'+='", "'-='", "'*='", "'/='", 
      "'%='", "'&='", "'|='", "'~='", "'^='", "'=='", "'!='", "'>'", "'<'", 
      "'>='", "'<='", "'++'", "'--'", "'if'", "'else'", "'while'", "'for'", 
      "','", "';'"
    },
    std::vector<std::string>{
      "", "KBOOL", "KINT", "KCHAR", "KVOID", "KADD", "KSUB", "KMUL", "KDIV", 
      "KMOD", "KBAND", "KBOR", "KBNOT", "KNOT", "KXOR", "KOR", "KAND", "LPAREN", 
      "RPAREN", "LBRACKET", "RBRACKET", "LBRACE", "RBRACE", "KASSIGN", "KADDASSIGN", 
      "KSUBASSIGN", "KMULASSIGN", "KDIVASSIGN", "KMODASSIGN", "KANDASSIGN", 
      "KORASSIGN", "KNOTASSIGN", "KXORASSIGN", "KEQ", "KNE", "KG", "KL", 
      "KGE", "KLE", "KINC", "KDEC", "KIF", "KELSE", "KWHILE", "KFOR", "COMMA", 
      "SEMICOLON", "ID", "INT", "HEX", "BIN", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,51,218,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,1,0,4,0,34,8,0,11,0,12,0,35,1,0,1,0,1,1,1,1,1,2,1,2,1,3,
  	1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,57,8,6,1,7,3,7,60,
  	8,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,71,8,7,1,8,1,8,1,8,1,8,1,
  	8,1,8,1,8,3,8,80,8,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,5,8,90,8,8,10,8,
  	12,8,93,9,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,5,9,104,8,9,10,9,12,9,
  	107,9,9,3,9,109,8,9,1,9,1,9,1,9,5,9,114,8,9,10,9,12,9,117,9,9,1,9,1,9,
  	1,10,1,10,5,10,123,8,10,10,10,12,10,126,9,10,1,10,3,10,129,8,10,1,11,
  	1,11,1,11,1,11,1,11,1,11,5,11,137,8,11,10,11,12,11,140,9,11,1,11,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,11,3,11,150,8,11,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,5,12,159,8,12,10,12,12,12,162,9,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,12,3,12,173,8,12,1,13,1,13,1,13,5,13,178,8,13,10,13,
  	12,13,181,9,13,1,13,1,13,1,13,3,13,186,8,13,1,14,1,14,1,14,1,14,1,14,
  	1,14,5,14,194,8,14,10,14,12,14,197,9,14,1,14,1,14,1,15,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,15,1,15,5,15,211,8,15,10,15,12,15,214,9,15,1,15,
  	1,15,1,15,0,1,16,16,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,0,6,1,
  	0,1,4,1,0,5,16,1,0,23,32,1,0,48,50,1,0,33,38,1,0,39,40,227,0,33,1,0,0,
  	0,2,39,1,0,0,0,4,41,1,0,0,0,6,43,1,0,0,0,8,45,1,0,0,0,10,47,1,0,0,0,12,
  	56,1,0,0,0,14,70,1,0,0,0,16,79,1,0,0,0,18,94,1,0,0,0,20,120,1,0,0,0,22,
  	149,1,0,0,0,24,172,1,0,0,0,26,185,1,0,0,0,28,187,1,0,0,0,30,200,1,0,0,
  	0,32,34,3,12,6,0,33,32,1,0,0,0,34,35,1,0,0,0,35,33,1,0,0,0,35,36,1,0,
  	0,0,36,37,1,0,0,0,37,38,5,0,0,1,38,1,1,0,0,0,39,40,7,0,0,0,40,3,1,0,0,
  	0,41,42,7,1,0,0,42,5,1,0,0,0,43,44,7,2,0,0,44,7,1,0,0,0,45,46,7,3,0,0,
  	46,9,1,0,0,0,47,48,7,4,0,0,48,11,1,0,0,0,49,57,3,18,9,0,50,57,3,20,10,
  	0,51,57,3,28,14,0,52,57,3,30,15,0,53,54,3,14,7,0,54,55,5,46,0,0,55,57,
  	1,0,0,0,56,49,1,0,0,0,56,50,1,0,0,0,56,51,1,0,0,0,56,52,1,0,0,0,56,53,
  	1,0,0,0,57,13,1,0,0,0,58,60,3,2,1,0,59,58,1,0,0,0,59,60,1,0,0,0,60,61,
  	1,0,0,0,61,62,5,47,0,0,62,63,3,6,3,0,63,64,3,16,8,0,64,71,1,0,0,0,65,
  	66,5,47,0,0,66,71,7,5,0,0,67,68,7,5,0,0,68,71,5,47,0,0,69,71,3,16,8,0,
  	70,59,1,0,0,0,70,65,1,0,0,0,70,67,1,0,0,0,70,69,1,0,0,0,71,15,1,0,0,0,
  	72,73,6,8,-1,0,73,74,5,17,0,0,74,75,3,16,8,0,75,76,5,18,0,0,76,80,1,0,
  	0,0,77,80,5,47,0,0,78,80,3,8,4,0,79,72,1,0,0,0,79,77,1,0,0,0,79,78,1,
  	0,0,0,80,91,1,0,0,0,81,82,10,5,0,0,82,83,3,4,2,0,83,84,3,16,8,6,84,90,
  	1,0,0,0,85,86,10,4,0,0,86,87,3,10,5,0,87,88,3,16,8,5,88,90,1,0,0,0,89,
  	81,1,0,0,0,89,85,1,0,0,0,90,93,1,0,0,0,91,89,1,0,0,0,91,92,1,0,0,0,92,
  	17,1,0,0,0,93,91,1,0,0,0,94,95,3,2,1,0,95,96,5,47,0,0,96,108,5,17,0,0,
  	97,98,3,2,1,0,98,105,5,47,0,0,99,100,5,45,0,0,100,101,3,2,1,0,101,102,
  	5,47,0,0,102,104,1,0,0,0,103,99,1,0,0,0,104,107,1,0,0,0,105,103,1,0,0,
  	0,105,106,1,0,0,0,106,109,1,0,0,0,107,105,1,0,0,0,108,97,1,0,0,0,108,
  	109,1,0,0,0,109,110,1,0,0,0,110,111,5,18,0,0,111,115,5,21,0,0,112,114,
  	3,12,6,0,113,112,1,0,0,0,114,117,1,0,0,0,115,113,1,0,0,0,115,116,1,0,
  	0,0,116,118,1,0,0,0,117,115,1,0,0,0,118,119,5,22,0,0,119,19,1,0,0,0,120,
  	124,3,22,11,0,121,123,3,24,12,0,122,121,1,0,0,0,123,126,1,0,0,0,124,122,
  	1,0,0,0,124,125,1,0,0,0,125,128,1,0,0,0,126,124,1,0,0,0,127,129,3,26,
  	13,0,128,127,1,0,0,0,128,129,1,0,0,0,129,21,1,0,0,0,130,131,5,41,0,0,
  	131,132,5,17,0,0,132,133,3,16,8,0,133,134,5,18,0,0,134,138,5,21,0,0,135,
  	137,3,12,6,0,136,135,1,0,0,0,137,140,1,0,0,0,138,136,1,0,0,0,138,139,
  	1,0,0,0,139,141,1,0,0,0,140,138,1,0,0,0,141,142,5,22,0,0,142,150,1,0,
  	0,0,143,144,5,41,0,0,144,145,5,17,0,0,145,146,3,16,8,0,146,147,5,18,0,
  	0,147,148,3,12,6,0,148,150,1,0,0,0,149,130,1,0,0,0,149,143,1,0,0,0,150,
  	23,1,0,0,0,151,152,5,42,0,0,152,153,5,41,0,0,153,154,5,17,0,0,154,155,
  	3,16,8,0,155,156,5,18,0,0,156,160,5,21,0,0,157,159,3,12,6,0,158,157,1,
  	0,0,0,159,162,1,0,0,0,160,158,1,0,0,0,160,161,1,0,0,0,161,163,1,0,0,0,
  	162,160,1,0,0,0,163,164,5,22,0,0,164,173,1,0,0,0,165,166,5,42,0,0,166,
  	167,5,41,0,0,167,168,5,17,0,0,168,169,3,16,8,0,169,170,5,18,0,0,170,171,
  	3,12,6,0,171,173,1,0,0,0,172,151,1,0,0,0,172,165,1,0,0,0,173,25,1,0,0,
  	0,174,175,5,42,0,0,175,179,5,21,0,0,176,178,3,12,6,0,177,176,1,0,0,0,
  	178,181,1,0,0,0,179,177,1,0,0,0,179,180,1,0,0,0,180,182,1,0,0,0,181,179,
  	1,0,0,0,182,186,5,22,0,0,183,184,5,42,0,0,184,186,3,12,6,0,185,174,1,
  	0,0,0,185,183,1,0,0,0,186,27,1,0,0,0,187,188,5,43,0,0,188,189,5,17,0,
  	0,189,190,3,16,8,0,190,191,5,18,0,0,191,195,5,21,0,0,192,194,3,12,6,0,
  	193,192,1,0,0,0,194,197,1,0,0,0,195,193,1,0,0,0,195,196,1,0,0,0,196,198,
  	1,0,0,0,197,195,1,0,0,0,198,199,5,22,0,0,199,29,1,0,0,0,200,201,5,44,
  	0,0,201,202,5,17,0,0,202,203,3,14,7,0,203,204,5,46,0,0,204,205,3,16,8,
  	0,205,206,5,46,0,0,206,207,3,14,7,0,207,208,5,18,0,0,208,212,5,21,0,0,
  	209,211,3,12,6,0,210,209,1,0,0,0,211,214,1,0,0,0,212,210,1,0,0,0,212,
  	213,1,0,0,0,213,215,1,0,0,0,214,212,1,0,0,0,215,216,5,22,0,0,216,31,1,
  	0,0,0,20,35,56,59,70,79,89,91,105,108,115,124,128,138,149,160,172,179,
  	185,195,212
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  hawkparserParserStaticData = std::move(staticData);
}

}

hawkParser::hawkParser(TokenStream *input) : hawkParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

hawkParser::hawkParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  hawkParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *hawkparserParserStaticData->atn, hawkparserParserStaticData->decisionToDFA, hawkparserParserStaticData->sharedContextCache, options);
}

hawkParser::~hawkParser() {
  delete _interpreter;
}

const atn::ATN& hawkParser::getATN() const {
  return *hawkparserParserStaticData->atn;
}

std::string hawkParser::getGrammarFileName() const {
  return "hawkParser.g4";
}

const std::vector<std::string>& hawkParser::getRuleNames() const {
  return hawkparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& hawkParser::getVocabulary() const {
  return hawkparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView hawkParser::getSerializedATN() const {
  return hawkparserParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

hawkParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hawkParser::ProgramContext::EOF() {
  return getToken(hawkParser::EOF, 0);
}

std::vector<hawkParser::StmtContext *> hawkParser::ProgramContext::stmt() {
  return getRuleContexts<hawkParser::StmtContext>();
}

hawkParser::StmtContext* hawkParser::ProgramContext::stmt(size_t i) {
  return getRuleContext<hawkParser::StmtContext>(i);
}


size_t hawkParser::ProgramContext::getRuleIndex() const {
  return hawkParser::RuleProgram;
}


std::any hawkParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hawkParserVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

hawkParser::ProgramContext* hawkParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, hawkParser::RuleProgram);
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
    setState(33); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(32);
      stmt();
      setState(35); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2141298895224862) != 0));
    setState(37);
    match(hawkParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

hawkParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hawkParser::TypeContext::KBOOL() {
  return getToken(hawkParser::KBOOL, 0);
}

tree::TerminalNode* hawkParser::TypeContext::KINT() {
  return getToken(hawkParser::KINT, 0);
}

tree::TerminalNode* hawkParser::TypeContext::KCHAR() {
  return getToken(hawkParser::KCHAR, 0);
}

tree::TerminalNode* hawkParser::TypeContext::KVOID() {
  return getToken(hawkParser::KVOID, 0);
}


size_t hawkParser::TypeContext::getRuleIndex() const {
  return hawkParser::RuleType;
}


std::any hawkParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hawkParserVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

hawkParser::TypeContext* hawkParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 2, hawkParser::RuleType);
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
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 30) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpContext ------------------------------------------------------------------

hawkParser::OpContext::OpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hawkParser::OpContext::KADD() {
  return getToken(hawkParser::KADD, 0);
}

tree::TerminalNode* hawkParser::OpContext::KSUB() {
  return getToken(hawkParser::KSUB, 0);
}

tree::TerminalNode* hawkParser::OpContext::KMUL() {
  return getToken(hawkParser::KMUL, 0);
}

tree::TerminalNode* hawkParser::OpContext::KDIV() {
  return getToken(hawkParser::KDIV, 0);
}

tree::TerminalNode* hawkParser::OpContext::KMOD() {
  return getToken(hawkParser::KMOD, 0);
}

tree::TerminalNode* hawkParser::OpContext::KBAND() {
  return getToken(hawkParser::KBAND, 0);
}

tree::TerminalNode* hawkParser::OpContext::KBOR() {
  return getToken(hawkParser::KBOR, 0);
}

tree::TerminalNode* hawkParser::OpContext::KBNOT() {
  return getToken(hawkParser::KBNOT, 0);
}

tree::TerminalNode* hawkParser::OpContext::KNOT() {
  return getToken(hawkParser::KNOT, 0);
}

tree::TerminalNode* hawkParser::OpContext::KXOR() {
  return getToken(hawkParser::KXOR, 0);
}

tree::TerminalNode* hawkParser::OpContext::KOR() {
  return getToken(hawkParser::KOR, 0);
}

tree::TerminalNode* hawkParser::OpContext::KAND() {
  return getToken(hawkParser::KAND, 0);
}


size_t hawkParser::OpContext::getRuleIndex() const {
  return hawkParser::RuleOp;
}


std::any hawkParser::OpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hawkParserVisitor*>(visitor))
    return parserVisitor->visitOp(this);
  else
    return visitor->visitChildren(this);
}

hawkParser::OpContext* hawkParser::op() {
  OpContext *_localctx = _tracker.createInstance<OpContext>(_ctx, getState());
  enterRule(_localctx, 4, hawkParser::RuleOp);
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
    setState(41);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 131040) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignOpContext ------------------------------------------------------------------

hawkParser::AssignOpContext::AssignOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hawkParser::AssignOpContext::KASSIGN() {
  return getToken(hawkParser::KASSIGN, 0);
}

tree::TerminalNode* hawkParser::AssignOpContext::KADDASSIGN() {
  return getToken(hawkParser::KADDASSIGN, 0);
}

tree::TerminalNode* hawkParser::AssignOpContext::KSUBASSIGN() {
  return getToken(hawkParser::KSUBASSIGN, 0);
}

tree::TerminalNode* hawkParser::AssignOpContext::KMULASSIGN() {
  return getToken(hawkParser::KMULASSIGN, 0);
}

tree::TerminalNode* hawkParser::AssignOpContext::KDIVASSIGN() {
  return getToken(hawkParser::KDIVASSIGN, 0);
}

tree::TerminalNode* hawkParser::AssignOpContext::KMODASSIGN() {
  return getToken(hawkParser::KMODASSIGN, 0);
}

tree::TerminalNode* hawkParser::AssignOpContext::KANDASSIGN() {
  return getToken(hawkParser::KANDASSIGN, 0);
}

tree::TerminalNode* hawkParser::AssignOpContext::KORASSIGN() {
  return getToken(hawkParser::KORASSIGN, 0);
}

tree::TerminalNode* hawkParser::AssignOpContext::KNOTASSIGN() {
  return getToken(hawkParser::KNOTASSIGN, 0);
}

tree::TerminalNode* hawkParser::AssignOpContext::KXORASSIGN() {
  return getToken(hawkParser::KXORASSIGN, 0);
}


size_t hawkParser::AssignOpContext::getRuleIndex() const {
  return hawkParser::RuleAssignOp;
}


std::any hawkParser::AssignOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hawkParserVisitor*>(visitor))
    return parserVisitor->visitAssignOp(this);
  else
    return visitor->visitChildren(this);
}

hawkParser::AssignOpContext* hawkParser::assignOp() {
  AssignOpContext *_localctx = _tracker.createInstance<AssignOpContext>(_ctx, getState());
  enterRule(_localctx, 6, hawkParser::RuleAssignOp);
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
    setState(43);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8581545984) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

hawkParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hawkParser::NumberContext::INT() {
  return getToken(hawkParser::INT, 0);
}

tree::TerminalNode* hawkParser::NumberContext::HEX() {
  return getToken(hawkParser::HEX, 0);
}

tree::TerminalNode* hawkParser::NumberContext::BIN() {
  return getToken(hawkParser::BIN, 0);
}


size_t hawkParser::NumberContext::getRuleIndex() const {
  return hawkParser::RuleNumber;
}


std::any hawkParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hawkParserVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

hawkParser::NumberContext* hawkParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 8, hawkParser::RuleNumber);
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
    setState(45);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1970324836974592) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CondContext ------------------------------------------------------------------

hawkParser::CondContext::CondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hawkParser::CondContext::KEQ() {
  return getToken(hawkParser::KEQ, 0);
}

tree::TerminalNode* hawkParser::CondContext::KNE() {
  return getToken(hawkParser::KNE, 0);
}

tree::TerminalNode* hawkParser::CondContext::KG() {
  return getToken(hawkParser::KG, 0);
}

tree::TerminalNode* hawkParser::CondContext::KL() {
  return getToken(hawkParser::KL, 0);
}

tree::TerminalNode* hawkParser::CondContext::KGE() {
  return getToken(hawkParser::KGE, 0);
}

tree::TerminalNode* hawkParser::CondContext::KLE() {
  return getToken(hawkParser::KLE, 0);
}


size_t hawkParser::CondContext::getRuleIndex() const {
  return hawkParser::RuleCond;
}


std::any hawkParser::CondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hawkParserVisitor*>(visitor))
    return parserVisitor->visitCond(this);
  else
    return visitor->visitChildren(this);
}

hawkParser::CondContext* hawkParser::cond() {
  CondContext *_localctx = _tracker.createInstance<CondContext>(_ctx, getState());
  enterRule(_localctx, 10, hawkParser::RuleCond);
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
    setState(47);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 541165879296) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

hawkParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hawkParser::FunctionStmtContext* hawkParser::StmtContext::functionStmt() {
  return getRuleContext<hawkParser::FunctionStmtContext>(0);
}

hawkParser::IfStmtContext* hawkParser::StmtContext::ifStmt() {
  return getRuleContext<hawkParser::IfStmtContext>(0);
}

hawkParser::WhileStmtContext* hawkParser::StmtContext::whileStmt() {
  return getRuleContext<hawkParser::WhileStmtContext>(0);
}

hawkParser::ForRangeContext* hawkParser::StmtContext::forRange() {
  return getRuleContext<hawkParser::ForRangeContext>(0);
}

hawkParser::TrueStmtContext* hawkParser::StmtContext::trueStmt() {
  return getRuleContext<hawkParser::TrueStmtContext>(0);
}

tree::TerminalNode* hawkParser::StmtContext::SEMICOLON() {
  return getToken(hawkParser::SEMICOLON, 0);
}


size_t hawkParser::StmtContext::getRuleIndex() const {
  return hawkParser::RuleStmt;
}


std::any hawkParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hawkParserVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

hawkParser::StmtContext* hawkParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 12, hawkParser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(56);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(49);
      functionStmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(50);
      ifStmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(51);
      whileStmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(52);
      forRange();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(53);
      trueStmt();
      setState(54);
      match(hawkParser::SEMICOLON);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrueStmtContext ------------------------------------------------------------------

hawkParser::TrueStmtContext::TrueStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hawkParser::TrueStmtContext::ID() {
  return getToken(hawkParser::ID, 0);
}

hawkParser::AssignOpContext* hawkParser::TrueStmtContext::assignOp() {
  return getRuleContext<hawkParser::AssignOpContext>(0);
}

hawkParser::ExprContext* hawkParser::TrueStmtContext::expr() {
  return getRuleContext<hawkParser::ExprContext>(0);
}

hawkParser::TypeContext* hawkParser::TrueStmtContext::type() {
  return getRuleContext<hawkParser::TypeContext>(0);
}

tree::TerminalNode* hawkParser::TrueStmtContext::KINC() {
  return getToken(hawkParser::KINC, 0);
}

tree::TerminalNode* hawkParser::TrueStmtContext::KDEC() {
  return getToken(hawkParser::KDEC, 0);
}


size_t hawkParser::TrueStmtContext::getRuleIndex() const {
  return hawkParser::RuleTrueStmt;
}


std::any hawkParser::TrueStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hawkParserVisitor*>(visitor))
    return parserVisitor->visitTrueStmt(this);
  else
    return visitor->visitChildren(this);
}

hawkParser::TrueStmtContext* hawkParser::trueStmt() {
  TrueStmtContext *_localctx = _tracker.createInstance<TrueStmtContext>(_ctx, getState());
  enterRule(_localctx, 14, hawkParser::RuleTrueStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(70);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(59);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 30) != 0)) {
        setState(58);
        type();
      }
      setState(61);
      match(hawkParser::ID);
      setState(62);
      assignOp();
      setState(63);
      expr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(65);
      match(hawkParser::ID);
      setState(66);
      _la = _input->LA(1);
      if (!(_la == hawkParser::KINC

      || _la == hawkParser::KDEC)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(67);
      _la = _input->LA(1);
      if (!(_la == hawkParser::KINC

      || _la == hawkParser::KDEC)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(68);
      match(hawkParser::ID);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(69);
      expr(0);
      break;
    }

    default:
      break;
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

hawkParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t hawkParser::ExprContext::getRuleIndex() const {
  return hawkParser::RuleExpr;
}

void hawkParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VarExprContext ------------------------------------------------------------------

tree::TerminalNode* hawkParser::VarExprContext::ID() {
  return getToken(hawkParser::ID, 0);
}

hawkParser::VarExprContext::VarExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any hawkParser::VarExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hawkParserVisitor*>(visitor))
    return parserVisitor->visitVarExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticExprContext ------------------------------------------------------------------

std::vector<hawkParser::ExprContext *> hawkParser::ArithmeticExprContext::expr() {
  return getRuleContexts<hawkParser::ExprContext>();
}

hawkParser::ExprContext* hawkParser::ArithmeticExprContext::expr(size_t i) {
  return getRuleContext<hawkParser::ExprContext>(i);
}

hawkParser::OpContext* hawkParser::ArithmeticExprContext::op() {
  return getRuleContext<hawkParser::OpContext>(0);
}

hawkParser::ArithmeticExprContext::ArithmeticExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any hawkParser::ArithmeticExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hawkParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelationalExprContext ------------------------------------------------------------------

std::vector<hawkParser::ExprContext *> hawkParser::RelationalExprContext::expr() {
  return getRuleContexts<hawkParser::ExprContext>();
}

hawkParser::ExprContext* hawkParser::RelationalExprContext::expr(size_t i) {
  return getRuleContext<hawkParser::ExprContext>(i);
}

hawkParser::CondContext* hawkParser::RelationalExprContext::cond() {
  return getRuleContext<hawkParser::CondContext>(0);
}

hawkParser::RelationalExprContext::RelationalExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any hawkParser::RelationalExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hawkParserVisitor*>(visitor))
    return parserVisitor->visitRelationalExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExprContext ------------------------------------------------------------------

tree::TerminalNode* hawkParser::ParenExprContext::LPAREN() {
  return getToken(hawkParser::LPAREN, 0);
}

hawkParser::ExprContext* hawkParser::ParenExprContext::expr() {
  return getRuleContext<hawkParser::ExprContext>(0);
}

tree::TerminalNode* hawkParser::ParenExprContext::RPAREN() {
  return getToken(hawkParser::RPAREN, 0);
}

hawkParser::ParenExprContext::ParenExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any hawkParser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hawkParserVisitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprContext ------------------------------------------------------------------

hawkParser::NumberContext* hawkParser::NumExprContext::number() {
  return getRuleContext<hawkParser::NumberContext>(0);
}

hawkParser::NumExprContext::NumExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any hawkParser::NumExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hawkParserVisitor*>(visitor))
    return parserVisitor->visitNumExpr(this);
  else
    return visitor->visitChildren(this);
}

hawkParser::ExprContext* hawkParser::expr() {
   return expr(0);
}

hawkParser::ExprContext* hawkParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  hawkParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  hawkParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, hawkParser::RuleExpr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(79);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case hawkParser::LPAREN: {
        _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(73);
        match(hawkParser::LPAREN);
        setState(74);
        expr(0);
        setState(75);
        match(hawkParser::RPAREN);
        break;
      }

      case hawkParser::ID: {
        _localctx = _tracker.createInstance<VarExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(77);
        match(hawkParser::ID);
        break;
      }

      case hawkParser::INT:
      case hawkParser::HEX:
      case hawkParser::BIN: {
        _localctx = _tracker.createInstance<NumExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(78);
        number();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(91);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(89);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ArithmeticExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(81);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(82);
          op();
          setState(83);
          expr(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<RelationalExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(85);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(86);
          cond();
          setState(87);
          expr(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(93);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FunctionStmtContext ------------------------------------------------------------------

hawkParser::FunctionStmtContext::FunctionStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<hawkParser::TypeContext *> hawkParser::FunctionStmtContext::type() {
  return getRuleContexts<hawkParser::TypeContext>();
}

hawkParser::TypeContext* hawkParser::FunctionStmtContext::type(size_t i) {
  return getRuleContext<hawkParser::TypeContext>(i);
}

std::vector<tree::TerminalNode *> hawkParser::FunctionStmtContext::ID() {
  return getTokens(hawkParser::ID);
}

tree::TerminalNode* hawkParser::FunctionStmtContext::ID(size_t i) {
  return getToken(hawkParser::ID, i);
}

tree::TerminalNode* hawkParser::FunctionStmtContext::LPAREN() {
  return getToken(hawkParser::LPAREN, 0);
}

tree::TerminalNode* hawkParser::FunctionStmtContext::RPAREN() {
  return getToken(hawkParser::RPAREN, 0);
}

tree::TerminalNode* hawkParser::FunctionStmtContext::LBRACE() {
  return getToken(hawkParser::LBRACE, 0);
}

tree::TerminalNode* hawkParser::FunctionStmtContext::RBRACE() {
  return getToken(hawkParser::RBRACE, 0);
}

std::vector<hawkParser::StmtContext *> hawkParser::FunctionStmtContext::stmt() {
  return getRuleContexts<hawkParser::StmtContext>();
}

hawkParser::StmtContext* hawkParser::FunctionStmtContext::stmt(size_t i) {
  return getRuleContext<hawkParser::StmtContext>(i);
}

std::vector<tree::TerminalNode *> hawkParser::FunctionStmtContext::COMMA() {
  return getTokens(hawkParser::COMMA);
}

tree::TerminalNode* hawkParser::FunctionStmtContext::COMMA(size_t i) {
  return getToken(hawkParser::COMMA, i);
}


size_t hawkParser::FunctionStmtContext::getRuleIndex() const {
  return hawkParser::RuleFunctionStmt;
}


std::any hawkParser::FunctionStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hawkParserVisitor*>(visitor))
    return parserVisitor->visitFunctionStmt(this);
  else
    return visitor->visitChildren(this);
}

hawkParser::FunctionStmtContext* hawkParser::functionStmt() {
  FunctionStmtContext *_localctx = _tracker.createInstance<FunctionStmtContext>(_ctx, getState());
  enterRule(_localctx, 18, hawkParser::RuleFunctionStmt);
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
    type();
    setState(95);
    match(hawkParser::ID);
    setState(96);
    match(hawkParser::LPAREN);
    setState(108);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 30) != 0)) {
      setState(97);
      type();
      setState(98);
      match(hawkParser::ID);
      setState(105);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == hawkParser::COMMA) {
        setState(99);
        match(hawkParser::COMMA);
        setState(100);
        type();
        setState(101);
        match(hawkParser::ID);
        setState(107);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(110);
    match(hawkParser::RPAREN);
    setState(111);
    match(hawkParser::LBRACE);
    setState(115);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2141298895224862) != 0)) {
      setState(112);
      stmt();
      setState(117);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(118);
    match(hawkParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStmtContext ------------------------------------------------------------------

hawkParser::IfStmtContext::IfStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hawkParser::IfBlockContext* hawkParser::IfStmtContext::ifBlock() {
  return getRuleContext<hawkParser::IfBlockContext>(0);
}

std::vector<hawkParser::ElifBlockContext *> hawkParser::IfStmtContext::elifBlock() {
  return getRuleContexts<hawkParser::ElifBlockContext>();
}

hawkParser::ElifBlockContext* hawkParser::IfStmtContext::elifBlock(size_t i) {
  return getRuleContext<hawkParser::ElifBlockContext>(i);
}

hawkParser::ElseBlockContext* hawkParser::IfStmtContext::elseBlock() {
  return getRuleContext<hawkParser::ElseBlockContext>(0);
}


size_t hawkParser::IfStmtContext::getRuleIndex() const {
  return hawkParser::RuleIfStmt;
}


std::any hawkParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hawkParserVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}

hawkParser::IfStmtContext* hawkParser::ifStmt() {
  IfStmtContext *_localctx = _tracker.createInstance<IfStmtContext>(_ctx, getState());
  enterRule(_localctx, 20, hawkParser::RuleIfStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(120);
    ifBlock();
    setState(124);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(121);
        elifBlock(); 
      }
      setState(126);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
    setState(128);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(127);
      elseBlock();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfBlockContext ------------------------------------------------------------------

hawkParser::IfBlockContext::IfBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hawkParser::IfBlockContext::KIF() {
  return getToken(hawkParser::KIF, 0);
}

tree::TerminalNode* hawkParser::IfBlockContext::LPAREN() {
  return getToken(hawkParser::LPAREN, 0);
}

hawkParser::ExprContext* hawkParser::IfBlockContext::expr() {
  return getRuleContext<hawkParser::ExprContext>(0);
}

tree::TerminalNode* hawkParser::IfBlockContext::RPAREN() {
  return getToken(hawkParser::RPAREN, 0);
}

tree::TerminalNode* hawkParser::IfBlockContext::LBRACE() {
  return getToken(hawkParser::LBRACE, 0);
}

tree::TerminalNode* hawkParser::IfBlockContext::RBRACE() {
  return getToken(hawkParser::RBRACE, 0);
}

std::vector<hawkParser::StmtContext *> hawkParser::IfBlockContext::stmt() {
  return getRuleContexts<hawkParser::StmtContext>();
}

hawkParser::StmtContext* hawkParser::IfBlockContext::stmt(size_t i) {
  return getRuleContext<hawkParser::StmtContext>(i);
}


size_t hawkParser::IfBlockContext::getRuleIndex() const {
  return hawkParser::RuleIfBlock;
}


std::any hawkParser::IfBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hawkParserVisitor*>(visitor))
    return parserVisitor->visitIfBlock(this);
  else
    return visitor->visitChildren(this);
}

hawkParser::IfBlockContext* hawkParser::ifBlock() {
  IfBlockContext *_localctx = _tracker.createInstance<IfBlockContext>(_ctx, getState());
  enterRule(_localctx, 22, hawkParser::RuleIfBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(149);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(130);
      match(hawkParser::KIF);
      setState(131);
      match(hawkParser::LPAREN);
      setState(132);
      expr(0);
      setState(133);
      match(hawkParser::RPAREN);
      setState(134);
      match(hawkParser::LBRACE);
      setState(138);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 2141298895224862) != 0)) {
        setState(135);
        stmt();
        setState(140);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(141);
      match(hawkParser::RBRACE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(143);
      match(hawkParser::KIF);
      setState(144);
      match(hawkParser::LPAREN);
      setState(145);
      expr(0);
      setState(146);
      match(hawkParser::RPAREN);
      setState(147);
      stmt();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElifBlockContext ------------------------------------------------------------------

hawkParser::ElifBlockContext::ElifBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hawkParser::ElifBlockContext::KELSE() {
  return getToken(hawkParser::KELSE, 0);
}

tree::TerminalNode* hawkParser::ElifBlockContext::KIF() {
  return getToken(hawkParser::KIF, 0);
}

tree::TerminalNode* hawkParser::ElifBlockContext::LPAREN() {
  return getToken(hawkParser::LPAREN, 0);
}

hawkParser::ExprContext* hawkParser::ElifBlockContext::expr() {
  return getRuleContext<hawkParser::ExprContext>(0);
}

tree::TerminalNode* hawkParser::ElifBlockContext::RPAREN() {
  return getToken(hawkParser::RPAREN, 0);
}

tree::TerminalNode* hawkParser::ElifBlockContext::LBRACE() {
  return getToken(hawkParser::LBRACE, 0);
}

tree::TerminalNode* hawkParser::ElifBlockContext::RBRACE() {
  return getToken(hawkParser::RBRACE, 0);
}

std::vector<hawkParser::StmtContext *> hawkParser::ElifBlockContext::stmt() {
  return getRuleContexts<hawkParser::StmtContext>();
}

hawkParser::StmtContext* hawkParser::ElifBlockContext::stmt(size_t i) {
  return getRuleContext<hawkParser::StmtContext>(i);
}


size_t hawkParser::ElifBlockContext::getRuleIndex() const {
  return hawkParser::RuleElifBlock;
}


std::any hawkParser::ElifBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hawkParserVisitor*>(visitor))
    return parserVisitor->visitElifBlock(this);
  else
    return visitor->visitChildren(this);
}

hawkParser::ElifBlockContext* hawkParser::elifBlock() {
  ElifBlockContext *_localctx = _tracker.createInstance<ElifBlockContext>(_ctx, getState());
  enterRule(_localctx, 24, hawkParser::RuleElifBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(172);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(151);
      match(hawkParser::KELSE);
      setState(152);
      match(hawkParser::KIF);
      setState(153);
      match(hawkParser::LPAREN);
      setState(154);
      expr(0);
      setState(155);
      match(hawkParser::RPAREN);
      setState(156);
      match(hawkParser::LBRACE);
      setState(160);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 2141298895224862) != 0)) {
        setState(157);
        stmt();
        setState(162);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(163);
      match(hawkParser::RBRACE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(165);
      match(hawkParser::KELSE);
      setState(166);
      match(hawkParser::KIF);
      setState(167);
      match(hawkParser::LPAREN);
      setState(168);
      expr(0);
      setState(169);
      match(hawkParser::RPAREN);
      setState(170);
      stmt();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseBlockContext ------------------------------------------------------------------

hawkParser::ElseBlockContext::ElseBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hawkParser::ElseBlockContext::KELSE() {
  return getToken(hawkParser::KELSE, 0);
}

tree::TerminalNode* hawkParser::ElseBlockContext::LBRACE() {
  return getToken(hawkParser::LBRACE, 0);
}

tree::TerminalNode* hawkParser::ElseBlockContext::RBRACE() {
  return getToken(hawkParser::RBRACE, 0);
}

std::vector<hawkParser::StmtContext *> hawkParser::ElseBlockContext::stmt() {
  return getRuleContexts<hawkParser::StmtContext>();
}

hawkParser::StmtContext* hawkParser::ElseBlockContext::stmt(size_t i) {
  return getRuleContext<hawkParser::StmtContext>(i);
}


size_t hawkParser::ElseBlockContext::getRuleIndex() const {
  return hawkParser::RuleElseBlock;
}


std::any hawkParser::ElseBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hawkParserVisitor*>(visitor))
    return parserVisitor->visitElseBlock(this);
  else
    return visitor->visitChildren(this);
}

hawkParser::ElseBlockContext* hawkParser::elseBlock() {
  ElseBlockContext *_localctx = _tracker.createInstance<ElseBlockContext>(_ctx, getState());
  enterRule(_localctx, 26, hawkParser::RuleElseBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(185);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(174);
      match(hawkParser::KELSE);
      setState(175);
      match(hawkParser::LBRACE);
      setState(179);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 2141298895224862) != 0)) {
        setState(176);
        stmt();
        setState(181);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(182);
      match(hawkParser::RBRACE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(183);
      match(hawkParser::KELSE);
      setState(184);
      stmt();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStmtContext ------------------------------------------------------------------

hawkParser::WhileStmtContext::WhileStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hawkParser::WhileStmtContext::KWHILE() {
  return getToken(hawkParser::KWHILE, 0);
}

tree::TerminalNode* hawkParser::WhileStmtContext::LPAREN() {
  return getToken(hawkParser::LPAREN, 0);
}

hawkParser::ExprContext* hawkParser::WhileStmtContext::expr() {
  return getRuleContext<hawkParser::ExprContext>(0);
}

tree::TerminalNode* hawkParser::WhileStmtContext::RPAREN() {
  return getToken(hawkParser::RPAREN, 0);
}

tree::TerminalNode* hawkParser::WhileStmtContext::LBRACE() {
  return getToken(hawkParser::LBRACE, 0);
}

tree::TerminalNode* hawkParser::WhileStmtContext::RBRACE() {
  return getToken(hawkParser::RBRACE, 0);
}

std::vector<hawkParser::StmtContext *> hawkParser::WhileStmtContext::stmt() {
  return getRuleContexts<hawkParser::StmtContext>();
}

hawkParser::StmtContext* hawkParser::WhileStmtContext::stmt(size_t i) {
  return getRuleContext<hawkParser::StmtContext>(i);
}


size_t hawkParser::WhileStmtContext::getRuleIndex() const {
  return hawkParser::RuleWhileStmt;
}


std::any hawkParser::WhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hawkParserVisitor*>(visitor))
    return parserVisitor->visitWhileStmt(this);
  else
    return visitor->visitChildren(this);
}

hawkParser::WhileStmtContext* hawkParser::whileStmt() {
  WhileStmtContext *_localctx = _tracker.createInstance<WhileStmtContext>(_ctx, getState());
  enterRule(_localctx, 28, hawkParser::RuleWhileStmt);
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
    setState(187);
    match(hawkParser::KWHILE);
    setState(188);
    match(hawkParser::LPAREN);
    setState(189);
    expr(0);
    setState(190);
    match(hawkParser::RPAREN);
    setState(191);
    match(hawkParser::LBRACE);
    setState(195);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2141298895224862) != 0)) {
      setState(192);
      stmt();
      setState(197);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(198);
    match(hawkParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForRangeContext ------------------------------------------------------------------

hawkParser::ForRangeContext::ForRangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hawkParser::ForRangeContext::KFOR() {
  return getToken(hawkParser::KFOR, 0);
}

tree::TerminalNode* hawkParser::ForRangeContext::LPAREN() {
  return getToken(hawkParser::LPAREN, 0);
}

std::vector<tree::TerminalNode *> hawkParser::ForRangeContext::SEMICOLON() {
  return getTokens(hawkParser::SEMICOLON);
}

tree::TerminalNode* hawkParser::ForRangeContext::SEMICOLON(size_t i) {
  return getToken(hawkParser::SEMICOLON, i);
}

tree::TerminalNode* hawkParser::ForRangeContext::RPAREN() {
  return getToken(hawkParser::RPAREN, 0);
}

tree::TerminalNode* hawkParser::ForRangeContext::LBRACE() {
  return getToken(hawkParser::LBRACE, 0);
}

tree::TerminalNode* hawkParser::ForRangeContext::RBRACE() {
  return getToken(hawkParser::RBRACE, 0);
}

std::vector<hawkParser::TrueStmtContext *> hawkParser::ForRangeContext::trueStmt() {
  return getRuleContexts<hawkParser::TrueStmtContext>();
}

hawkParser::TrueStmtContext* hawkParser::ForRangeContext::trueStmt(size_t i) {
  return getRuleContext<hawkParser::TrueStmtContext>(i);
}

hawkParser::ExprContext* hawkParser::ForRangeContext::expr() {
  return getRuleContext<hawkParser::ExprContext>(0);
}

std::vector<hawkParser::StmtContext *> hawkParser::ForRangeContext::stmt() {
  return getRuleContexts<hawkParser::StmtContext>();
}

hawkParser::StmtContext* hawkParser::ForRangeContext::stmt(size_t i) {
  return getRuleContext<hawkParser::StmtContext>(i);
}


size_t hawkParser::ForRangeContext::getRuleIndex() const {
  return hawkParser::RuleForRange;
}


std::any hawkParser::ForRangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hawkParserVisitor*>(visitor))
    return parserVisitor->visitForRange(this);
  else
    return visitor->visitChildren(this);
}

hawkParser::ForRangeContext* hawkParser::forRange() {
  ForRangeContext *_localctx = _tracker.createInstance<ForRangeContext>(_ctx, getState());
  enterRule(_localctx, 30, hawkParser::RuleForRange);
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
    setState(200);
    match(hawkParser::KFOR);
    setState(201);
    match(hawkParser::LPAREN);
    setState(202);
    antlrcpp::downCast<ForRangeContext *>(_localctx)->init = trueStmt();
    setState(203);
    match(hawkParser::SEMICOLON);
    setState(204);
    antlrcpp::downCast<ForRangeContext *>(_localctx)->test = expr(0);
    setState(205);
    match(hawkParser::SEMICOLON);
    setState(206);
    antlrcpp::downCast<ForRangeContext *>(_localctx)->inc = trueStmt();
    setState(207);
    match(hawkParser::RPAREN);
    setState(208);
    match(hawkParser::LBRACE);
    setState(212);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2141298895224862) != 0)) {
      setState(209);
      stmt();
      setState(214);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(215);
    match(hawkParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool hawkParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 8: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool hawkParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

void hawkParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  hawkparserParserInitialize();
#else
  ::antlr4::internal::call_once(hawkparserParserOnceFlag, hawkparserParserInitialize);
#endif
}
