
// Generated from c:/Users/gusbr/Desktop/CodingShit/Romulus-I/Hawk/hawkParser.g4 by ANTLR 4.13.1



#include "hawkParser.h"


using namespace antlrcpp;

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
HawkParserStaticData *hawkparserParserStaticData = nullptr;

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
      "program", "type", "assignOp", "number", "cond", "stmt", "trueStmt", 
      "expr", "functionStmt", "ifStmt", "ifBlock", "elifBlock", "elseBlock", 
      "whileStmt", "forRangeStmt", "forEachStmt", "doWhileStmt", "struct"
    },
    std::vector<std::string>{
      "", "'bool'", "'int'", "'char'", "'void'", "'+'", "'-'", "'*'", "'/'", 
      "'%'", "'&'", "'|'", "'~'", "'!'", "'^'", "'||'", "'&&'", "'<<'", 
      "'>>'", "'('", "')'", "'['", "']'", "'{'", "'}'", "'='", "'+='", "'-='", 
      "'*='", "'/='", "'%='", "'&='", "'|='", "'~='", "'^='", "'<<='", "'>>='", 
      "'\\u003F'", "':'", "'=='", "'!='", "'>'", "'<'", "'>='", "'<='", 
      "'++'", "'--'", "'static'", "'const'", "'struct'", "'if'", "'else'", 
      "'while'", "'do'", "'for'", "','", "';'", "'.'", "'->'"
    },
    std::vector<std::string>{
      "", "KBOOL", "KINT", "KCHAR", "KVOID", "KADD", "KSUB", "KMUL", "KDIV", 
      "KMOD", "KBAND", "KBOR", "KBNOT", "KNOT", "KXOR", "KOR", "KAND", "KSHL", 
      "KSHR", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", "LBRACE", "RBRACE", 
      "KASSIGN", "KADDASSIGN", "KSUBASSIGN", "KMULASSIGN", "KDIVASSIGN", 
      "KMODASSIGN", "KANDASSIGN", "KORASSIGN", "KNOTASSIGN", "KXORASSIGN", 
      "KSHLASSIGN", "KSHRASSIGN", "KQUESTION", "KCOLON", "KEQ", "KNE", "KG", 
      "KL", "KGE", "KLE", "KINC", "KDEC", "KSTATIC", "KCONST", "KSTRUCT", 
      "KIF", "KELSE", "KWHILE", "KDO", "KFOR", "COMMA", "SEMICOLON", "DOT", 
      "ARROW", "ID", "INT", "HEX", "BIN", "COMMENT", "BLOCKCOMMENT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,65,427,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,1,0,4,0,38,8,0,11,0,12,0,39,1,0,1,0,
  	1,1,1,1,5,1,46,8,1,10,1,12,1,49,9,1,1,1,1,1,5,1,53,8,1,10,1,12,1,56,9,
  	1,1,1,1,1,5,1,60,8,1,10,1,12,1,63,9,1,1,1,1,1,5,1,67,8,1,10,1,12,1,70,
  	9,1,3,1,72,8,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,
  	5,1,5,1,5,3,5,90,8,5,1,6,3,6,93,8,6,1,6,3,6,96,8,6,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,3,6,105,8,6,1,6,1,6,1,6,1,6,3,6,111,8,6,1,6,1,6,1,6,1,6,3,6,
  	117,8,6,1,6,1,6,1,6,5,6,122,8,6,10,6,12,6,125,9,6,3,6,127,8,6,1,6,1,6,
  	1,6,1,6,1,6,3,6,134,8,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,5,7,146,
  	8,7,10,7,12,7,149,9,7,3,7,151,8,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,
  	1,7,3,7,163,8,7,1,7,1,7,1,7,3,7,168,8,7,1,7,3,7,171,8,7,1,7,1,7,1,7,1,
  	7,5,7,177,8,7,10,7,12,7,180,9,7,3,7,182,8,7,1,7,1,7,3,7,186,8,7,1,7,1,
  	7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,
  	1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,
  	1,7,1,7,5,7,244,8,7,10,7,12,7,247,9,7,1,8,3,8,250,8,8,1,8,1,8,1,8,1,8,
  	3,8,256,8,8,1,8,1,8,1,8,1,8,3,8,262,8,8,1,8,1,8,1,8,5,8,267,8,8,10,8,
  	12,8,270,9,8,3,8,272,8,8,1,8,1,8,1,8,5,8,277,8,8,10,8,12,8,280,9,8,1,
  	8,1,8,1,9,1,9,5,9,286,8,9,10,9,12,9,289,9,9,1,9,3,9,292,8,9,1,10,1,10,
  	1,10,1,10,1,10,1,10,5,10,300,8,10,10,10,12,10,303,9,10,1,10,1,10,1,10,
  	1,10,1,10,1,10,1,10,1,10,3,10,313,8,10,1,11,1,11,1,11,1,11,1,11,1,11,
  	1,11,5,11,322,8,11,10,11,12,11,325,9,11,1,11,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,11,3,11,336,8,11,1,12,1,12,1,12,5,12,341,8,12,10,12,12,12,
  	344,9,12,1,12,1,12,1,12,3,12,349,8,12,1,13,1,13,1,13,1,13,1,13,1,13,5,
  	13,357,8,13,10,13,12,13,360,9,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,
  	14,1,14,1,14,1,14,1,14,5,14,374,8,14,10,14,12,14,377,9,14,1,14,1,14,1,
  	15,1,15,1,15,3,15,384,8,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,5,15,393,
  	8,15,10,15,12,15,396,9,15,1,15,1,15,1,16,1,16,1,16,5,16,403,8,16,10,16,
  	12,16,406,9,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,
  	5,17,419,8,17,10,17,12,17,422,9,17,1,17,1,17,1,17,1,17,0,1,14,18,0,2,
  	4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,0,10,1,0,25,36,1,0,60,62,
  	1,0,39,44,1,0,45,46,1,0,5,6,1,0,12,13,1,0,7,9,1,0,17,18,1,0,41,44,1,0,
  	39,40,486,0,37,1,0,0,0,2,71,1,0,0,0,4,73,1,0,0,0,6,75,1,0,0,0,8,77,1,
  	0,0,0,10,89,1,0,0,0,12,133,1,0,0,0,14,185,1,0,0,0,16,249,1,0,0,0,18,283,
  	1,0,0,0,20,312,1,0,0,0,22,335,1,0,0,0,24,348,1,0,0,0,26,350,1,0,0,0,28,
  	363,1,0,0,0,30,380,1,0,0,0,32,399,1,0,0,0,34,414,1,0,0,0,36,38,3,10,5,
  	0,37,36,1,0,0,0,38,39,1,0,0,0,39,37,1,0,0,0,39,40,1,0,0,0,40,41,1,0,0,
  	0,41,42,5,0,0,1,42,1,1,0,0,0,43,47,5,1,0,0,44,46,5,7,0,0,45,44,1,0,0,
  	0,46,49,1,0,0,0,47,45,1,0,0,0,47,48,1,0,0,0,48,72,1,0,0,0,49,47,1,0,0,
  	0,50,54,5,2,0,0,51,53,5,7,0,0,52,51,1,0,0,0,53,56,1,0,0,0,54,52,1,0,0,
  	0,54,55,1,0,0,0,55,72,1,0,0,0,56,54,1,0,0,0,57,61,5,3,0,0,58,60,5,7,0,
  	0,59,58,1,0,0,0,60,63,1,0,0,0,61,59,1,0,0,0,61,62,1,0,0,0,62,72,1,0,0,
  	0,63,61,1,0,0,0,64,68,5,4,0,0,65,67,5,7,0,0,66,65,1,0,0,0,67,70,1,0,0,
  	0,68,66,1,0,0,0,68,69,1,0,0,0,69,72,1,0,0,0,70,68,1,0,0,0,71,43,1,0,0,
  	0,71,50,1,0,0,0,71,57,1,0,0,0,71,64,1,0,0,0,72,3,1,0,0,0,73,74,7,0,0,
  	0,74,5,1,0,0,0,75,76,7,1,0,0,76,7,1,0,0,0,77,78,7,2,0,0,78,9,1,0,0,0,
  	79,90,3,16,8,0,80,90,3,18,9,0,81,90,3,26,13,0,82,90,3,32,16,0,83,90,3,
  	28,14,0,84,90,3,30,15,0,85,90,3,34,17,0,86,87,3,12,6,0,87,88,5,56,0,0,
  	88,90,1,0,0,0,89,79,1,0,0,0,89,80,1,0,0,0,89,81,1,0,0,0,89,82,1,0,0,0,
  	89,83,1,0,0,0,89,84,1,0,0,0,89,85,1,0,0,0,89,86,1,0,0,0,90,11,1,0,0,0,
  	91,93,5,47,0,0,92,91,1,0,0,0,92,93,1,0,0,0,93,95,1,0,0,0,94,96,5,48,0,
  	0,95,94,1,0,0,0,95,96,1,0,0,0,96,97,1,0,0,0,97,98,3,14,7,0,98,99,3,4,
  	2,0,99,100,3,14,7,0,100,134,1,0,0,0,101,102,5,59,0,0,102,134,7,3,0,0,
  	103,105,5,48,0,0,104,103,1,0,0,0,104,105,1,0,0,0,105,106,1,0,0,0,106,
  	107,3,2,1,0,107,108,5,59,0,0,108,126,5,19,0,0,109,111,5,48,0,0,110,109,
  	1,0,0,0,110,111,1,0,0,0,111,112,1,0,0,0,112,113,3,2,1,0,113,123,5,59,
  	0,0,114,116,5,55,0,0,115,117,5,48,0,0,116,115,1,0,0,0,116,117,1,0,0,0,
  	117,118,1,0,0,0,118,119,3,2,1,0,119,120,5,59,0,0,120,122,1,0,0,0,121,
  	114,1,0,0,0,122,125,1,0,0,0,123,121,1,0,0,0,123,124,1,0,0,0,124,127,1,
  	0,0,0,125,123,1,0,0,0,126,110,1,0,0,0,126,127,1,0,0,0,127,128,1,0,0,0,
  	128,129,5,20,0,0,129,134,1,0,0,0,130,131,7,3,0,0,131,134,5,59,0,0,132,
  	134,3,14,7,0,133,92,1,0,0,0,133,101,1,0,0,0,133,104,1,0,0,0,133,130,1,
  	0,0,0,133,132,1,0,0,0,134,13,1,0,0,0,135,136,6,7,-1,0,136,137,5,19,0,
  	0,137,138,3,14,7,0,138,139,5,20,0,0,139,186,1,0,0,0,140,141,5,59,0,0,
  	141,150,5,19,0,0,142,147,5,59,0,0,143,144,5,55,0,0,144,146,5,59,0,0,145,
  	143,1,0,0,0,146,149,1,0,0,0,147,145,1,0,0,0,147,148,1,0,0,0,148,151,1,
  	0,0,0,149,147,1,0,0,0,150,142,1,0,0,0,150,151,1,0,0,0,151,152,1,0,0,0,
  	152,186,5,20,0,0,153,154,7,3,0,0,154,186,3,14,7,20,155,156,7,4,0,0,156,
  	186,3,14,7,19,157,158,5,10,0,0,158,186,3,14,7,17,159,160,5,7,0,0,160,
  	186,3,14,7,16,161,163,3,2,1,0,162,161,1,0,0,0,162,163,1,0,0,0,163,164,
  	1,0,0,0,164,170,5,59,0,0,165,167,5,21,0,0,166,168,3,6,3,0,167,166,1,0,
  	0,0,167,168,1,0,0,0,168,169,1,0,0,0,169,171,5,22,0,0,170,165,1,0,0,0,
  	170,171,1,0,0,0,171,186,1,0,0,0,172,181,5,23,0,0,173,178,3,14,7,0,174,
  	175,5,55,0,0,175,177,3,14,7,0,176,174,1,0,0,0,177,180,1,0,0,0,178,176,
  	1,0,0,0,178,179,1,0,0,0,179,182,1,0,0,0,180,178,1,0,0,0,181,173,1,0,0,
  	0,181,182,1,0,0,0,182,183,1,0,0,0,183,186,5,24,0,0,184,186,3,6,3,0,185,
  	135,1,0,0,0,185,140,1,0,0,0,185,153,1,0,0,0,185,155,1,0,0,0,185,157,1,
  	0,0,0,185,159,1,0,0,0,185,162,1,0,0,0,185,172,1,0,0,0,185,184,1,0,0,0,
  	186,245,1,0,0,0,187,188,10,18,0,0,188,189,7,5,0,0,189,244,3,14,7,18,190,
  	191,10,15,0,0,191,192,7,6,0,0,192,244,3,14,7,16,193,194,10,14,0,0,194,
  	195,7,4,0,0,195,244,3,14,7,15,196,197,10,13,0,0,197,198,7,7,0,0,198,244,
  	3,14,7,14,199,200,10,12,0,0,200,201,7,8,0,0,201,244,3,14,7,13,202,203,
  	10,11,0,0,203,204,7,9,0,0,204,244,3,14,7,12,205,206,10,10,0,0,206,207,
  	5,10,0,0,207,244,3,14,7,11,208,209,10,9,0,0,209,210,5,14,0,0,210,244,
  	3,14,7,10,211,212,10,8,0,0,212,213,5,11,0,0,213,244,3,14,7,9,214,215,
  	10,7,0,0,215,216,5,16,0,0,216,244,3,14,7,8,217,218,10,6,0,0,218,219,5,
  	15,0,0,219,244,3,14,7,7,220,221,10,5,0,0,221,222,5,37,0,0,222,223,3,14,
  	7,0,223,224,5,38,0,0,224,225,3,14,7,5,225,244,1,0,0,0,226,227,10,4,0,
  	0,227,228,3,8,4,0,228,229,3,14,7,4,229,244,1,0,0,0,230,231,10,25,0,0,
  	231,244,7,3,0,0,232,233,10,23,0,0,233,234,5,21,0,0,234,235,3,6,3,0,235,
  	236,5,22,0,0,236,244,1,0,0,0,237,238,10,22,0,0,238,239,5,57,0,0,239,244,
  	5,59,0,0,240,241,10,21,0,0,241,242,5,58,0,0,242,244,5,59,0,0,243,187,
  	1,0,0,0,243,190,1,0,0,0,243,193,1,0,0,0,243,196,1,0,0,0,243,199,1,0,0,
  	0,243,202,1,0,0,0,243,205,1,0,0,0,243,208,1,0,0,0,243,211,1,0,0,0,243,
  	214,1,0,0,0,243,217,1,0,0,0,243,220,1,0,0,0,243,226,1,0,0,0,243,230,1,
  	0,0,0,243,232,1,0,0,0,243,237,1,0,0,0,243,240,1,0,0,0,244,247,1,0,0,0,
  	245,243,1,0,0,0,245,246,1,0,0,0,246,15,1,0,0,0,247,245,1,0,0,0,248,250,
  	5,48,0,0,249,248,1,0,0,0,249,250,1,0,0,0,250,251,1,0,0,0,251,252,3,2,
  	1,0,252,253,5,59,0,0,253,271,5,19,0,0,254,256,5,48,0,0,255,254,1,0,0,
  	0,255,256,1,0,0,0,256,257,1,0,0,0,257,258,3,2,1,0,258,268,5,59,0,0,259,
  	261,5,55,0,0,260,262,5,48,0,0,261,260,1,0,0,0,261,262,1,0,0,0,262,263,
  	1,0,0,0,263,264,3,2,1,0,264,265,5,59,0,0,265,267,1,0,0,0,266,259,1,0,
  	0,0,267,270,1,0,0,0,268,266,1,0,0,0,268,269,1,0,0,0,269,272,1,0,0,0,270,
  	268,1,0,0,0,271,255,1,0,0,0,271,272,1,0,0,0,272,273,1,0,0,0,273,274,5,
  	20,0,0,274,278,5,23,0,0,275,277,3,10,5,0,276,275,1,0,0,0,277,280,1,0,
  	0,0,278,276,1,0,0,0,278,279,1,0,0,0,279,281,1,0,0,0,280,278,1,0,0,0,281,
  	282,5,24,0,0,282,17,1,0,0,0,283,287,3,20,10,0,284,286,3,22,11,0,285,284,
  	1,0,0,0,286,289,1,0,0,0,287,285,1,0,0,0,287,288,1,0,0,0,288,291,1,0,0,
  	0,289,287,1,0,0,0,290,292,3,24,12,0,291,290,1,0,0,0,291,292,1,0,0,0,292,
  	19,1,0,0,0,293,294,5,50,0,0,294,295,5,19,0,0,295,296,3,14,7,0,296,297,
  	5,20,0,0,297,301,5,23,0,0,298,300,3,10,5,0,299,298,1,0,0,0,300,303,1,
  	0,0,0,301,299,1,0,0,0,301,302,1,0,0,0,302,304,1,0,0,0,303,301,1,0,0,0,
  	304,305,5,24,0,0,305,313,1,0,0,0,306,307,5,50,0,0,307,308,5,19,0,0,308,
  	309,3,14,7,0,309,310,5,20,0,0,310,311,3,10,5,0,311,313,1,0,0,0,312,293,
  	1,0,0,0,312,306,1,0,0,0,313,21,1,0,0,0,314,315,5,51,0,0,315,316,5,50,
  	0,0,316,317,5,19,0,0,317,318,3,14,7,0,318,319,5,20,0,0,319,323,5,23,0,
  	0,320,322,3,10,5,0,321,320,1,0,0,0,322,325,1,0,0,0,323,321,1,0,0,0,323,
  	324,1,0,0,0,324,326,1,0,0,0,325,323,1,0,0,0,326,327,5,24,0,0,327,336,
  	1,0,0,0,328,329,5,51,0,0,329,330,5,50,0,0,330,331,5,19,0,0,331,332,3,
  	14,7,0,332,333,5,20,0,0,333,334,3,10,5,0,334,336,1,0,0,0,335,314,1,0,
  	0,0,335,328,1,0,0,0,336,23,1,0,0,0,337,338,5,51,0,0,338,342,5,23,0,0,
  	339,341,3,10,5,0,340,339,1,0,0,0,341,344,1,0,0,0,342,340,1,0,0,0,342,
  	343,1,0,0,0,343,345,1,0,0,0,344,342,1,0,0,0,345,349,5,24,0,0,346,347,
  	5,51,0,0,347,349,3,10,5,0,348,337,1,0,0,0,348,346,1,0,0,0,349,25,1,0,
  	0,0,350,351,5,52,0,0,351,352,5,19,0,0,352,353,3,14,7,0,353,354,5,20,0,
  	0,354,358,5,23,0,0,355,357,3,10,5,0,356,355,1,0,0,0,357,360,1,0,0,0,358,
  	356,1,0,0,0,358,359,1,0,0,0,359,361,1,0,0,0,360,358,1,0,0,0,361,362,5,
  	24,0,0,362,27,1,0,0,0,363,364,5,54,0,0,364,365,5,19,0,0,365,366,3,12,
  	6,0,366,367,5,56,0,0,367,368,3,14,7,0,368,369,5,56,0,0,369,370,3,12,6,
  	0,370,371,5,20,0,0,371,375,5,23,0,0,372,374,3,10,5,0,373,372,1,0,0,0,
  	374,377,1,0,0,0,375,373,1,0,0,0,375,376,1,0,0,0,376,378,1,0,0,0,377,375,
  	1,0,0,0,378,379,5,24,0,0,379,29,1,0,0,0,380,381,5,54,0,0,381,383,5,19,
  	0,0,382,384,5,48,0,0,383,382,1,0,0,0,383,384,1,0,0,0,384,385,1,0,0,0,
  	385,386,3,2,1,0,386,387,5,59,0,0,387,388,5,38,0,0,388,389,3,14,7,0,389,
  	390,5,20,0,0,390,394,5,23,0,0,391,393,3,10,5,0,392,391,1,0,0,0,393,396,
  	1,0,0,0,394,392,1,0,0,0,394,395,1,0,0,0,395,397,1,0,0,0,396,394,1,0,0,
  	0,397,398,5,24,0,0,398,31,1,0,0,0,399,400,5,53,0,0,400,404,5,23,0,0,401,
  	403,3,10,5,0,402,401,1,0,0,0,403,406,1,0,0,0,404,402,1,0,0,0,404,405,
  	1,0,0,0,405,407,1,0,0,0,406,404,1,0,0,0,407,408,5,24,0,0,408,409,5,52,
  	0,0,409,410,5,19,0,0,410,411,3,14,7,0,411,412,5,20,0,0,412,413,5,56,0,
  	0,413,33,1,0,0,0,414,415,5,49,0,0,415,416,5,59,0,0,416,420,5,23,0,0,417,
  	419,3,10,5,0,418,417,1,0,0,0,419,422,1,0,0,0,420,418,1,0,0,0,420,421,
  	1,0,0,0,421,423,1,0,0,0,422,420,1,0,0,0,423,424,5,24,0,0,424,425,5,56,
  	0,0,425,35,1,0,0,0,45,39,47,54,61,68,71,89,92,95,104,110,116,123,126,
  	133,147,150,162,167,170,178,181,185,243,245,249,255,261,268,271,278,287,
  	291,301,312,323,335,342,348,358,375,383,394,404,420
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  hawkparserParserStaticData = staticData.release();
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
    setState(37); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(36);
      stmt();
      setState(39); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8680653097393456382) != 0));
    setState(41);
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

