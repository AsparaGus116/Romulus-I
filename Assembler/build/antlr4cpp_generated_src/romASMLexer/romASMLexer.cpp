
// Generated from romASMLexer.g4 by ANTLR 4.13.2


#include "romASMLexer.h"


using namespace antlr4;

using namespace romASM;


using namespace antlr4;

namespace {

struct RomASMLexerStaticData final {
  RomASMLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  RomASMLexerStaticData(const RomASMLexerStaticData&) = delete;
  RomASMLexerStaticData(RomASMLexerStaticData&&) = delete;
  RomASMLexerStaticData& operator=(const RomASMLexerStaticData&) = delete;
  RomASMLexerStaticData& operator=(RomASMLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag romasmlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<RomASMLexerStaticData> romasmlexerLexerStaticData = nullptr;

void romasmlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (romasmlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(romasmlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<RomASMLexerStaticData>(
    std::vector<std::string>{
      "MOV", "STR", "LDA", "OR", "INV", "AND", "XOR", "ADD", "SUB", "NOT", 
      "SHR", "SHL", "PUSH", "CALL", "POP", "RET", "JMP", "JEZ", "JNZ", "JGZ", 
      "JLZ", "LABEL", "COMMA", "COMMENT", "IMM", "HEX", "REG", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "','"
    },
    std::vector<std::string>{
      "", "MOV", "STR", "LDA", "OR", "INV", "AND", "XOR", "ADD", "SUB", 
      "NOT", "SHR", "SHL", "PUSH", "CALL", "POP", "RET", "JMP", "JEZ", "JNZ", 
      "JGZ", "JLZ", "LABEL", "COMMA", "COMMENT", "IMM", "HEX", "REG", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,28,278,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,1,0,
  	1,0,1,0,1,0,1,0,1,0,3,0,64,8,0,1,1,1,1,1,1,1,1,1,1,1,1,3,1,72,8,1,1,2,
  	1,2,1,2,1,2,1,2,1,2,3,2,80,8,2,1,3,1,3,1,3,1,3,3,3,86,8,3,1,4,1,4,1,4,
  	1,4,1,4,1,4,3,4,94,8,4,1,5,1,5,1,5,1,5,1,5,1,5,3,5,102,8,5,1,6,1,6,1,
  	6,1,6,1,6,1,6,3,6,110,8,6,1,7,1,7,1,7,1,7,1,7,1,7,3,7,118,8,7,1,8,1,8,
  	1,8,1,8,1,8,1,8,3,8,126,8,8,1,9,1,9,1,9,1,9,1,9,1,9,3,9,134,8,9,1,10,
  	1,10,1,10,1,10,1,10,1,10,3,10,142,8,10,1,11,1,11,1,11,1,11,1,11,1,11,
  	3,11,150,8,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,160,8,12,1,
  	13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,3,13,170,8,13,1,14,1,14,1,14,1,
  	14,1,14,1,14,3,14,178,8,14,1,15,1,15,1,15,1,15,1,15,1,15,3,15,186,8,15,
  	1,16,1,16,1,16,1,16,1,16,1,16,3,16,194,8,16,1,17,1,17,1,17,1,17,1,17,
  	1,17,3,17,202,8,17,1,18,1,18,1,18,1,18,1,18,1,18,3,18,210,8,18,1,19,1,
  	19,1,19,1,19,1,19,1,19,3,19,218,8,19,1,20,1,20,1,20,1,20,1,20,1,20,3,
  	20,226,8,20,1,21,4,21,229,8,21,11,21,12,21,230,1,21,1,21,1,22,1,22,1,
  	23,1,23,1,23,3,23,240,8,23,1,23,5,23,243,8,23,10,23,12,23,246,9,23,1,
  	23,3,23,249,8,23,1,23,1,23,1,24,4,24,254,8,24,11,24,12,24,255,1,25,1,
  	25,1,25,1,25,4,25,262,8,25,11,25,12,25,263,1,26,1,26,4,26,268,8,26,11,
  	26,12,26,269,1,27,4,27,273,8,27,11,27,12,27,274,1,27,1,27,2,230,244,0,
  	28,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,
  	14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,
  	51,26,53,27,55,28,1,0,6,5,0,45,45,48,58,65,90,94,95,97,122,1,1,10,10,
  	1,0,48,57,3,0,48,57,65,70,97,102,2,0,82,82,114,114,3,0,9,10,12,13,32,
  	32,305,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,
  	11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,
  	0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,
  	0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,
  	43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,
  	0,0,0,0,55,1,0,0,0,1,63,1,0,0,0,3,71,1,0,0,0,5,79,1,0,0,0,7,85,1,0,0,
  	0,9,93,1,0,0,0,11,101,1,0,0,0,13,109,1,0,0,0,15,117,1,0,0,0,17,125,1,
  	0,0,0,19,133,1,0,0,0,21,141,1,0,0,0,23,149,1,0,0,0,25,159,1,0,0,0,27,
  	169,1,0,0,0,29,177,1,0,0,0,31,185,1,0,0,0,33,193,1,0,0,0,35,201,1,0,0,
  	0,37,209,1,0,0,0,39,217,1,0,0,0,41,225,1,0,0,0,43,228,1,0,0,0,45,234,
  	1,0,0,0,47,239,1,0,0,0,49,253,1,0,0,0,51,257,1,0,0,0,53,265,1,0,0,0,55,
  	272,1,0,0,0,57,58,5,109,0,0,58,59,5,111,0,0,59,64,5,118,0,0,60,61,5,77,
  	0,0,61,62,5,79,0,0,62,64,5,86,0,0,63,57,1,0,0,0,63,60,1,0,0,0,64,2,1,
  	0,0,0,65,66,5,115,0,0,66,67,5,116,0,0,67,72,5,114,0,0,68,69,5,83,0,0,
  	69,70,5,84,0,0,70,72,5,82,0,0,71,65,1,0,0,0,71,68,1,0,0,0,72,4,1,0,0,
  	0,73,74,5,108,0,0,74,75,5,100,0,0,75,80,5,97,0,0,76,77,5,76,0,0,77,78,
  	5,68,0,0,78,80,5,65,0,0,79,73,1,0,0,0,79,76,1,0,0,0,80,6,1,0,0,0,81,82,
  	5,111,0,0,82,86,5,114,0,0,83,84,5,79,0,0,84,86,5,82,0,0,85,81,1,0,0,0,
  	85,83,1,0,0,0,86,8,1,0,0,0,87,88,5,105,0,0,88,89,5,110,0,0,89,94,5,118,
  	0,0,90,91,5,73,0,0,91,92,5,78,0,0,92,94,5,86,0,0,93,87,1,0,0,0,93,90,
  	1,0,0,0,94,10,1,0,0,0,95,96,5,97,0,0,96,97,5,110,0,0,97,102,5,100,0,0,
  	98,99,5,65,0,0,99,100,5,78,0,0,100,102,5,68,0,0,101,95,1,0,0,0,101,98,
  	1,0,0,0,102,12,1,0,0,0,103,104,5,120,0,0,104,105,5,111,0,0,105,110,5,
  	114,0,0,106,107,5,88,0,0,107,108,5,79,0,0,108,110,5,82,0,0,109,103,1,
  	0,0,0,109,106,1,0,0,0,110,14,1,0,0,0,111,112,5,97,0,0,112,113,5,100,0,
  	0,113,118,5,100,0,0,114,115,5,65,0,0,115,116,5,68,0,0,116,118,5,68,0,
  	0,117,111,1,0,0,0,117,114,1,0,0,0,118,16,1,0,0,0,119,120,5,115,0,0,120,
  	121,5,117,0,0,121,126,5,98,0,0,122,123,5,83,0,0,123,124,5,85,0,0,124,
  	126,5,66,0,0,125,119,1,0,0,0,125,122,1,0,0,0,126,18,1,0,0,0,127,128,5,
  	110,0,0,128,129,5,111,0,0,129,134,5,116,0,0,130,131,5,78,0,0,131,132,
  	5,79,0,0,132,134,5,84,0,0,133,127,1,0,0,0,133,130,1,0,0,0,134,20,1,0,
  	0,0,135,136,5,115,0,0,136,137,5,104,0,0,137,142,5,114,0,0,138,139,5,83,
  	0,0,139,140,5,72,0,0,140,142,5,82,0,0,141,135,1,0,0,0,141,138,1,0,0,0,
  	142,22,1,0,0,0,143,144,5,115,0,0,144,145,5,104,0,0,145,150,5,108,0,0,
  	146,147,5,83,0,0,147,148,5,72,0,0,148,150,5,76,0,0,149,143,1,0,0,0,149,
  	146,1,0,0,0,150,24,1,0,0,0,151,152,5,112,0,0,152,153,5,117,0,0,153,154,
  	5,115,0,0,154,160,5,104,0,0,155,156,5,80,0,0,156,157,5,85,0,0,157,158,
  	5,83,0,0,158,160,5,72,0,0,159,151,1,0,0,0,159,155,1,0,0,0,160,26,1,0,
  	0,0,161,162,5,99,0,0,162,163,5,97,0,0,163,164,5,108,0,0,164,170,5,108,
  	0,0,165,166,5,67,0,0,166,167,5,65,0,0,167,168,5,76,0,0,168,170,5,76,0,
  	0,169,161,1,0,0,0,169,165,1,0,0,0,170,28,1,0,0,0,171,172,5,112,0,0,172,
  	173,5,111,0,0,173,178,5,112,0,0,174,175,5,80,0,0,175,176,5,79,0,0,176,
  	178,5,80,0,0,177,171,1,0,0,0,177,174,1,0,0,0,178,30,1,0,0,0,179,180,5,
  	114,0,0,180,181,5,101,0,0,181,186,5,116,0,0,182,183,5,82,0,0,183,184,
  	5,69,0,0,184,186,5,84,0,0,185,179,1,0,0,0,185,182,1,0,0,0,186,32,1,0,
  	0,0,187,188,5,106,0,0,188,189,5,109,0,0,189,194,5,112,0,0,190,191,5,74,
  	0,0,191,192,5,77,0,0,192,194,5,80,0,0,193,187,1,0,0,0,193,190,1,0,0,0,
  	194,34,1,0,0,0,195,196,5,106,0,0,196,197,5,101,0,0,197,202,5,122,0,0,
  	198,199,5,74,0,0,199,200,5,69,0,0,200,202,5,90,0,0,201,195,1,0,0,0,201,
  	198,1,0,0,0,202,36,1,0,0,0,203,204,5,106,0,0,204,205,5,110,0,0,205,210,
  	5,122,0,0,206,207,5,74,0,0,207,208,5,78,0,0,208,210,5,90,0,0,209,203,
  	1,0,0,0,209,206,1,0,0,0,210,38,1,0,0,0,211,212,5,106,0,0,212,213,5,103,
  	0,0,213,218,5,122,0,0,214,215,5,74,0,0,215,216,5,71,0,0,216,218,5,90,
  	0,0,217,211,1,0,0,0,217,214,1,0,0,0,218,40,1,0,0,0,219,220,5,106,0,0,
  	220,221,5,108,0,0,221,226,5,122,0,0,222,223,5,74,0,0,223,224,5,76,0,0,
  	224,226,5,90,0,0,225,219,1,0,0,0,225,222,1,0,0,0,226,42,1,0,0,0,227,229,
  	7,0,0,0,228,227,1,0,0,0,229,230,1,0,0,0,230,231,1,0,0,0,230,228,1,0,0,
  	0,231,232,1,0,0,0,232,233,5,58,0,0,233,44,1,0,0,0,234,235,5,44,0,0,235,
  	46,1,0,0,0,236,237,5,47,0,0,237,240,5,47,0,0,238,240,5,35,0,0,239,236,
  	1,0,0,0,239,238,1,0,0,0,240,244,1,0,0,0,241,243,9,0,0,0,242,241,1,0,0,
  	0,243,246,1,0,0,0,244,245,1,0,0,0,244,242,1,0,0,0,245,248,1,0,0,0,246,
  	244,1,0,0,0,247,249,7,1,0,0,248,247,1,0,0,0,249,250,1,0,0,0,250,251,6,
  	23,0,0,251,48,1,0,0,0,252,254,7,2,0,0,253,252,1,0,0,0,254,255,1,0,0,0,
  	255,253,1,0,0,0,255,256,1,0,0,0,256,50,1,0,0,0,257,258,5,48,0,0,258,259,
  	5,120,0,0,259,261,1,0,0,0,260,262,7,3,0,0,261,260,1,0,0,0,262,263,1,0,
  	0,0,263,261,1,0,0,0,263,264,1,0,0,0,264,52,1,0,0,0,265,267,7,4,0,0,266,
  	268,7,2,0,0,267,266,1,0,0,0,268,269,1,0,0,0,269,267,1,0,0,0,269,270,1,
  	0,0,0,270,54,1,0,0,0,271,273,7,5,0,0,272,271,1,0,0,0,273,274,1,0,0,0,
  	274,272,1,0,0,0,274,275,1,0,0,0,275,276,1,0,0,0,276,277,6,27,0,0,277,
  	56,1,0,0,0,30,0,63,71,79,85,93,101,109,117,125,133,141,149,159,169,177,
  	185,193,201,209,217,225,230,239,244,248,255,263,269,274,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  romasmlexerLexerStaticData = std::move(staticData);
}

}

romASMLexer::romASMLexer(CharStream *input) : Lexer(input) {
  romASMLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *romasmlexerLexerStaticData->atn, romasmlexerLexerStaticData->decisionToDFA, romasmlexerLexerStaticData->sharedContextCache);
}

romASMLexer::~romASMLexer() {
  delete _interpreter;
}

std::string romASMLexer::getGrammarFileName() const {
  return "romASMLexer.g4";
}

const std::vector<std::string>& romASMLexer::getRuleNames() const {
  return romasmlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& romASMLexer::getChannelNames() const {
  return romasmlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& romASMLexer::getModeNames() const {
  return romasmlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& romASMLexer::getVocabulary() const {
  return romasmlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView romASMLexer::getSerializedATN() const {
  return romasmlexerLexerStaticData->serializedATN;
}

const atn::ATN& romASMLexer::getATN() const {
  return *romasmlexerLexerStaticData->atn;
}




void romASMLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  romasmlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(romasmlexerLexerOnceFlag, romasmlexerLexerInitialize);
#endif
}
