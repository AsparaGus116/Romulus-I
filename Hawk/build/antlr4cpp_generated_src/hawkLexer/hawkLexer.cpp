
// Generated from hawkLexer.g4 by ANTLR 4.13.2


#include "hawkLexer.h"


using namespace antlr4;

using namespace hawk;


using namespace antlr4;

namespace {

struct HawkLexerStaticData final {
  HawkLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  HawkLexerStaticData(const HawkLexerStaticData&) = delete;
  HawkLexerStaticData(HawkLexerStaticData&&) = delete;
  HawkLexerStaticData& operator=(const HawkLexerStaticData&) = delete;
  HawkLexerStaticData& operator=(HawkLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag hawklexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<HawkLexerStaticData> hawklexerLexerStaticData = nullptr;

void hawklexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (hawklexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(hawklexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<HawkLexerStaticData>(
    std::vector<std::string>{
      "KBOOL", "KINT", "KCHAR", "KVOID", "KADD", "KSUB", "KMUL", "KDIV", 
      "KMOD", "KBAND", "KBOR", "KBNOT", "KNOT", "KXOR", "KOR", "KAND", "LPAREN", 
      "RPAREN", "LBRACKET", "RBRACKET", "LBRACE", "RBRACE", "KASSIGN", "KADDASSIGN", 
      "KSUBASSIGN", "KMULASSIGN", "KDIVASSIGN", "KMODASSIGN", "KANDASSIGN", 
      "KORASSIGN", "KNOTASSIGN", "KXORASSIGN", "KEQ", "KNE", "KG", "KL", 
      "KGE", "KLE", "KINC", "KDEC", "KIF", "KELSE", "KWHILE", "KFOR", "COMMA", 
      "SEMICOLON", "ID", "INT", "HEX", "BIN", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,51,268,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,
  	7,49,2,50,7,50,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,
  	2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,
  	1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,14,1,15,1,15,1,15,
  	1,16,1,16,1,17,1,17,1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,
  	1,23,1,23,1,23,1,24,1,24,1,24,1,25,1,25,1,25,1,26,1,26,1,26,1,27,1,27,
  	1,27,1,28,1,28,1,28,1,29,1,29,1,29,1,30,1,30,1,30,1,31,1,31,1,31,1,32,
  	1,32,1,32,1,33,1,33,1,33,1,34,1,34,1,35,1,35,1,36,1,36,1,36,1,37,1,37,
  	1,37,1,38,1,38,1,38,1,39,1,39,1,39,1,40,1,40,1,40,1,41,1,41,1,41,1,41,
  	1,41,1,42,1,42,1,42,1,42,1,42,1,42,1,43,1,43,1,43,1,43,1,44,1,44,1,45,
  	1,45,1,46,1,46,5,46,236,8,46,10,46,12,46,239,9,46,1,47,4,47,242,8,47,
  	11,47,12,47,243,1,48,1,48,1,48,1,48,4,48,250,8,48,11,48,12,48,251,1,49,
  	1,49,1,49,1,49,4,49,258,8,49,11,49,12,49,259,1,50,4,50,263,8,50,11,50,
  	12,50,264,1,50,1,50,0,0,51,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,
  	10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,
  	43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,
  	33,67,34,69,35,71,36,73,37,75,38,77,39,79,40,81,41,83,42,85,43,87,44,
  	89,45,91,46,93,47,95,48,97,49,99,50,101,51,1,0,6,3,0,65,90,95,95,97,122,
  	4,0,48,57,65,90,95,95,97,122,1,0,48,57,3,0,48,57,65,70,97,102,1,0,48,
  	49,3,0,9,10,12,13,32,32,272,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,
  	0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,
  	0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,
  	1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,
  	0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,
  	0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,
  	1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,
  	0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,
  	0,83,1,0,0,0,0,85,1,0,0,0,0,87,1,0,0,0,0,89,1,0,0,0,0,91,1,0,0,0,0,93,
  	1,0,0,0,0,95,1,0,0,0,0,97,1,0,0,0,0,99,1,0,0,0,0,101,1,0,0,0,1,103,1,
  	0,0,0,3,108,1,0,0,0,5,112,1,0,0,0,7,117,1,0,0,0,9,122,1,0,0,0,11,124,
  	1,0,0,0,13,126,1,0,0,0,15,128,1,0,0,0,17,130,1,0,0,0,19,132,1,0,0,0,21,
  	134,1,0,0,0,23,136,1,0,0,0,25,138,1,0,0,0,27,140,1,0,0,0,29,142,1,0,0,
  	0,31,145,1,0,0,0,33,148,1,0,0,0,35,150,1,0,0,0,37,152,1,0,0,0,39,154,
  	1,0,0,0,41,156,1,0,0,0,43,158,1,0,0,0,45,160,1,0,0,0,47,162,1,0,0,0,49,
  	165,1,0,0,0,51,168,1,0,0,0,53,171,1,0,0,0,55,174,1,0,0,0,57,177,1,0,0,
  	0,59,180,1,0,0,0,61,183,1,0,0,0,63,186,1,0,0,0,65,189,1,0,0,0,67,192,
  	1,0,0,0,69,195,1,0,0,0,71,197,1,0,0,0,73,199,1,0,0,0,75,202,1,0,0,0,77,
  	205,1,0,0,0,79,208,1,0,0,0,81,211,1,0,0,0,83,214,1,0,0,0,85,219,1,0,0,
  	0,87,225,1,0,0,0,89,229,1,0,0,0,91,231,1,0,0,0,93,233,1,0,0,0,95,241,
  	1,0,0,0,97,245,1,0,0,0,99,253,1,0,0,0,101,262,1,0,0,0,103,104,5,98,0,
  	0,104,105,5,111,0,0,105,106,5,111,0,0,106,107,5,108,0,0,107,2,1,0,0,0,
  	108,109,5,105,0,0,109,110,5,110,0,0,110,111,5,116,0,0,111,4,1,0,0,0,112,
  	113,5,99,0,0,113,114,5,104,0,0,114,115,5,97,0,0,115,116,5,114,0,0,116,
  	6,1,0,0,0,117,118,5,118,0,0,118,119,5,111,0,0,119,120,5,105,0,0,120,121,
  	5,100,0,0,121,8,1,0,0,0,122,123,5,43,0,0,123,10,1,0,0,0,124,125,5,45,
  	0,0,125,12,1,0,0,0,126,127,5,42,0,0,127,14,1,0,0,0,128,129,5,47,0,0,129,
  	16,1,0,0,0,130,131,5,37,0,0,131,18,1,0,0,0,132,133,5,38,0,0,133,20,1,
  	0,0,0,134,135,5,124,0,0,135,22,1,0,0,0,136,137,5,126,0,0,137,24,1,0,0,
  	0,138,139,5,33,0,0,139,26,1,0,0,0,140,141,5,94,0,0,141,28,1,0,0,0,142,
  	143,5,124,0,0,143,144,5,124,0,0,144,30,1,0,0,0,145,146,5,38,0,0,146,147,
  	5,38,0,0,147,32,1,0,0,0,148,149,5,40,0,0,149,34,1,0,0,0,150,151,5,41,
  	0,0,151,36,1,0,0,0,152,153,5,91,0,0,153,38,1,0,0,0,154,155,5,93,0,0,155,
  	40,1,0,0,0,156,157,5,123,0,0,157,42,1,0,0,0,158,159,5,125,0,0,159,44,
  	1,0,0,0,160,161,5,61,0,0,161,46,1,0,0,0,162,163,5,43,0,0,163,164,5,61,
  	0,0,164,48,1,0,0,0,165,166,5,45,0,0,166,167,5,61,0,0,167,50,1,0,0,0,168,
  	169,5,42,0,0,169,170,5,61,0,0,170,52,1,0,0,0,171,172,5,47,0,0,172,173,
  	5,61,0,0,173,54,1,0,0,0,174,175,5,37,0,0,175,176,5,61,0,0,176,56,1,0,
  	0,0,177,178,5,38,0,0,178,179,5,61,0,0,179,58,1,0,0,0,180,181,5,124,0,
  	0,181,182,5,61,0,0,182,60,1,0,0,0,183,184,5,126,0,0,184,185,5,61,0,0,
  	185,62,1,0,0,0,186,187,5,94,0,0,187,188,5,61,0,0,188,64,1,0,0,0,189,190,
  	5,61,0,0,190,191,5,61,0,0,191,66,1,0,0,0,192,193,5,33,0,0,193,194,5,61,
  	0,0,194,68,1,0,0,0,195,196,5,62,0,0,196,70,1,0,0,0,197,198,5,60,0,0,198,
  	72,1,0,0,0,199,200,5,62,0,0,200,201,5,61,0,0,201,74,1,0,0,0,202,203,5,
  	60,0,0,203,204,5,61,0,0,204,76,1,0,0,0,205,206,5,43,0,0,206,207,5,43,
  	0,0,207,78,1,0,0,0,208,209,5,45,0,0,209,210,5,45,0,0,210,80,1,0,0,0,211,
  	212,5,105,0,0,212,213,5,102,0,0,213,82,1,0,0,0,214,215,5,101,0,0,215,
  	216,5,108,0,0,216,217,5,115,0,0,217,218,5,101,0,0,218,84,1,0,0,0,219,
  	220,5,119,0,0,220,221,5,104,0,0,221,222,5,105,0,0,222,223,5,108,0,0,223,
  	224,5,101,0,0,224,86,1,0,0,0,225,226,5,102,0,0,226,227,5,111,0,0,227,
  	228,5,114,0,0,228,88,1,0,0,0,229,230,5,44,0,0,230,90,1,0,0,0,231,232,
  	5,59,0,0,232,92,1,0,0,0,233,237,7,0,0,0,234,236,7,1,0,0,235,234,1,0,0,
  	0,236,239,1,0,0,0,237,235,1,0,0,0,237,238,1,0,0,0,238,94,1,0,0,0,239,
  	237,1,0,0,0,240,242,7,2,0,0,241,240,1,0,0,0,242,243,1,0,0,0,243,241,1,
  	0,0,0,243,244,1,0,0,0,244,96,1,0,0,0,245,246,5,48,0,0,246,247,5,120,0,
  	0,247,249,1,0,0,0,248,250,7,3,0,0,249,248,1,0,0,0,250,251,1,0,0,0,251,
  	249,1,0,0,0,251,252,1,0,0,0,252,98,1,0,0,0,253,254,5,48,0,0,254,255,5,
  	98,0,0,255,257,1,0,0,0,256,258,7,4,0,0,257,256,1,0,0,0,258,259,1,0,0,
  	0,259,257,1,0,0,0,259,260,1,0,0,0,260,100,1,0,0,0,261,263,7,5,0,0,262,
  	261,1,0,0,0,263,264,1,0,0,0,264,262,1,0,0,0,264,265,1,0,0,0,265,266,1,
  	0,0,0,266,267,6,50,0,0,267,102,1,0,0,0,6,0,237,243,251,259,264,1,6,0,
  	0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  hawklexerLexerStaticData = std::move(staticData);
}

}

hawkLexer::hawkLexer(CharStream *input) : Lexer(input) {
  hawkLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *hawklexerLexerStaticData->atn, hawklexerLexerStaticData->decisionToDFA, hawklexerLexerStaticData->sharedContextCache);
}

hawkLexer::~hawkLexer() {
  delete _interpreter;
}

std::string hawkLexer::getGrammarFileName() const {
  return "hawkLexer.g4";
}

const std::vector<std::string>& hawkLexer::getRuleNames() const {
  return hawklexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& hawkLexer::getChannelNames() const {
  return hawklexerLexerStaticData->channelNames;
}

const std::vector<std::string>& hawkLexer::getModeNames() const {
  return hawklexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& hawkLexer::getVocabulary() const {
  return hawklexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView hawkLexer::getSerializedATN() const {
  return hawklexerLexerStaticData->serializedATN;
}

const atn::ATN& hawkLexer::getATN() const {
  return *hawklexerLexerStaticData->atn;
}




void hawkLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  hawklexerLexerInitialize();
#else
  ::antlr4::internal::call_once(hawklexerLexerOnceFlag, hawklexerLexerInitialize);
#endif
}