std::vector<tree::TerminalNode *> hawkParser::TypeContext::KMUL() {
  return getTokens(hawkParser::KMUL);
}

tree::TerminalNode* hawkParser::TypeContext::KMUL(size_t i) {
  return getToken(hawkParser::KMUL, i);
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
    setState(71);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case hawkParser::KBOOL: {
        enterOuterAlt(_localctx, 1);
        setState(43);
        match(hawkParser::KBOOL);
        setState(47);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == hawkParser::KMUL) {
          setState(44);
          match(hawkParser::KMUL);
          setState(49);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case hawkParser::KINT: {
        enterOuterAlt(_localctx, 2);
        setState(50);
        match(hawkParser::KINT);
        setState(54);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == hawkParser::KMUL) {
          setState(51);
          match(hawkParser::KMUL);
          setState(56);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case hawkParser::KCHAR: {
        enterOuterAlt(_localctx, 3);
        setState(57);
        match(hawkParser::KCHAR);
        setState(61);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == hawkParser::KMUL) {
          setState(58);
          match(hawkParser::KMUL);
          setState(63);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case hawkParser::KVOID: {
        enterOuterAlt(_localctx, 4);
        setState(64);
        match(hawkParser::KVOID);
        setState(68);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == hawkParser::KMUL) {
          setState(65);
          match(hawkParser::KMUL);
          setState(70);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
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

tree::TerminalNode* hawkParser::AssignOpContext::KSHLASSIGN() {
  return getToken(hawkParser::KSHLASSIGN, 0);
}

tree::TerminalNode* hawkParser::AssignOpContext::KSHRASSIGN() {
  return getToken(hawkParser::KSHRASSIGN, 0);
}


size_t hawkParser::AssignOpContext::getRuleIndex() const {
  return hawkParser::RuleAssignOp;
}


hawkParser::AssignOpContext* hawkParser::assignOp() {
  AssignOpContext *_localctx = _tracker.createInstance<AssignOpContext>(_ctx, getState());
  enterRule(_localctx, 4, hawkParser::RuleAssignOp);
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
    setState(73);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 137405399040) != 0))) {
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


hawkParser::NumberContext* hawkParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 6, hawkParser::RuleNumber);
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
    setState(75);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8070450532247928832) != 0))) {
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


hawkParser::CondContext* hawkParser::cond() {
  CondContext *_localctx = _tracker.createInstance<CondContext>(_ctx, getState());
  enterRule(_localctx, 8, hawkParser::RuleCond);
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
    setState(77);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 34634616274944) != 0))) {
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

hawkParser::DoWhileStmtContext* hawkParser::StmtContext::doWhileStmt() {
  return getRuleContext<hawkParser::DoWhileStmtContext>(0);
}

hawkParser::ForRangeStmtContext* hawkParser::StmtContext::forRangeStmt() {
  return getRuleContext<hawkParser::ForRangeStmtContext>(0);
}

hawkParser::ForEachStmtContext* hawkParser::StmtContext::forEachStmt() {
  return getRuleContext<hawkParser::ForEachStmtContext>(0);
}

hawkParser::StructContext* hawkParser::StmtContext::struct_() {
  return getRuleContext<hawkParser::StructContext>(0);
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


hawkParser::StmtContext* hawkParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 10, hawkParser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(89);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(79);
      functionStmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(80);
      ifStmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(81);
      whileStmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(82);
      doWhileStmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(83);
      forRangeStmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(84);
      forEachStmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(85);
      struct_();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(86);
      trueStmt();
      setState(87);
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

std::vector<hawkParser::ExprContext *> hawkParser::TrueStmtContext::expr() {
  return getRuleContexts<hawkParser::ExprContext>();
}

hawkParser::ExprContext* hawkParser::TrueStmtContext::expr(size_t i) {
  return getRuleContext<hawkParser::ExprContext>(i);
}

hawkParser::AssignOpContext* hawkParser::TrueStmtContext::assignOp() {
  return getRuleContext<hawkParser::AssignOpContext>(0);
}

tree::TerminalNode* hawkParser::TrueStmtContext::KSTATIC() {
  return getToken(hawkParser::KSTATIC, 0);
}

std::vector<tree::TerminalNode *> hawkParser::TrueStmtContext::KCONST() {
  return getTokens(hawkParser::KCONST);
}

tree::TerminalNode* hawkParser::TrueStmtContext::KCONST(size_t i) {
  return getToken(hawkParser::KCONST, i);
}

std::vector<tree::TerminalNode *> hawkParser::TrueStmtContext::ID() {
  return getTokens(hawkParser::ID);
}

tree::TerminalNode* hawkParser::TrueStmtContext::ID(size_t i) {
  return getToken(hawkParser::ID, i);
}

tree::TerminalNode* hawkParser::TrueStmtContext::KINC() {
  return getToken(hawkParser::KINC, 0);
}

tree::TerminalNode* hawkParser::TrueStmtContext::KDEC() {
  return getToken(hawkParser::KDEC, 0);
}

std::vector<hawkParser::TypeContext *> hawkParser::TrueStmtContext::type() {
  return getRuleContexts<hawkParser::TypeContext>();
}

hawkParser::TypeContext* hawkParser::TrueStmtContext::type(size_t i) {
  return getRuleContext<hawkParser::TypeContext>(i);
}

tree::TerminalNode* hawkParser::TrueStmtContext::LPAREN() {
  return getToken(hawkParser::LPAREN, 0);
}

tree::TerminalNode* hawkParser::TrueStmtContext::RPAREN() {
  return getToken(hawkParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> hawkParser::TrueStmtContext::COMMA() {
  return getTokens(hawkParser::COMMA);
}

tree::TerminalNode* hawkParser::TrueStmtContext::COMMA(size_t i) {
  return getToken(hawkParser::COMMA, i);
}


size_t hawkParser::TrueStmtContext::getRuleIndex() const {
  return hawkParser::RuleTrueStmt;
}


hawkParser::TrueStmtContext* hawkParser::trueStmt() {
  TrueStmtContext *_localctx = _tracker.createInstance<TrueStmtContext>(_ctx, getState());
  enterRule(_localctx, 12, hawkParser::RuleTrueStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(133);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(92);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == hawkParser::KSTATIC) {
        setState(91);
        match(hawkParser::KSTATIC);
      }
      setState(95);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == hawkParser::KCONST) {
        setState(94);
        match(hawkParser::KCONST);
      }
      setState(97);
      expr(0);
      setState(98);
      assignOp();
      setState(99);
      expr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(101);
      match(hawkParser::ID);
      setState(102);
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
      setState(104);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == hawkParser::KCONST) {
        setState(103);
        match(hawkParser::KCONST);
      }
      setState(106);
      type();
      setState(107);
      antlrcpp::downCast<TrueStmtContext *>(_localctx)->ret = match(hawkParser::ID);
      setState(108);
      match(hawkParser::LPAREN);
      setState(126);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 281474976710686) != 0)) {
        setState(110);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == hawkParser::KCONST) {
          setState(109);
          match(hawkParser::KCONST);
        }
        setState(112);
        type();
        setState(113);
        match(hawkParser::ID);
        setState(123);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == hawkParser::COMMA) {
          setState(114);
          match(hawkParser::COMMA);
          setState(116);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == hawkParser::KCONST) {
            setState(115);
            match(hawkParser::KCONST);
          }
          setState(118);
          type();
          setState(119);
          match(hawkParser::ID);
          setState(125);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(128);
      match(hawkParser::RPAREN);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(130);
      _la = _input->LA(1);
      if (!(_la == hawkParser::KINC

      || _la == hawkParser::KDEC)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(131);
      match(hawkParser::ID);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(132);
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

//----------------- SubscriptExprContext ------------------------------------------------------------------

tree::TerminalNode* hawkParser::SubscriptExprContext::LBRACKET() {
  return getToken(hawkParser::LBRACKET, 0);
}

tree::TerminalNode* hawkParser::SubscriptExprContext::RBRACKET() {
  return getToken(hawkParser::RBRACKET, 0);
}

hawkParser::ExprContext* hawkParser::SubscriptExprContext::expr() {
  return getRuleContext<hawkParser::ExprContext>(0);
}

hawkParser::NumberContext* hawkParser::SubscriptExprContext::number() {
  return getRuleContext<hawkParser::NumberContext>(0);
}

hawkParser::SubscriptExprContext::SubscriptExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- FuncCallExprContext ------------------------------------------------------------------

tree::TerminalNode* hawkParser::FuncCallExprContext::LPAREN() {
  return getToken(hawkParser::LPAREN, 0);
}

tree::TerminalNode* hawkParser::FuncCallExprContext::RPAREN() {
  return getToken(hawkParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> hawkParser::FuncCallExprContext::ID() {
  return getTokens(hawkParser::ID);
}

tree::TerminalNode* hawkParser::FuncCallExprContext::ID(size_t i) {
  return getToken(hawkParser::ID, i);
}

std::vector<tree::TerminalNode *> hawkParser::FuncCallExprContext::COMMA() {
  return getTokens(hawkParser::COMMA);
}

tree::TerminalNode* hawkParser::FuncCallExprContext::COMMA(size_t i) {
  return getToken(hawkParser::COMMA, i);
}

hawkParser::FuncCallExprContext::FuncCallExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- AddrExprContext ------------------------------------------------------------------

tree::TerminalNode* hawkParser::AddrExprContext::KBAND() {
  return getToken(hawkParser::KBAND, 0);
}

hawkParser::ExprContext* hawkParser::AddrExprContext::expr() {
  return getRuleContext<hawkParser::ExprContext>(0);
}

hawkParser::AddrExprContext::AddrExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- XorExprContext ------------------------------------------------------------------

std::vector<hawkParser::ExprContext *> hawkParser::XorExprContext::expr() {
  return getRuleContexts<hawkParser::ExprContext>();
}

hawkParser::ExprContext* hawkParser::XorExprContext::expr(size_t i) {
  return getRuleContext<hawkParser::ExprContext>(i);
}

tree::TerminalNode* hawkParser::XorExprContext::KXOR() {
  return getToken(hawkParser::KXOR, 0);
}

hawkParser::XorExprContext::XorExprContext(ExprContext *ctx) { copyFrom(ctx); }


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


//----------------- UnaryExprContext ------------------------------------------------------------------

hawkParser::ExprContext* hawkParser::UnaryExprContext::expr() {
  return getRuleContext<hawkParser::ExprContext>(0);
}

tree::TerminalNode* hawkParser::UnaryExprContext::KADD() {
  return getToken(hawkParser::KADD, 0);
}

tree::TerminalNode* hawkParser::UnaryExprContext::KSUB() {
  return getToken(hawkParser::KSUB, 0);
}

hawkParser::UnaryExprContext::UnaryExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- LOrExprContext ------------------------------------------------------------------

std::vector<hawkParser::ExprContext *> hawkParser::LOrExprContext::expr() {
  return getRuleContexts<hawkParser::ExprContext>();
}

hawkParser::ExprContext* hawkParser::LOrExprContext::expr(size_t i) {
  return getRuleContext<hawkParser::ExprContext>(i);
}

tree::TerminalNode* hawkParser::LOrExprContext::KOR() {
  return getToken(hawkParser::KOR, 0);
}

hawkParser::LOrExprContext::LOrExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- TernaryExprContext ------------------------------------------------------------------

std::vector<hawkParser::ExprContext *> hawkParser::TernaryExprContext::expr() {
  return getRuleContexts<hawkParser::ExprContext>();
}

hawkParser::ExprContext* hawkParser::TernaryExprContext::expr(size_t i) {
  return getRuleContext<hawkParser::ExprContext>(i);
}

tree::TerminalNode* hawkParser::TernaryExprContext::KQUESTION() {
  return getToken(hawkParser::KQUESTION, 0);
}

tree::TerminalNode* hawkParser::TernaryExprContext::KCOLON() {
  return getToken(hawkParser::KCOLON, 0);
}

hawkParser::TernaryExprContext::TernaryExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- PostfixExprContext ------------------------------------------------------------------

hawkParser::ExprContext* hawkParser::PostfixExprContext::expr() {
  return getRuleContext<hawkParser::ExprContext>(0);
}

tree::TerminalNode* hawkParser::PostfixExprContext::KINC() {
  return getToken(hawkParser::KINC, 0);
}

tree::TerminalNode* hawkParser::PostfixExprContext::KDEC() {
  return getToken(hawkParser::KDEC, 0);
}

hawkParser::PostfixExprContext::PostfixExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- RelExprContext ------------------------------------------------------------------

std::vector<hawkParser::ExprContext *> hawkParser::RelExprContext::expr() {
  return getRuleContexts<hawkParser::ExprContext>();
}

hawkParser::ExprContext* hawkParser::RelExprContext::expr(size_t i) {
  return getRuleContext<hawkParser::ExprContext>(i);
}

tree::TerminalNode* hawkParser::RelExprContext::KL() {
  return getToken(hawkParser::KL, 0);
}

tree::TerminalNode* hawkParser::RelExprContext::KLE() {
  return getToken(hawkParser::KLE, 0);
}

tree::TerminalNode* hawkParser::RelExprContext::KG() {
  return getToken(hawkParser::KG, 0);
}

tree::TerminalNode* hawkParser::RelExprContext::KGE() {
  return getToken(hawkParser::KGE, 0);
}

hawkParser::RelExprContext::RelExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- BitAndExprContext ------------------------------------------------------------------

std::vector<hawkParser::ExprContext *> hawkParser::BitAndExprContext::expr() {
  return getRuleContexts<hawkParser::ExprContext>();
}

hawkParser::ExprContext* hawkParser::BitAndExprContext::expr(size_t i) {
  return getRuleContext<hawkParser::ExprContext>(i);
}

tree::TerminalNode* hawkParser::BitAndExprContext::KBAND() {
  return getToken(hawkParser::KBAND, 0);
}

hawkParser::BitAndExprContext::BitAndExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- BraceExprContext ------------------------------------------------------------------

tree::TerminalNode* hawkParser::BraceExprContext::LBRACE() {
  return getToken(hawkParser::LBRACE, 0);
}

tree::TerminalNode* hawkParser::BraceExprContext::RBRACE() {
  return getToken(hawkParser::RBRACE, 0);
}

std::vector<hawkParser::ExprContext *> hawkParser::BraceExprContext::expr() {
  return getRuleContexts<hawkParser::ExprContext>();
}

hawkParser::ExprContext* hawkParser::BraceExprContext::expr(size_t i) {
  return getRuleContext<hawkParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> hawkParser::BraceExprContext::COMMA() {
  return getTokens(hawkParser::COMMA);
}

tree::TerminalNode* hawkParser::BraceExprContext::COMMA(size_t i) {
  return getToken(hawkParser::COMMA, i);
}

hawkParser::BraceExprContext::BraceExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- AccessExprContext ------------------------------------------------------------------

hawkParser::ExprContext* hawkParser::AccessExprContext::expr() {
  return getRuleContext<hawkParser::ExprContext>(0);
}

tree::TerminalNode* hawkParser::AccessExprContext::DOT() {
  return getToken(hawkParser::DOT, 0);
}

tree::TerminalNode* hawkParser::AccessExprContext::ID() {
  return getToken(hawkParser::ID, 0);
}

hawkParser::AccessExprContext::AccessExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- AddSubExprContext ------------------------------------------------------------------

std::vector<hawkParser::ExprContext *> hawkParser::AddSubExprContext::expr() {
  return getRuleContexts<hawkParser::ExprContext>();
}

hawkParser::ExprContext* hawkParser::AddSubExprContext::expr(size_t i) {
  return getRuleContext<hawkParser::ExprContext>(i);
}

tree::TerminalNode* hawkParser::AddSubExprContext::KADD() {
  return getToken(hawkParser::KADD, 0);
}

tree::TerminalNode* hawkParser::AddSubExprContext::KSUB() {
  return getToken(hawkParser::KSUB, 0);
}

hawkParser::AddSubExprContext::AddSubExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- PtrAccessExprContext ------------------------------------------------------------------

hawkParser::ExprContext* hawkParser::PtrAccessExprContext::expr() {
  return getRuleContext<hawkParser::ExprContext>(0);
}

tree::TerminalNode* hawkParser::PtrAccessExprContext::ARROW() {
  return getToken(hawkParser::ARROW, 0);
}

tree::TerminalNode* hawkParser::PtrAccessExprContext::ID() {
  return getToken(hawkParser::ID, 0);
}

hawkParser::PtrAccessExprContext::PtrAccessExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- LAndExprContext ------------------------------------------------------------------

std::vector<hawkParser::ExprContext *> hawkParser::LAndExprContext::expr() {
  return getRuleContexts<hawkParser::ExprContext>();
}

hawkParser::ExprContext* hawkParser::LAndExprContext::expr(size_t i) {
  return getRuleContext<hawkParser::ExprContext>(i);
}

tree::TerminalNode* hawkParser::LAndExprContext::KAND() {
  return getToken(hawkParser::KAND, 0);
}

hawkParser::LAndExprContext::LAndExprContext(ExprContext *ctx) { copyFrom(ctx); }


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


//----------------- NumExprContext ------------------------------------------------------------------

hawkParser::NumberContext* hawkParser::NumExprContext::number() {
  return getRuleContext<hawkParser::NumberContext>(0);
}

hawkParser::NumExprContext::NumExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- ShiftExprContext ------------------------------------------------------------------

std::vector<hawkParser::ExprContext *> hawkParser::ShiftExprContext::expr() {
  return getRuleContexts<hawkParser::ExprContext>();
}

hawkParser::ExprContext* hawkParser::ShiftExprContext::expr(size_t i) {
  return getRuleContext<hawkParser::ExprContext>(i);
}

tree::TerminalNode* hawkParser::ShiftExprContext::KSHL() {
  return getToken(hawkParser::KSHL, 0);
}

tree::TerminalNode* hawkParser::ShiftExprContext::KSHR() {
  return getToken(hawkParser::KSHR, 0);
}

hawkParser::ShiftExprContext::ShiftExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- PrefixExprContext ------------------------------------------------------------------

hawkParser::ExprContext* hawkParser::PrefixExprContext::expr() {
  return getRuleContext<hawkParser::ExprContext>(0);
}

tree::TerminalNode* hawkParser::PrefixExprContext::KINC() {
  return getToken(hawkParser::KINC, 0);
}

tree::TerminalNode* hawkParser::PrefixExprContext::KDEC() {
  return getToken(hawkParser::KDEC, 0);
}

hawkParser::PrefixExprContext::PrefixExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- VarExprContext ------------------------------------------------------------------

tree::TerminalNode* hawkParser::VarExprContext::ID() {
  return getToken(hawkParser::ID, 0);
}

hawkParser::TypeContext* hawkParser::VarExprContext::type() {
  return getRuleContext<hawkParser::TypeContext>(0);
}

tree::TerminalNode* hawkParser::VarExprContext::LBRACKET() {
  return getToken(hawkParser::LBRACKET, 0);
}

tree::TerminalNode* hawkParser::VarExprContext::RBRACKET() {
  return getToken(hawkParser::RBRACKET, 0);
}

hawkParser::NumberContext* hawkParser::VarExprContext::number() {
  return getRuleContext<hawkParser::NumberContext>(0);
}

hawkParser::VarExprContext::VarExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- EqExprContext ------------------------------------------------------------------

std::vector<hawkParser::ExprContext *> hawkParser::EqExprContext::expr() {
  return getRuleContexts<hawkParser::ExprContext>();
}

hawkParser::ExprContext* hawkParser::EqExprContext::expr(size_t i) {
  return getRuleContext<hawkParser::ExprContext>(i);
}

tree::TerminalNode* hawkParser::EqExprContext::KEQ() {
  return getToken(hawkParser::KEQ, 0);
}

tree::TerminalNode* hawkParser::EqExprContext::KNE() {
  return getToken(hawkParser::KNE, 0);
}

hawkParser::EqExprContext::EqExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- BitOrExprContext ------------------------------------------------------------------

std::vector<hawkParser::ExprContext *> hawkParser::BitOrExprContext::expr() {
  return getRuleContexts<hawkParser::ExprContext>();
}

hawkParser::ExprContext* hawkParser::BitOrExprContext::expr(size_t i) {
  return getRuleContext<hawkParser::ExprContext>(i);
}

tree::TerminalNode* hawkParser::BitOrExprContext::KBOR() {
  return getToken(hawkParser::KBOR, 0);
}

hawkParser::BitOrExprContext::BitOrExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- NotExprContext ------------------------------------------------------------------

std::vector<hawkParser::ExprContext *> hawkParser::NotExprContext::expr() {
  return getRuleContexts<hawkParser::ExprContext>();
}

hawkParser::ExprContext* hawkParser::NotExprContext::expr(size_t i) {
  return getRuleContext<hawkParser::ExprContext>(i);
}

tree::TerminalNode* hawkParser::NotExprContext::KNOT() {
  return getToken(hawkParser::KNOT, 0);
}

tree::TerminalNode* hawkParser::NotExprContext::KBNOT() {
  return getToken(hawkParser::KBNOT, 0);
}

hawkParser::NotExprContext::NotExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- DerefExprContext ------------------------------------------------------------------

tree::TerminalNode* hawkParser::DerefExprContext::KMUL() {
  return getToken(hawkParser::KMUL, 0);
}

hawkParser::ExprContext* hawkParser::DerefExprContext::expr() {
  return getRuleContext<hawkParser::ExprContext>(0);
}

hawkParser::DerefExprContext::DerefExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- MulDivExprContext ------------------------------------------------------------------

std::vector<hawkParser::ExprContext *> hawkParser::MulDivExprContext::expr() {
  return getRuleContexts<hawkParser::ExprContext>();
}

hawkParser::ExprContext* hawkParser::MulDivExprContext::expr(size_t i) {
  return getRuleContext<hawkParser::ExprContext>(i);
}

tree::TerminalNode* hawkParser::MulDivExprContext::KMUL() {
  return getToken(hawkParser::KMUL, 0);
}

tree::TerminalNode* hawkParser::MulDivExprContext::KDIV() {
  return getToken(hawkParser::KDIV, 0);
}

tree::TerminalNode* hawkParser::MulDivExprContext::KMOD() {
  return getToken(hawkParser::KMOD, 0);
}

hawkParser::MulDivExprContext::MulDivExprContext(ExprContext *ctx) { copyFrom(ctx); }



hawkParser::ExprContext* hawkParser::expr() {
   return expr(0);
}

hawkParser::ExprContext* hawkParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  hawkParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  hawkParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, hawkParser::RuleExpr, precedence);

    size_t _la = 0;

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
    setState(185);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(136);
      match(hawkParser::LPAREN);
      setState(137);
      expr(0);
      setState(138);
      match(hawkParser::RPAREN);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<FuncCallExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(140);
      antlrcpp::downCast<FuncCallExprContext *>(_localctx)->name = match(hawkParser::ID);
      setState(141);
      match(hawkParser::LPAREN);
      setState(150);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == hawkParser::ID) {
        setState(142);
        match(hawkParser::ID);
        setState(147);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == hawkParser::COMMA) {
          setState(143);
          match(hawkParser::COMMA);
          setState(144);
          match(hawkParser::ID);
          setState(149);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(152);
      match(hawkParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PrefixExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(153);
      antlrcpp::downCast<PrefixExprContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == hawkParser::KINC

      || _la == hawkParser::KDEC)) {
        antlrcpp::downCast<PrefixExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(154);
      antlrcpp::downCast<PrefixExprContext *>(_localctx)->name = expr(20);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<UnaryExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(155);
      antlrcpp::downCast<UnaryExprContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == hawkParser::KADD

      || _la == hawkParser::KSUB)) {
        antlrcpp::downCast<UnaryExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(156);
      antlrcpp::downCast<UnaryExprContext *>(_localctx)->name = expr(19);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<AddrExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(157);
      match(hawkParser::KBAND);
      setState(158);
      expr(17);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<DerefExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(159);
      match(hawkParser::KMUL);
      setState(160);
      expr(16);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<VarExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(162);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 30) != 0)) {
        setState(161);
        type();
      }
      setState(164);
      match(hawkParser::ID);
      setState(170);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
      case 1: {
        setState(165);
        match(hawkParser::LBRACKET);
        setState(167);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 8070450532247928832) != 0)) {
          setState(166);
          number();
        }
        setState(169);
        match(hawkParser::RBRACKET);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<BraceExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(172);
      match(hawkParser::LBRACE);
      setState(181);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 8647016837676532990) != 0)) {
        setState(173);
        expr(0);
        setState(178);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == hawkParser::COMMA) {
          setState(174);
          match(hawkParser::COMMA);
          setState(175);
          expr(0);
          setState(180);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(183);
      match(hawkParser::RBRACE);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<NumExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(184);
      number();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(245);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(243);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<NotExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(187);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(188);
          antlrcpp::downCast<NotExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == hawkParser::KBNOT

          || _la == hawkParser::KNOT)) {
            antlrcpp::downCast<NotExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(189);
          antlrcpp::downCast<NotExprContext *>(_localctx)->right = expr(18);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MulDivExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(190);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(191);
          antlrcpp::downCast<MulDivExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 896) != 0))) {
            antlrcpp::downCast<MulDivExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(192);
          antlrcpp::downCast<MulDivExprContext *>(_localctx)->right = expr(16);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(193);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(194);
          antlrcpp::downCast<AddSubExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == hawkParser::KADD

          || _la == hawkParser::KSUB)) {
            antlrcpp::downCast<AddSubExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(195);
          antlrcpp::downCast<AddSubExprContext *>(_localctx)->right = expr(15);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<ShiftExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(196);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(197);
          antlrcpp::downCast<ShiftExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == hawkParser::KSHL

          || _la == hawkParser::KSHR)) {
            antlrcpp::downCast<ShiftExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(198);
          antlrcpp::downCast<ShiftExprContext *>(_localctx)->right = expr(14);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<RelExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(199);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(200);
          antlrcpp::downCast<RelExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 32985348833280) != 0))) {
            antlrcpp::downCast<RelExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(201);
          antlrcpp::downCast<RelExprContext *>(_localctx)->right = expr(13);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<EqExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(202);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(203);
          antlrcpp::downCast<EqExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == hawkParser::KEQ

          || _la == hawkParser::KNE)) {
            antlrcpp::downCast<EqExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(204);
          antlrcpp::downCast<EqExprContext *>(_localctx)->right = expr(12);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<BitAndExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(205);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(206);
          antlrcpp::downCast<BitAndExprContext *>(_localctx)->op = match(hawkParser::KBAND);
          setState(207);
          antlrcpp::downCast<BitAndExprContext *>(_localctx)->right = expr(11);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<XorExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(208);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(209);
          antlrcpp::downCast<XorExprContext *>(_localctx)->op = match(hawkParser::KXOR);
          setState(210);
          antlrcpp::downCast<XorExprContext *>(_localctx)->right = expr(10);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<BitOrExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(211);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(212);
          antlrcpp::downCast<BitOrExprContext *>(_localctx)->op = match(hawkParser::KBOR);
          setState(213);
          antlrcpp::downCast<BitOrExprContext *>(_localctx)->right = expr(9);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<LAndExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(214);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(215);
          antlrcpp::downCast<LAndExprContext *>(_localctx)->op = match(hawkParser::KAND);
          setState(216);
          antlrcpp::downCast<LAndExprContext *>(_localctx)->right = expr(8);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<LOrExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(217);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(218);
          antlrcpp::downCast<LOrExprContext *>(_localctx)->op = match(hawkParser::KOR);
          setState(219);
          antlrcpp::downCast<LOrExprContext *>(_localctx)->right = expr(7);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<TernaryExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(220);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(221);
          match(hawkParser::KQUESTION);
          setState(222);
          expr(0);
          setState(223);
          match(hawkParser::KCOLON);
          setState(224);
          expr(5);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<RelationalExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(226);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(227);
          cond();
          setState(228);
          expr(4);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<PostfixExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->name = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(230);

          if (!(precpred(_ctx, 25))) throw FailedPredicateException(this, "precpred(_ctx, 25)");
          setState(231);
          antlrcpp::downCast<PostfixExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == hawkParser::KINC

          || _la == hawkParser::KDEC)) {
            antlrcpp::downCast<PostfixExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<SubscriptExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(232);

          if (!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
          setState(233);
          match(hawkParser::LBRACKET);
          setState(234);
          antlrcpp::downCast<SubscriptExprContext *>(_localctx)->num = number();
          setState(235);
          match(hawkParser::RBRACKET);
          break;
        }

        case 16: {
          auto newContext = _tracker.createInstance<AccessExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(237);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(238);
          match(hawkParser::DOT);
          setState(239);
          match(hawkParser::ID);
          break;
        }

        case 17: {
          auto newContext = _tracker.createInstance<PtrAccessExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(240);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(241);
          match(hawkParser::ARROW);
          setState(242);
          match(hawkParser::ID);
          break;
        }

        default:
          break;
        } 
      }
      setState(247);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
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

