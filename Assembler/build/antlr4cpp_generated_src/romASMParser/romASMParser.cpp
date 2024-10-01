
// Generated from romASMParser.g4 by ANTLR 4.13.2


#include "romASMParserListener.h"

#include "romASMParser.h"


using namespace antlrcpp;
using namespace romASM;

using namespace antlr4;

namespace {

struct RomASMParserStaticData final {
  RomASMParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  RomASMParserStaticData(const RomASMParserStaticData&) = delete;
  RomASMParserStaticData(RomASMParserStaticData&&) = delete;
  RomASMParserStaticData& operator=(const RomASMParserStaticData&) = delete;
  RomASMParserStaticData& operator=(RomASMParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag romasmparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<RomASMParserStaticData> romasmparserParserStaticData = nullptr;

void romasmparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (romasmparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(romasmparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<RomASMParserStaticData>(
    std::vector<std::string>{
      "program", "expr"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "','"
    },
    std::vector<std::string>{
      "", "MOV", "STR", "LDA", "OR", "INV", "AND", "XOR", "ADD", "SUB", 
      "NOT", "SHR", "SHL", "PUSH", "CALL", "POP", "RET", "JMP", "JEZ", "JNZ", 
      "JGZ", "JLZ", "COMMA", "LABELID", "LABEL", "COMMENT", "IMM", "HEX", 
      "REG", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,29,178,2,0,7,0,2,1,7,1,1,0,5,0,6,8,0,10,0,12,0,9,9,0,1,0,1,0,1,1,
  	1,1,1,1,3,1,16,8,1,1,1,1,1,1,1,1,1,3,1,22,8,1,1,1,1,1,1,1,1,1,3,1,28,
  	8,1,1,1,1,1,1,1,1,1,3,1,34,8,1,1,1,1,1,1,1,1,1,3,1,40,8,1,1,1,1,1,1,1,
  	1,1,3,1,46,8,1,1,1,1,1,1,1,1,1,3,1,52,8,1,1,1,1,1,3,1,56,8,1,1,1,3,1,
  	59,8,1,1,1,1,1,1,1,3,1,64,8,1,1,1,3,1,67,8,1,1,1,1,1,1,1,3,1,72,8,1,1,
  	1,1,1,3,1,76,8,1,1,1,3,1,79,8,1,1,1,1,1,1,1,3,1,84,8,1,1,1,1,1,3,1,88,
  	8,1,1,1,3,1,91,8,1,1,1,1,1,1,1,3,1,96,8,1,1,1,1,1,3,1,100,8,1,1,1,3,1,
  	103,8,1,1,1,1,1,1,1,3,1,108,8,1,1,1,1,1,3,1,112,8,1,1,1,3,1,115,8,1,1,
  	1,1,1,1,1,3,1,120,8,1,1,1,3,1,123,8,1,1,1,1,1,1,1,3,1,128,8,1,1,1,3,1,
  	131,8,1,1,1,1,1,1,1,3,1,136,8,1,1,1,3,1,139,8,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,153,8,1,1,1,1,1,1,1,1,1,3,1,159,8,1,1,1,
  	1,1,1,1,1,1,3,1,165,8,1,1,1,1,1,1,1,1,1,3,1,171,8,1,1,1,1,1,1,1,3,1,176,
  	8,1,1,1,0,0,2,0,2,0,0,234,0,7,1,0,0,0,2,175,1,0,0,0,4,6,3,2,1,0,5,4,1,
  	0,0,0,6,9,1,0,0,0,7,5,1,0,0,0,7,8,1,0,0,0,8,10,1,0,0,0,9,7,1,0,0,0,10,
  	11,5,0,0,1,11,1,1,0,0,0,12,13,5,1,0,0,13,15,5,28,0,0,14,16,5,22,0,0,15,
  	14,1,0,0,0,15,16,1,0,0,0,16,17,1,0,0,0,17,176,5,28,0,0,18,19,5,1,0,0,
  	19,21,5,23,0,0,20,22,5,22,0,0,21,20,1,0,0,0,21,22,1,0,0,0,22,23,1,0,0,
  	0,23,176,5,28,0,0,24,25,5,1,0,0,25,27,5,26,0,0,26,28,5,22,0,0,27,26,1,
  	0,0,0,27,28,1,0,0,0,28,29,1,0,0,0,29,176,5,28,0,0,30,31,5,1,0,0,31,33,
  	5,27,0,0,32,34,5,22,0,0,33,32,1,0,0,0,33,34,1,0,0,0,34,35,1,0,0,0,35,
  	176,5,28,0,0,36,37,5,2,0,0,37,39,5,28,0,0,38,40,5,22,0,0,39,38,1,0,0,
  	0,39,40,1,0,0,0,40,41,1,0,0,0,41,176,5,28,0,0,42,43,5,3,0,0,43,45,5,28,
  	0,0,44,46,5,22,0,0,45,44,1,0,0,0,45,46,1,0,0,0,46,47,1,0,0,0,47,176,5,
  	28,0,0,48,49,5,4,0,0,49,51,5,28,0,0,50,52,5,22,0,0,51,50,1,0,0,0,51,52,
  	1,0,0,0,52,53,1,0,0,0,53,58,5,28,0,0,54,56,5,22,0,0,55,54,1,0,0,0,55,
  	56,1,0,0,0,56,57,1,0,0,0,57,59,5,28,0,0,58,55,1,0,0,0,58,59,1,0,0,0,59,
  	176,1,0,0,0,60,61,5,5,0,0,61,66,5,28,0,0,62,64,5,22,0,0,63,62,1,0,0,0,
  	63,64,1,0,0,0,64,65,1,0,0,0,65,67,5,28,0,0,66,63,1,0,0,0,66,67,1,0,0,
  	0,67,176,1,0,0,0,68,69,5,6,0,0,69,71,5,28,0,0,70,72,5,22,0,0,71,70,1,
  	0,0,0,71,72,1,0,0,0,72,73,1,0,0,0,73,78,5,28,0,0,74,76,5,22,0,0,75,74,
  	1,0,0,0,75,76,1,0,0,0,76,77,1,0,0,0,77,79,5,28,0,0,78,75,1,0,0,0,78,79,
  	1,0,0,0,79,176,1,0,0,0,80,81,5,7,0,0,81,83,5,28,0,0,82,84,5,22,0,0,83,
  	82,1,0,0,0,83,84,1,0,0,0,84,85,1,0,0,0,85,90,5,28,0,0,86,88,5,22,0,0,
  	87,86,1,0,0,0,87,88,1,0,0,0,88,89,1,0,0,0,89,91,5,28,0,0,90,87,1,0,0,
  	0,90,91,1,0,0,0,91,176,1,0,0,0,92,93,5,8,0,0,93,95,5,28,0,0,94,96,5,22,
  	0,0,95,94,1,0,0,0,95,96,1,0,0,0,96,97,1,0,0,0,97,102,5,28,0,0,98,100,
  	5,22,0,0,99,98,1,0,0,0,99,100,1,0,0,0,100,101,1,0,0,0,101,103,5,28,0,
  	0,102,99,1,0,0,0,102,103,1,0,0,0,103,176,1,0,0,0,104,105,5,9,0,0,105,
  	107,5,28,0,0,106,108,5,22,0,0,107,106,1,0,0,0,107,108,1,0,0,0,108,109,
  	1,0,0,0,109,114,5,28,0,0,110,112,5,22,0,0,111,110,1,0,0,0,111,112,1,0,
  	0,0,112,113,1,0,0,0,113,115,5,28,0,0,114,111,1,0,0,0,114,115,1,0,0,0,
  	115,176,1,0,0,0,116,117,5,10,0,0,117,122,5,28,0,0,118,120,5,22,0,0,119,
  	118,1,0,0,0,119,120,1,0,0,0,120,121,1,0,0,0,121,123,5,28,0,0,122,119,
  	1,0,0,0,122,123,1,0,0,0,123,176,1,0,0,0,124,125,5,11,0,0,125,130,5,28,
  	0,0,126,128,5,22,0,0,127,126,1,0,0,0,127,128,1,0,0,0,128,129,1,0,0,0,
  	129,131,5,28,0,0,130,127,1,0,0,0,130,131,1,0,0,0,131,176,1,0,0,0,132,
  	133,5,12,0,0,133,138,5,28,0,0,134,136,5,22,0,0,135,134,1,0,0,0,135,136,
  	1,0,0,0,136,137,1,0,0,0,137,139,5,28,0,0,138,135,1,0,0,0,138,139,1,0,
  	0,0,139,176,1,0,0,0,140,141,5,13,0,0,141,176,5,28,0,0,142,143,5,14,0,
  	0,143,176,5,28,0,0,144,145,5,15,0,0,145,176,5,28,0,0,146,176,5,16,0,0,
  	147,148,5,17,0,0,148,176,5,28,0,0,149,150,5,18,0,0,150,152,5,28,0,0,151,
  	153,5,22,0,0,152,151,1,0,0,0,152,153,1,0,0,0,153,154,1,0,0,0,154,176,
  	5,28,0,0,155,156,5,19,0,0,156,158,5,28,0,0,157,159,5,22,0,0,158,157,1,
  	0,0,0,158,159,1,0,0,0,159,160,1,0,0,0,160,176,5,28,0,0,161,162,5,20,0,
  	0,162,164,5,28,0,0,163,165,5,22,0,0,164,163,1,0,0,0,164,165,1,0,0,0,165,
  	166,1,0,0,0,166,176,5,28,0,0,167,168,5,21,0,0,168,170,5,28,0,0,169,171,
  	5,22,0,0,170,169,1,0,0,0,170,171,1,0,0,0,171,172,1,0,0,0,172,176,5,28,
  	0,0,173,176,5,25,0,0,174,176,5,24,0,0,175,12,1,0,0,0,175,18,1,0,0,0,175,
  	24,1,0,0,0,175,30,1,0,0,0,175,36,1,0,0,0,175,42,1,0,0,0,175,48,1,0,0,
  	0,175,60,1,0,0,0,175,68,1,0,0,0,175,80,1,0,0,0,175,92,1,0,0,0,175,104,
  	1,0,0,0,175,116,1,0,0,0,175,124,1,0,0,0,175,132,1,0,0,0,175,140,1,0,0,
  	0,175,142,1,0,0,0,175,144,1,0,0,0,175,146,1,0,0,0,175,147,1,0,0,0,175,
  	149,1,0,0,0,175,155,1,0,0,0,175,161,1,0,0,0,175,167,1,0,0,0,175,173,1,
  	0,0,0,175,174,1,0,0,0,176,3,1,0,0,0,35,7,15,21,27,33,39,45,51,55,58,63,
  	66,71,75,78,83,87,90,95,99,102,107,111,114,119,122,127,130,135,138,152,
  	158,164,170,175
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  romasmparserParserStaticData = std::move(staticData);
}

}

romASMParser::romASMParser(TokenStream *input) : romASMParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

romASMParser::romASMParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  romASMParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *romasmparserParserStaticData->atn, romasmparserParserStaticData->decisionToDFA, romasmparserParserStaticData->sharedContextCache, options);
}

romASMParser::~romASMParser() {
  delete _interpreter;
}

const atn::ATN& romASMParser::getATN() const {
  return *romasmparserParserStaticData->atn;
}

std::string romASMParser::getGrammarFileName() const {
  return "romASMParser.g4";
}

const std::vector<std::string>& romASMParser::getRuleNames() const {
  return romasmparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& romASMParser::getVocabulary() const {
  return romasmparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView romASMParser::getSerializedATN() const {
  return romasmparserParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

romASMParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* romASMParser::ProgramContext::EOF() {
  return getToken(romASMParser::EOF, 0);
}

std::vector<romASMParser::ExprContext *> romASMParser::ProgramContext::expr() {
  return getRuleContexts<romASMParser::ExprContext>();
}

romASMParser::ExprContext* romASMParser::ProgramContext::expr(size_t i) {
  return getRuleContext<romASMParser::ExprContext>(i);
}


size_t romASMParser::ProgramContext::getRuleIndex() const {
  return romASMParser::RuleProgram;
}

void romASMParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<romASMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void romASMParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<romASMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

romASMParser::ProgramContext* romASMParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, romASMParser::RuleProgram);
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
    setState(7);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 54525950) != 0)) {
      setState(4);
      expr();
      setState(9);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(10);
    match(romASMParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

romASMParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* romASMParser::ExprContext::MOV() {
  return getToken(romASMParser::MOV, 0);
}

std::vector<tree::TerminalNode *> romASMParser::ExprContext::REG() {
  return getTokens(romASMParser::REG);
}

tree::TerminalNode* romASMParser::ExprContext::REG(size_t i) {
  return getToken(romASMParser::REG, i);
}

std::vector<tree::TerminalNode *> romASMParser::ExprContext::COMMA() {
  return getTokens(romASMParser::COMMA);
}

tree::TerminalNode* romASMParser::ExprContext::COMMA(size_t i) {
  return getToken(romASMParser::COMMA, i);
}

tree::TerminalNode* romASMParser::ExprContext::LABELID() {
  return getToken(romASMParser::LABELID, 0);
}

tree::TerminalNode* romASMParser::ExprContext::IMM() {
  return getToken(romASMParser::IMM, 0);
}

tree::TerminalNode* romASMParser::ExprContext::HEX() {
  return getToken(romASMParser::HEX, 0);
}

tree::TerminalNode* romASMParser::ExprContext::STR() {
  return getToken(romASMParser::STR, 0);
}

tree::TerminalNode* romASMParser::ExprContext::LDA() {
  return getToken(romASMParser::LDA, 0);
}

tree::TerminalNode* romASMParser::ExprContext::OR() {
  return getToken(romASMParser::OR, 0);
}

tree::TerminalNode* romASMParser::ExprContext::INV() {
  return getToken(romASMParser::INV, 0);
}

tree::TerminalNode* romASMParser::ExprContext::AND() {
  return getToken(romASMParser::AND, 0);
}

tree::TerminalNode* romASMParser::ExprContext::XOR() {
  return getToken(romASMParser::XOR, 0);
}

tree::TerminalNode* romASMParser::ExprContext::ADD() {
  return getToken(romASMParser::ADD, 0);
}

tree::TerminalNode* romASMParser::ExprContext::SUB() {
  return getToken(romASMParser::SUB, 0);
}

tree::TerminalNode* romASMParser::ExprContext::NOT() {
  return getToken(romASMParser::NOT, 0);
}

tree::TerminalNode* romASMParser::ExprContext::SHR() {
  return getToken(romASMParser::SHR, 0);
}

tree::TerminalNode* romASMParser::ExprContext::SHL() {
  return getToken(romASMParser::SHL, 0);
}

tree::TerminalNode* romASMParser::ExprContext::PUSH() {
  return getToken(romASMParser::PUSH, 0);
}

tree::TerminalNode* romASMParser::ExprContext::CALL() {
  return getToken(romASMParser::CALL, 0);
}

tree::TerminalNode* romASMParser::ExprContext::POP() {
  return getToken(romASMParser::POP, 0);
}

tree::TerminalNode* romASMParser::ExprContext::RET() {
  return getToken(romASMParser::RET, 0);
}

tree::TerminalNode* romASMParser::ExprContext::JMP() {
  return getToken(romASMParser::JMP, 0);
}

tree::TerminalNode* romASMParser::ExprContext::JEZ() {
  return getToken(romASMParser::JEZ, 0);
}

tree::TerminalNode* romASMParser::ExprContext::JNZ() {
  return getToken(romASMParser::JNZ, 0);
}

tree::TerminalNode* romASMParser::ExprContext::JGZ() {
  return getToken(romASMParser::JGZ, 0);
}

tree::TerminalNode* romASMParser::ExprContext::JLZ() {
  return getToken(romASMParser::JLZ, 0);
}

tree::TerminalNode* romASMParser::ExprContext::COMMENT() {
  return getToken(romASMParser::COMMENT, 0);
}

tree::TerminalNode* romASMParser::ExprContext::LABEL() {
  return getToken(romASMParser::LABEL, 0);
}


size_t romASMParser::ExprContext::getRuleIndex() const {
  return romASMParser::RuleExpr;
}

void romASMParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<romASMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void romASMParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<romASMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}

romASMParser::ExprContext* romASMParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 2, romASMParser::RuleExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(175);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(12);
      match(romASMParser::MOV);
      setState(13);
      match(romASMParser::REG);
      setState(15);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(14);
        match(romASMParser::COMMA);
      }
      setState(17);
      match(romASMParser::REG);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(18);
      match(romASMParser::MOV);
      setState(19);
      match(romASMParser::LABELID);
      setState(21);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(20);
        match(romASMParser::COMMA);
      }
      setState(23);
      match(romASMParser::REG);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(24);
      match(romASMParser::MOV);
      setState(25);
      match(romASMParser::IMM);
      setState(27);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(26);
        match(romASMParser::COMMA);
      }
      setState(29);
      match(romASMParser::REG);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(30);
      match(romASMParser::MOV);
      setState(31);
      match(romASMParser::HEX);
      setState(33);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(32);
        match(romASMParser::COMMA);
      }
      setState(35);
      match(romASMParser::REG);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(36);
      match(romASMParser::STR);
      setState(37);
      match(romASMParser::REG);
      setState(39);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(38);
        match(romASMParser::COMMA);
      }
      setState(41);
      match(romASMParser::REG);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(42);
      match(romASMParser::LDA);
      setState(43);
      match(romASMParser::REG);
      setState(45);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(44);
        match(romASMParser::COMMA);
      }
      setState(47);
      match(romASMParser::REG);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(48);
      match(romASMParser::OR);
      setState(49);
      match(romASMParser::REG);
      setState(51);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(50);
        match(romASMParser::COMMA);
      }
      setState(53);
      match(romASMParser::REG);
      setState(58);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA

      || _la == romASMParser::REG) {
        setState(55);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == romASMParser::COMMA) {
          setState(54);
          match(romASMParser::COMMA);
        }
        setState(57);
        match(romASMParser::REG);
      }
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(60);
      match(romASMParser::INV);
      setState(61);
      match(romASMParser::REG);
      setState(66);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA

      || _la == romASMParser::REG) {
        setState(63);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == romASMParser::COMMA) {
          setState(62);
          match(romASMParser::COMMA);
        }
        setState(65);
        match(romASMParser::REG);
      }
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(68);
      match(romASMParser::AND);
      setState(69);
      match(romASMParser::REG);
      setState(71);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(70);
        match(romASMParser::COMMA);
      }
      setState(73);
      match(romASMParser::REG);
      setState(78);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA

      || _la == romASMParser::REG) {
        setState(75);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == romASMParser::COMMA) {
          setState(74);
          match(romASMParser::COMMA);
        }
        setState(77);
        match(romASMParser::REG);
      }
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(80);
      match(romASMParser::XOR);
      setState(81);
      match(romASMParser::REG);
      setState(83);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(82);
        match(romASMParser::COMMA);
      }
      setState(85);
      match(romASMParser::REG);
      setState(90);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA

      || _la == romASMParser::REG) {
        setState(87);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == romASMParser::COMMA) {
          setState(86);
          match(romASMParser::COMMA);
        }
        setState(89);
        match(romASMParser::REG);
      }
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(92);
      match(romASMParser::ADD);
      setState(93);
      match(romASMParser::REG);
      setState(95);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(94);
        match(romASMParser::COMMA);
      }
      setState(97);
      match(romASMParser::REG);
      setState(102);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA

      || _la == romASMParser::REG) {
        setState(99);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == romASMParser::COMMA) {
          setState(98);
          match(romASMParser::COMMA);
        }
        setState(101);
        match(romASMParser::REG);
      }
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(104);
      match(romASMParser::SUB);
      setState(105);
      match(romASMParser::REG);
      setState(107);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(106);
        match(romASMParser::COMMA);
      }
      setState(109);
      match(romASMParser::REG);
      setState(114);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA

      || _la == romASMParser::REG) {
        setState(111);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == romASMParser::COMMA) {
          setState(110);
          match(romASMParser::COMMA);
        }
        setState(113);
        match(romASMParser::REG);
      }
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(116);
      match(romASMParser::NOT);
      setState(117);
      match(romASMParser::REG);
      setState(122);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA

      || _la == romASMParser::REG) {
        setState(119);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == romASMParser::COMMA) {
          setState(118);
          match(romASMParser::COMMA);
        }
        setState(121);
        match(romASMParser::REG);
      }
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(124);
      match(romASMParser::SHR);
      setState(125);
      match(romASMParser::REG);
      setState(130);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA

      || _la == romASMParser::REG) {
        setState(127);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == romASMParser::COMMA) {
          setState(126);
          match(romASMParser::COMMA);
        }
        setState(129);
        match(romASMParser::REG);
      }
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(132);
      match(romASMParser::SHL);
      setState(133);
      match(romASMParser::REG);
      setState(138);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA

      || _la == romASMParser::REG) {
        setState(135);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == romASMParser::COMMA) {
          setState(134);
          match(romASMParser::COMMA);
        }
        setState(137);
        match(romASMParser::REG);
      }
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(140);
      match(romASMParser::PUSH);
      setState(141);
      match(romASMParser::REG);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(142);
      match(romASMParser::CALL);
      setState(143);
      match(romASMParser::REG);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(144);
      match(romASMParser::POP);
      setState(145);
      match(romASMParser::REG);
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(146);
      match(romASMParser::RET);
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(147);
      match(romASMParser::JMP);
      setState(148);
      match(romASMParser::REG);
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(149);
      match(romASMParser::JEZ);
      setState(150);
      match(romASMParser::REG);
      setState(152);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(151);
        match(romASMParser::COMMA);
      }
      setState(154);
      match(romASMParser::REG);
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(155);
      match(romASMParser::JNZ);
      setState(156);
      match(romASMParser::REG);
      setState(158);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(157);
        match(romASMParser::COMMA);
      }
      setState(160);
      match(romASMParser::REG);
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(161);
      match(romASMParser::JGZ);
      setState(162);
      match(romASMParser::REG);
      setState(164);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(163);
        match(romASMParser::COMMA);
      }
      setState(166);
      match(romASMParser::REG);
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(167);
      match(romASMParser::JLZ);
      setState(168);
      match(romASMParser::REG);
      setState(170);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(169);
        match(romASMParser::COMMA);
      }
      setState(172);
      match(romASMParser::REG);
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(173);
      match(romASMParser::COMMENT);
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(174);
      match(romASMParser::LABEL);
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

void romASMParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  romasmparserParserInitialize();
#else
  ::antlr4::internal::call_once(romasmparserParserOnceFlag, romasmparserParserInitialize);
#endif
}
