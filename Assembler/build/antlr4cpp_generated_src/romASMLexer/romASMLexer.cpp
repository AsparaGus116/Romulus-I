
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
      "JLZ", "COMMA", "COMMENT", "IMM", "HEX", "REG", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "','"
    },
    std::vector<std::string>{
      "", "MOV", "STR", "LDA", "OR", "INV", "AND", "XOR", "ADD", "SUB", 
      "NOT", "SHR", "SHL", "PUSH", "CALL", "POP", "RET", "JMP", "JEZ", "JNZ", 
      "JGZ", "JLZ", "COMMA", "COMMENT", "IMM", "HEX", "REG", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,27,269,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,1,0,1,0,1,0,1,
  	0,1,0,1,0,3,0,62,8,0,1,1,1,1,1,1,1,1,1,1,1,1,3,1,70,8,1,1,2,1,2,1,2,1,
  	2,1,2,1,2,3,2,78,8,2,1,3,1,3,1,3,1,3,3,3,84,8,3,1,4,1,4,1,4,1,4,1,4,1,
  	4,3,4,92,8,4,1,5,1,5,1,5,1,5,1,5,1,5,3,5,100,8,5,1,6,1,6,1,6,1,6,1,6,
  	1,6,3,6,108,8,6,1,7,1,7,1,7,1,7,1,7,1,7,3,7,116,8,7,1,8,1,8,1,8,1,8,1,
  	8,1,8,3,8,124,8,8,1,9,1,9,1,9,1,9,1,9,1,9,3,9,132,8,9,1,10,1,10,1,10,
  	1,10,1,10,1,10,3,10,140,8,10,1,11,1,11,1,11,1,11,1,11,1,11,3,11,148,8,
  	11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,158,8,12,1,13,1,13,1,
  	13,1,13,1,13,1,13,1,13,1,13,3,13,168,8,13,1,14,1,14,1,14,1,14,1,14,1,
  	14,3,14,176,8,14,1,15,1,15,1,15,1,15,1,15,1,15,3,15,184,8,15,1,16,1,16,
  	1,16,1,16,1,16,1,16,3,16,192,8,16,1,17,1,17,1,17,1,17,1,17,1,17,3,17,
  	200,8,17,1,18,1,18,1,18,1,18,1,18,1,18,3,18,208,8,18,1,19,1,19,1,19,1,
  	19,1,19,1,19,3,19,216,8,19,1,20,1,20,1,20,1,20,1,20,1,20,3,20,224,8,20,
  	1,21,1,21,1,22,1,22,1,22,3,22,231,8,22,1,22,5,22,234,8,22,10,22,12,22,
  	237,9,22,1,22,3,22,240,8,22,1,22,1,22,1,23,4,23,245,8,23,11,23,12,23,
  	246,1,24,1,24,1,24,1,24,4,24,253,8,24,11,24,12,24,254,1,25,1,25,4,25,
  	259,8,25,11,25,12,25,260,1,26,4,26,264,8,26,11,26,12,26,265,1,26,1,26,
  	1,235,0,27,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,
  	25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,
  	24,49,25,51,26,53,27,1,0,5,1,1,10,10,1,0,48,57,3,0,48,57,65,70,97,102,
  	2,0,82,82,114,114,3,0,9,10,12,13,32,32,295,0,1,1,0,0,0,0,3,1,0,0,0,0,
  	5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,
  	0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,
  	0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,
  	1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,
  	0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,1,61,1,0,0,0,3,69,1,0,0,0,
  	5,77,1,0,0,0,7,83,1,0,0,0,9,91,1,0,0,0,11,99,1,0,0,0,13,107,1,0,0,0,15,
  	115,1,0,0,0,17,123,1,0,0,0,19,131,1,0,0,0,21,139,1,0,0,0,23,147,1,0,0,
  	0,25,157,1,0,0,0,27,167,1,0,0,0,29,175,1,0,0,0,31,183,1,0,0,0,33,191,
  	1,0,0,0,35,199,1,0,0,0,37,207,1,0,0,0,39,215,1,0,0,0,41,223,1,0,0,0,43,
  	225,1,0,0,0,45,230,1,0,0,0,47,244,1,0,0,0,49,248,1,0,0,0,51,256,1,0,0,
  	0,53,263,1,0,0,0,55,56,5,109,0,0,56,57,5,111,0,0,57,62,5,118,0,0,58,59,
  	5,77,0,0,59,60,5,79,0,0,60,62,5,86,0,0,61,55,1,0,0,0,61,58,1,0,0,0,62,
  	2,1,0,0,0,63,64,5,115,0,0,64,65,5,116,0,0,65,70,5,114,0,0,66,67,5,83,
  	0,0,67,68,5,84,0,0,68,70,5,82,0,0,69,63,1,0,0,0,69,66,1,0,0,0,70,4,1,
  	0,0,0,71,72,5,108,0,0,72,73,5,100,0,0,73,78,5,97,0,0,74,75,5,76,0,0,75,
  	76,5,68,0,0,76,78,5,65,0,0,77,71,1,0,0,0,77,74,1,0,0,0,78,6,1,0,0,0,79,
  	80,5,111,0,0,80,84,5,114,0,0,81,82,5,79,0,0,82,84,5,82,0,0,83,79,1,0,
  	0,0,83,81,1,0,0,0,84,8,1,0,0,0,85,86,5,105,0,0,86,87,5,110,0,0,87,92,
  	5,118,0,0,88,89,5,73,0,0,89,90,5,78,0,0,90,92,5,86,0,0,91,85,1,0,0,0,
  	91,88,1,0,0,0,92,10,1,0,0,0,93,94,5,97,0,0,94,95,5,110,0,0,95,100,5,100,
  	0,0,96,97,5,65,0,0,97,98,5,78,0,0,98,100,5,68,0,0,99,93,1,0,0,0,99,96,
  	1,0,0,0,100,12,1,0,0,0,101,102,5,120,0,0,102,103,5,111,0,0,103,108,5,
  	114,0,0,104,105,5,88,0,0,105,106,5,79,0,0,106,108,5,82,0,0,107,101,1,
  	0,0,0,107,104,1,0,0,0,108,14,1,0,0,0,109,110,5,97,0,0,110,111,5,100,0,
  	0,111,116,5,100,0,0,112,113,5,65,0,0,113,114,5,68,0,0,114,116,5,68,0,
  	0,115,109,1,0,0,0,115,112,1,0,0,0,116,16,1,0,0,0,117,118,5,115,0,0,118,
  	119,5,117,0,0,119,124,5,98,0,0,120,121,5,83,0,0,121,122,5,85,0,0,122,
  	124,5,66,0,0,123,117,1,0,0,0,123,120,1,0,0,0,124,18,1,0,0,0,125,126,5,
  	110,0,0,126,127,5,111,0,0,127,132,5,116,0,0,128,129,5,78,0,0,129,130,
  	5,79,0,0,130,132,5,84,0,0,131,125,1,0,0,0,131,128,1,0,0,0,132,20,1,0,
  	0,0,133,134,5,115,0,0,134,135,5,104,0,0,135,140,5,114,0,0,136,137,5,83,
  	0,0,137,138,5,72,0,0,138,140,5,82,0,0,139,133,1,0,0,0,139,136,1,0,0,0,
  	140,22,1,0,0,0,141,142,5,115,0,0,142,143,5,104,0,0,143,148,5,108,0,0,
  	144,145,5,83,0,0,145,146,5,72,0,0,146,148,5,76,0,0,147,141,1,0,0,0,147,
  	144,1,0,0,0,148,24,1,0,0,0,149,150,5,112,0,0,150,151,5,117,0,0,151,152,
  	5,115,0,0,152,158,5,104,0,0,153,154,5,80,0,0,154,155,5,85,0,0,155,156,
  	5,83,0,0,156,158,5,72,0,0,157,149,1,0,0,0,157,153,1,0,0,0,158,26,1,0,
  	0,0,159,160,5,99,0,0,160,161,5,97,0,0,161,162,5,108,0,0,162,168,5,108,
  	0,0,163,164,5,67,0,0,164,165,5,65,0,0,165,166,5,76,0,0,166,168,5,76,0,
  	0,167,159,1,0,0,0,167,163,1,0,0,0,168,28,1,0,0,0,169,170,5,112,0,0,170,
  	171,5,111,0,0,171,176,5,112,0,0,172,173,5,80,0,0,173,174,5,79,0,0,174,
  	176,5,80,0,0,175,169,1,0,0,0,175,172,1,0,0,0,176,30,1,0,0,0,177,178,5,
  	114,0,0,178,179,5,101,0,0,179,184,5,116,0,0,180,181,5,82,0,0,181,182,
  	5,69,0,0,182,184,5,84,0,0,183,177,1,0,0,0,183,180,1,0,0,0,184,32,1,0,
  	0,0,185,186,5,106,0,0,186,187,5,109,0,0,187,192,5,112,0,0,188,189,5,74,
  	0,0,189,190,5,77,0,0,190,192,5,80,0,0,191,185,1,0,0,0,191,188,1,0,0,0,
  	192,34,1,0,0,0,193,194,5,106,0,0,194,195,5,101,0,0,195,200,5,122,0,0,
  	196,197,5,74,0,0,197,198,5,69,0,0,198,200,5,90,0,0,199,193,1,0,0,0,199,
  	196,1,0,0,0,200,36,1,0,0,0,201,202,5,106,0,0,202,203,5,110,0,0,203,208,
  	5,122,0,0,204,205,5,74,0,0,205,206,5,78,0,0,206,208,5,90,0,0,207,201,
  	1,0,0,0,207,204,1,0,0,0,208,38,1,0,0,0,209,210,5,106,0,0,210,211,5,103,
  	0,0,211,216,5,122,0,0,212,213,5,74,0,0,213,214,5,71,0,0,214,216,5,90,
  	0,0,215,209,1,0,0,0,215,212,1,0,0,0,216,40,1,0,0,0,217,218,5,106,0,0,
  	218,219,5,108,0,0,219,224,5,122,0,0,220,221,5,74,0,0,221,222,5,76,0,0,
  	222,224,5,90,0,0,223,217,1,0,0,0,223,220,1,0,0,0,224,42,1,0,0,0,225,226,
  	5,44,0,0,226,44,1,0,0,0,227,228,5,47,0,0,228,231,5,47,0,0,229,231,5,35,
  	0,0,230,227,1,0,0,0,230,229,1,0,0,0,231,235,1,0,0,0,232,234,9,0,0,0,233,
  	232,1,0,0,0,234,237,1,0,0,0,235,236,1,0,0,0,235,233,1,0,0,0,236,239,1,
  	0,0,0,237,235,1,0,0,0,238,240,7,0,0,0,239,238,1,0,0,0,240,241,1,0,0,0,
  	241,242,6,22,0,0,242,46,1,0,0,0,243,245,7,1,0,0,244,243,1,0,0,0,245,246,
  	1,0,0,0,246,244,1,0,0,0,246,247,1,0,0,0,247,48,1,0,0,0,248,249,5,48,0,
  	0,249,250,5,120,0,0,250,252,1,0,0,0,251,253,7,2,0,0,252,251,1,0,0,0,253,
  	254,1,0,0,0,254,252,1,0,0,0,254,255,1,0,0,0,255,50,1,0,0,0,256,258,7,
  	3,0,0,257,259,7,1,0,0,258,257,1,0,0,0,259,260,1,0,0,0,260,258,1,0,0,0,
  	260,261,1,0,0,0,261,52,1,0,0,0,262,264,7,4,0,0,263,262,1,0,0,0,264,265,
  	1,0,0,0,265,263,1,0,0,0,265,266,1,0,0,0,266,267,1,0,0,0,267,268,6,26,
  	0,0,268,54,1,0,0,0,29,0,61,69,77,83,91,99,107,115,123,131,139,147,157,
  	167,175,183,191,199,207,215,223,230,235,239,246,254,260,265,1,6,0,0
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