std::vector<tree::TerminalNode *> hawkParser::FunctionStmtContext::ID() {
  return getTokens(hawkParser::ID);
}

tree::TerminalNode* hawkParser::FunctionStmtContext::ID(size_t i) {
  return getToken(hawkParser::ID, i);
}

std::vector<tree::TerminalNode *> hawkParser::FunctionStmtContext::KCONST() {
  return getTokens(hawkParser::KCONST);
}

tree::TerminalNode* hawkParser::FunctionStmtContext::KCONST(size_t i) {
  return getToken(hawkParser::KCONST, i);
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


hawkParser::FunctionStmtContext* hawkParser::functionStmt() {
  FunctionStmtContext *_localctx = _tracker.createInstance<FunctionStmtContext>(_ctx, getState());
  enterRule(_localctx, 16, hawkParser::RuleFunctionStmt);
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
    setState(249);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == hawkParser::KCONST) {
      setState(248);
      match(hawkParser::KCONST);
    }
    setState(251);
    type();
    setState(252);
    antlrcpp::downCast<FunctionStmtContext *>(_localctx)->ret = match(hawkParser::ID);
    setState(253);
    match(hawkParser::LPAREN);
    setState(271);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 281474976710686) != 0)) {
      setState(255);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == hawkParser::KCONST) {
        setState(254);
        match(hawkParser::KCONST);
      }
      setState(257);
      type();
      setState(258);
      match(hawkParser::ID);
      setState(268);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == hawkParser::COMMA) {
        setState(259);
        match(hawkParser::COMMA);
        setState(261);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == hawkParser::KCONST) {
          setState(260);
          match(hawkParser::KCONST);
        }
        setState(263);
        type();
        setState(264);
        match(hawkParser::ID);
        setState(270);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(273);
    match(hawkParser::RPAREN);
    setState(274);
    match(hawkParser::LBRACE);
    setState(278);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8680653097393456382) != 0)) {
      setState(275);
      stmt();
      setState(280);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(281);
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


hawkParser::IfStmtContext* hawkParser::ifStmt() {
  IfStmtContext *_localctx = _tracker.createInstance<IfStmtContext>(_ctx, getState());
  enterRule(_localctx, 18, hawkParser::RuleIfStmt);

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
    setState(283);
    ifBlock();
    setState(287);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(284);
        elifBlock(); 
      }
      setState(289);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    }
    setState(291);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      setState(290);
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


hawkParser::IfBlockContext* hawkParser::ifBlock() {
  IfBlockContext *_localctx = _tracker.createInstance<IfBlockContext>(_ctx, getState());
  enterRule(_localctx, 20, hawkParser::RuleIfBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(312);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(293);
      match(hawkParser::KIF);
      setState(294);
      match(hawkParser::LPAREN);
      setState(295);
      expr(0);
      setState(296);
      match(hawkParser::RPAREN);
      setState(297);
      match(hawkParser::LBRACE);
      setState(301);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 8680653097393456382) != 0)) {
        setState(298);
        stmt();
        setState(303);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(304);
      match(hawkParser::RBRACE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(306);
      match(hawkParser::KIF);
      setState(307);
      match(hawkParser::LPAREN);
      setState(308);
      expr(0);
      setState(309);
      match(hawkParser::RPAREN);
      setState(310);
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


hawkParser::ElifBlockContext* hawkParser::elifBlock() {
  ElifBlockContext *_localctx = _tracker.createInstance<ElifBlockContext>(_ctx, getState());
  enterRule(_localctx, 22, hawkParser::RuleElifBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(335);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(314);
      match(hawkParser::KELSE);
      setState(315);
      match(hawkParser::KIF);
      setState(316);
      match(hawkParser::LPAREN);
      setState(317);
      expr(0);
      setState(318);
      match(hawkParser::RPAREN);
      setState(319);
      match(hawkParser::LBRACE);
      setState(323);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 8680653097393456382) != 0)) {
        setState(320);
        stmt();
        setState(325);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(326);
      match(hawkParser::RBRACE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(328);
      match(hawkParser::KELSE);
      setState(329);
      match(hawkParser::KIF);
      setState(330);
      match(hawkParser::LPAREN);
      setState(331);
      expr(0);
      setState(332);
      match(hawkParser::RPAREN);
      setState(333);
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


hawkParser::ElseBlockContext* hawkParser::elseBlock() {
  ElseBlockContext *_localctx = _tracker.createInstance<ElseBlockContext>(_ctx, getState());
  enterRule(_localctx, 24, hawkParser::RuleElseBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(348);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(337);
      match(hawkParser::KELSE);
      setState(338);
      match(hawkParser::LBRACE);
      setState(342);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 8680653097393456382) != 0)) {
        setState(339);
        stmt();
        setState(344);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(345);
      match(hawkParser::RBRACE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(346);
      match(hawkParser::KELSE);
      setState(347);
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


hawkParser::WhileStmtContext* hawkParser::whileStmt() {
  WhileStmtContext *_localctx = _tracker.createInstance<WhileStmtContext>(_ctx, getState());
  enterRule(_localctx, 26, hawkParser::RuleWhileStmt);
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
    setState(350);
    match(hawkParser::KWHILE);
    setState(351);
    match(hawkParser::LPAREN);
    setState(352);
    expr(0);
    setState(353);
    match(hawkParser::RPAREN);
    setState(354);
    match(hawkParser::LBRACE);
    setState(358);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8680653097393456382) != 0)) {
      setState(355);
      stmt();
      setState(360);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(361);
    match(hawkParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForRangeStmtContext ------------------------------------------------------------------

hawkParser::ForRangeStmtContext::ForRangeStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hawkParser::ForRangeStmtContext::KFOR() {
  return getToken(hawkParser::KFOR, 0);
}

tree::TerminalNode* hawkParser::ForRangeStmtContext::LPAREN() {
  return getToken(hawkParser::LPAREN, 0);
}

std::vector<tree::TerminalNode *> hawkParser::ForRangeStmtContext::SEMICOLON() {
  return getTokens(hawkParser::SEMICOLON);
}

tree::TerminalNode* hawkParser::ForRangeStmtContext::SEMICOLON(size_t i) {
  return getToken(hawkParser::SEMICOLON, i);
}

tree::TerminalNode* hawkParser::ForRangeStmtContext::RPAREN() {
  return getToken(hawkParser::RPAREN, 0);
}

tree::TerminalNode* hawkParser::ForRangeStmtContext::LBRACE() {
  return getToken(hawkParser::LBRACE, 0);
}

tree::TerminalNode* hawkParser::ForRangeStmtContext::RBRACE() {
  return getToken(hawkParser::RBRACE, 0);
}

std::vector<hawkParser::TrueStmtContext *> hawkParser::ForRangeStmtContext::trueStmt() {
  return getRuleContexts<hawkParser::TrueStmtContext>();
}

hawkParser::TrueStmtContext* hawkParser::ForRangeStmtContext::trueStmt(size_t i) {
  return getRuleContext<hawkParser::TrueStmtContext>(i);
}

hawkParser::ExprContext* hawkParser::ForRangeStmtContext::expr() {
  return getRuleContext<hawkParser::ExprContext>(0);
}

std::vector<hawkParser::StmtContext *> hawkParser::ForRangeStmtContext::stmt() {
  return getRuleContexts<hawkParser::StmtContext>();
}

hawkParser::StmtContext* hawkParser::ForRangeStmtContext::stmt(size_t i) {
  return getRuleContext<hawkParser::StmtContext>(i);
}


size_t hawkParser::ForRangeStmtContext::getRuleIndex() const {
  return hawkParser::RuleForRangeStmt;
}


hawkParser::ForRangeStmtContext* hawkParser::forRangeStmt() {
  ForRangeStmtContext *_localctx = _tracker.createInstance<ForRangeStmtContext>(_ctx, getState());
  enterRule(_localctx, 28, hawkParser::RuleForRangeStmt);
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
    setState(363);
    match(hawkParser::KFOR);
    setState(364);
    match(hawkParser::LPAREN);
    setState(365);
    antlrcpp::downCast<ForRangeStmtContext *>(_localctx)->init = trueStmt();
    setState(366);
    match(hawkParser::SEMICOLON);
    setState(367);
    antlrcpp::downCast<ForRangeStmtContext *>(_localctx)->test = expr(0);
    setState(368);
    match(hawkParser::SEMICOLON);
    setState(369);
    antlrcpp::downCast<ForRangeStmtContext *>(_localctx)->inc = trueStmt();
    setState(370);
    match(hawkParser::RPAREN);
    setState(371);
    match(hawkParser::LBRACE);
    setState(375);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8680653097393456382) != 0)) {
      setState(372);
      stmt();
      setState(377);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(378);
    match(hawkParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForEachStmtContext ------------------------------------------------------------------

hawkParser::ForEachStmtContext::ForEachStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hawkParser::ForEachStmtContext::KFOR() {
  return getToken(hawkParser::KFOR, 0);
}

tree::TerminalNode* hawkParser::ForEachStmtContext::LPAREN() {
  return getToken(hawkParser::LPAREN, 0);
}

hawkParser::TypeContext* hawkParser::ForEachStmtContext::type() {
  return getRuleContext<hawkParser::TypeContext>(0);
}

tree::TerminalNode* hawkParser::ForEachStmtContext::KCOLON() {
  return getToken(hawkParser::KCOLON, 0);
}

tree::TerminalNode* hawkParser::ForEachStmtContext::RPAREN() {
  return getToken(hawkParser::RPAREN, 0);
}

tree::TerminalNode* hawkParser::ForEachStmtContext::LBRACE() {
  return getToken(hawkParser::LBRACE, 0);
}

tree::TerminalNode* hawkParser::ForEachStmtContext::RBRACE() {
  return getToken(hawkParser::RBRACE, 0);
}

tree::TerminalNode* hawkParser::ForEachStmtContext::ID() {
  return getToken(hawkParser::ID, 0);
}

hawkParser::ExprContext* hawkParser::ForEachStmtContext::expr() {
  return getRuleContext<hawkParser::ExprContext>(0);
}

tree::TerminalNode* hawkParser::ForEachStmtContext::KCONST() {
  return getToken(hawkParser::KCONST, 0);
}

std::vector<hawkParser::StmtContext *> hawkParser::ForEachStmtContext::stmt() {
  return getRuleContexts<hawkParser::StmtContext>();
}

hawkParser::StmtContext* hawkParser::ForEachStmtContext::stmt(size_t i) {
  return getRuleContext<hawkParser::StmtContext>(i);
}


size_t hawkParser::ForEachStmtContext::getRuleIndex() const {
  return hawkParser::RuleForEachStmt;
}


hawkParser::ForEachStmtContext* hawkParser::forEachStmt() {
  ForEachStmtContext *_localctx = _tracker.createInstance<ForEachStmtContext>(_ctx, getState());
  enterRule(_localctx, 30, hawkParser::RuleForEachStmt);
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
    setState(380);
    match(hawkParser::KFOR);
    setState(381);
    match(hawkParser::LPAREN);
    setState(383);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == hawkParser::KCONST) {
      setState(382);
      match(hawkParser::KCONST);
    }
    setState(385);
    type();
    setState(386);
    antlrcpp::downCast<ForEachStmtContext *>(_localctx)->it = match(hawkParser::ID);
    setState(387);
    match(hawkParser::KCOLON);
    setState(388);
    antlrcpp::downCast<ForEachStmtContext *>(_localctx)->var = expr(0);
    setState(389);
    match(hawkParser::RPAREN);
    setState(390);
    match(hawkParser::LBRACE);
    setState(394);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8680653097393456382) != 0)) {
      setState(391);
      stmt();
      setState(396);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(397);
    match(hawkParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoWhileStmtContext ------------------------------------------------------------------

hawkParser::DoWhileStmtContext::DoWhileStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hawkParser::DoWhileStmtContext::KDO() {
  return getToken(hawkParser::KDO, 0);
}

tree::TerminalNode* hawkParser::DoWhileStmtContext::LBRACE() {
  return getToken(hawkParser::LBRACE, 0);
}

tree::TerminalNode* hawkParser::DoWhileStmtContext::RBRACE() {
  return getToken(hawkParser::RBRACE, 0);
}

tree::TerminalNode* hawkParser::DoWhileStmtContext::KWHILE() {
  return getToken(hawkParser::KWHILE, 0);
}

tree::TerminalNode* hawkParser::DoWhileStmtContext::LPAREN() {
  return getToken(hawkParser::LPAREN, 0);
}

hawkParser::ExprContext* hawkParser::DoWhileStmtContext::expr() {
  return getRuleContext<hawkParser::ExprContext>(0);
}

tree::TerminalNode* hawkParser::DoWhileStmtContext::RPAREN() {
  return getToken(hawkParser::RPAREN, 0);
}

tree::TerminalNode* hawkParser::DoWhileStmtContext::SEMICOLON() {
  return getToken(hawkParser::SEMICOLON, 0);
}

std::vector<hawkParser::StmtContext *> hawkParser::DoWhileStmtContext::stmt() {
  return getRuleContexts<hawkParser::StmtContext>();
}

hawkParser::StmtContext* hawkParser::DoWhileStmtContext::stmt(size_t i) {
  return getRuleContext<hawkParser::StmtContext>(i);
}


size_t hawkParser::DoWhileStmtContext::getRuleIndex() const {
  return hawkParser::RuleDoWhileStmt;
}


hawkParser::DoWhileStmtContext* hawkParser::doWhileStmt() {
  DoWhileStmtContext *_localctx = _tracker.createInstance<DoWhileStmtContext>(_ctx, getState());
  enterRule(_localctx, 32, hawkParser::RuleDoWhileStmt);
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
    setState(399);
    match(hawkParser::KDO);
    setState(400);
    match(hawkParser::LBRACE);
    setState(404);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8680653097393456382) != 0)) {
      setState(401);
      stmt();
      setState(406);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(407);
    match(hawkParser::RBRACE);
    setState(408);
    match(hawkParser::KWHILE);
    setState(409);
    match(hawkParser::LPAREN);
    setState(410);
    expr(0);
    setState(411);
    match(hawkParser::RPAREN);
    setState(412);
    match(hawkParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructContext ------------------------------------------------------------------

hawkParser::StructContext::StructContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hawkParser::StructContext::KSTRUCT() {
  return getToken(hawkParser::KSTRUCT, 0);
}

tree::TerminalNode* hawkParser::StructContext::ID() {
  return getToken(hawkParser::ID, 0);
}

tree::TerminalNode* hawkParser::StructContext::LBRACE() {
  return getToken(hawkParser::LBRACE, 0);
}

tree::TerminalNode* hawkParser::StructContext::RBRACE() {
  return getToken(hawkParser::RBRACE, 0);
}

tree::TerminalNode* hawkParser::StructContext::SEMICOLON() {
  return getToken(hawkParser::SEMICOLON, 0);
}

std::vector<hawkParser::StmtContext *> hawkParser::StructContext::stmt() {
  return getRuleContexts<hawkParser::StmtContext>();
}

hawkParser::StmtContext* hawkParser::StructContext::stmt(size_t i) {
  return getRuleContext<hawkParser::StmtContext>(i);
}


size_t hawkParser::StructContext::getRuleIndex() const {
  return hawkParser::RuleStruct;
}


hawkParser::StructContext* hawkParser::struct_() {
  StructContext *_localctx = _tracker.createInstance<StructContext>(_ctx, getState());
  enterRule(_localctx, 34, hawkParser::RuleStruct);
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
    setState(414);
    match(hawkParser::KSTRUCT);
    setState(415);
    match(hawkParser::ID);
    setState(416);
    match(hawkParser::LBRACE);
    setState(420);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8680653097393456382) != 0)) {
      setState(417);
      stmt();
      setState(422);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(423);
    match(hawkParser::RBRACE);
    setState(424);
    match(hawkParser::SEMICOLON);
   
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
    case 7: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool hawkParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 18);
    case 1: return precpred(_ctx, 15);
    case 2: return precpred(_ctx, 14);
    case 3: return precpred(_ctx, 13);
    case 4: return precpred(_ctx, 12);
    case 5: return precpred(_ctx, 11);
    case 6: return precpred(_ctx, 10);
    case 7: return precpred(_ctx, 9);
    case 8: return precpred(_ctx, 8);
    case 9: return precpred(_ctx, 7);
    case 10: return precpred(_ctx, 6);
    case 11: return precpred(_ctx, 5);
    case 12: return precpred(_ctx, 4);
    case 13: return precpred(_ctx, 25);
    case 14: return precpred(_ctx, 23);
    case 15: return precpred(_ctx, 22);
    case 16: return precpred(_ctx, 21);

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
