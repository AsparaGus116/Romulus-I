
// Generated from c:/Users/gusbr/Desktop/CodingShit/Romulus-I/Hawk/hawkParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  hawkParser : public antlr4::Parser {
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

  enum {
    RuleProgram = 0, RuleType = 1, RuleAssignOp = 2, RuleNumber = 3, RuleCond = 4, 
    RuleStmt = 5, RuleTrueStmt = 6, RuleExpr = 7, RuleFunctionStmt = 8, 
    RuleIfStmt = 9, RuleIfBlock = 10, RuleElifBlock = 11, RuleElseBlock = 12, 
    RuleWhileStmt = 13, RuleForRangeStmt = 14, RuleForEachStmt = 15, RuleDoWhileStmt = 16, 
    RuleStruct = 17
  };

  explicit hawkParser(antlr4::TokenStream *input);

  hawkParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~hawkParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class TypeContext;
  class AssignOpContext;
  class NumberContext;
  class CondContext;
  class StmtContext;
  class TrueStmtContext;
  class ExprContext;
  class FunctionStmtContext;
  class IfStmtContext;
  class IfBlockContext;
  class ElifBlockContext;
  class ElseBlockContext;
  class WhileStmtContext;
  class ForRangeStmtContext;
  class ForEachStmtContext;
  class DoWhileStmtContext;
  class StructContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

   
  };

  ProgramContext* program();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KBOOL();
    std::vector<antlr4::tree::TerminalNode *> KMUL();
    antlr4::tree::TerminalNode* KMUL(size_t i);
    antlr4::tree::TerminalNode *KINT();
    antlr4::tree::TerminalNode *KCHAR();
    antlr4::tree::TerminalNode *KVOID();

   
  };

  TypeContext* type();

  class  AssignOpContext : public antlr4::ParserRuleContext {
  public:
    AssignOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KASSIGN();
    antlr4::tree::TerminalNode *KADDASSIGN();
    antlr4::tree::TerminalNode *KSUBASSIGN();
    antlr4::tree::TerminalNode *KMULASSIGN();
    antlr4::tree::TerminalNode *KDIVASSIGN();
    antlr4::tree::TerminalNode *KMODASSIGN();
    antlr4::tree::TerminalNode *KANDASSIGN();
    antlr4::tree::TerminalNode *KORASSIGN();
    antlr4::tree::TerminalNode *KNOTASSIGN();
    antlr4::tree::TerminalNode *KXORASSIGN();
    antlr4::tree::TerminalNode *KSHLASSIGN();
    antlr4::tree::TerminalNode *KSHRASSIGN();

   
  };

  AssignOpContext* assignOp();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *HEX();
    antlr4::tree::TerminalNode *BIN();

   
  };

  NumberContext* number();

  class  CondContext : public antlr4::ParserRuleContext {
  public:
    CondContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEQ();
    antlr4::tree::TerminalNode *KNE();
    antlr4::tree::TerminalNode *KG();
    antlr4::tree::TerminalNode *KL();
    antlr4::tree::TerminalNode *KGE();
    antlr4::tree::TerminalNode *KLE();

   
  };

  CondContext* cond();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionStmtContext *functionStmt();
    IfStmtContext *ifStmt();
    WhileStmtContext *whileStmt();
    DoWhileStmtContext *doWhileStmt();
    ForRangeStmtContext *forRangeStmt();
    ForEachStmtContext *forEachStmt();
    StructContext *struct_();
    TrueStmtContext *trueStmt();
    antlr4::tree::TerminalNode *SEMICOLON();

   
  };

  StmtContext* stmt();

  class  TrueStmtContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *ret = nullptr;
    TrueStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    AssignOpContext *assignOp();
    antlr4::tree::TerminalNode *KSTATIC();
    std::vector<antlr4::tree::TerminalNode *> KCONST();
    antlr4::tree::TerminalNode* KCONST(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *KINC();
    antlr4::tree::TerminalNode *KDEC();
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  TrueStmtContext* trueStmt();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SubscriptExprContext : public ExprContext {
  public:
    SubscriptExprContext(ExprContext *ctx);

    hawkParser::ExprContext *left = nullptr;
    hawkParser::NumberContext *num = nullptr;
    antlr4::tree::TerminalNode *LBRACKET();
    antlr4::tree::TerminalNode *RBRACKET();
    ExprContext *expr();
    NumberContext *number();
  };

  class  FuncCallExprContext : public ExprContext {
  public:
    FuncCallExprContext(ExprContext *ctx);

    antlr4::Token *name = nullptr;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
  };

  class  AddrExprContext : public ExprContext {
  public:
    AddrExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *KBAND();
    ExprContext *expr();
  };

  class  XorExprContext : public ExprContext {
  public:
    XorExprContext(ExprContext *ctx);

    hawkParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    hawkParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *KXOR();
  };

  class  ParenExprContext : public ExprContext {
  public:
    ParenExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RPAREN();
  };

  class  UnaryExprContext : public ExprContext {
  public:
    UnaryExprContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    hawkParser::ExprContext *name = nullptr;
    ExprContext *expr();
    antlr4::tree::TerminalNode *KADD();
    antlr4::tree::TerminalNode *KSUB();
  };

  class  LOrExprContext : public ExprContext {
  public:
    LOrExprContext(ExprContext *ctx);

    hawkParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    hawkParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *KOR();
  };

  class  TernaryExprContext : public ExprContext {
  public:
    TernaryExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *KQUESTION();
    antlr4::tree::TerminalNode *KCOLON();
  };

  class  PostfixExprContext : public ExprContext {
  public:
    PostfixExprContext(ExprContext *ctx);

    hawkParser::ExprContext *name = nullptr;
    antlr4::Token *op = nullptr;
    ExprContext *expr();
    antlr4::tree::TerminalNode *KINC();
    antlr4::tree::TerminalNode *KDEC();
  };

  class  RelExprContext : public ExprContext {
  public:
    RelExprContext(ExprContext *ctx);

    hawkParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    hawkParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *KL();
    antlr4::tree::TerminalNode *KLE();
    antlr4::tree::TerminalNode *KG();
    antlr4::tree::TerminalNode *KGE();
  };

  class  BitAndExprContext : public ExprContext {
  public:
    BitAndExprContext(ExprContext *ctx);

    hawkParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    hawkParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *KBAND();
  };

  class  BraceExprContext : public ExprContext {
  public:
    BraceExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
  };

  class  AccessExprContext : public ExprContext {
  public:
    AccessExprContext(ExprContext *ctx);

    ExprContext *expr();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *ID();
  };

  class  AddSubExprContext : public ExprContext {
  public:
    AddSubExprContext(ExprContext *ctx);

    hawkParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    hawkParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *KADD();
    antlr4::tree::TerminalNode *KSUB();
  };

  class  PtrAccessExprContext : public ExprContext {
  public:
    PtrAccessExprContext(ExprContext *ctx);

    ExprContext *expr();
    antlr4::tree::TerminalNode *ARROW();
    antlr4::tree::TerminalNode *ID();
  };

  class  LAndExprContext : public ExprContext {
  public:
    LAndExprContext(ExprContext *ctx);

    hawkParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    hawkParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *KAND();
  };

  class  RelationalExprContext : public ExprContext {
  public:
    RelationalExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    CondContext *cond();
  };

  class  NumExprContext : public ExprContext {
  public:
    NumExprContext(ExprContext *ctx);

    NumberContext *number();
  };

  class  ShiftExprContext : public ExprContext {
  public:
    ShiftExprContext(ExprContext *ctx);

    hawkParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    hawkParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *KSHL();
    antlr4::tree::TerminalNode *KSHR();
  };

  class  PrefixExprContext : public ExprContext {
  public:
    PrefixExprContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    hawkParser::ExprContext *name = nullptr;
    ExprContext *expr();
    antlr4::tree::TerminalNode *KINC();
    antlr4::tree::TerminalNode *KDEC();
  };

  class  VarExprContext : public ExprContext {
  public:
    VarExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *ID();
    TypeContext *type();
    antlr4::tree::TerminalNode *LBRACKET();
    antlr4::tree::TerminalNode *RBRACKET();
    NumberContext *number();
  };

  class  EqExprContext : public ExprContext {
  public:
    EqExprContext(ExprContext *ctx);

    hawkParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    hawkParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *KEQ();
    antlr4::tree::TerminalNode *KNE();
  };

  class  BitOrExprContext : public ExprContext {
  public:
    BitOrExprContext(ExprContext *ctx);

    hawkParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    hawkParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *KBOR();
  };

  class  NotExprContext : public ExprContext {
  public:
    NotExprContext(ExprContext *ctx);

    hawkParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    hawkParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *KNOT();
    antlr4::tree::TerminalNode *KBNOT();
  };

  class  DerefExprContext : public ExprContext {
  public:
    DerefExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *KMUL();
    ExprContext *expr();
  };

  class  MulDivExprContext : public ExprContext {
  public:
    MulDivExprContext(ExprContext *ctx);

    hawkParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    hawkParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *KMUL();
    antlr4::tree::TerminalNode *KDIV();
    antlr4::tree::TerminalNode *KMOD();
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  FunctionStmtContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *ret = nullptr;
    FunctionStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> KCONST();
    antlr4::tree::TerminalNode* KCONST(size_t i);
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  FunctionStmtContext* functionStmt();

  class  IfStmtContext : public antlr4::ParserRuleContext {
  public:
    IfStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfBlockContext *ifBlock();
    std::vector<ElifBlockContext *> elifBlock();
    ElifBlockContext* elifBlock(size_t i);
    ElseBlockContext *elseBlock();

   
  };

  IfStmtContext* ifStmt();

  class  IfBlockContext : public antlr4::ParserRuleContext {
  public:
    IfBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KIF();
    antlr4::tree::TerminalNode *LPAREN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

   
  };

  IfBlockContext* ifBlock();

  class  ElifBlockContext : public antlr4::ParserRuleContext {
  public:
    ElifBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KELSE();
    antlr4::tree::TerminalNode *KIF();
    antlr4::tree::TerminalNode *LPAREN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

   
  };

  ElifBlockContext* elifBlock();

  class  ElseBlockContext : public antlr4::ParserRuleContext {
  public:
    ElseBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KELSE();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

   
  };

  ElseBlockContext* elseBlock();

  class  WhileStmtContext : public antlr4::ParserRuleContext {
  public:
    WhileStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KWHILE();
    antlr4::tree::TerminalNode *LPAREN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

   
  };

  WhileStmtContext* whileStmt();

  class  ForRangeStmtContext : public antlr4::ParserRuleContext {
  public:
    hawkParser::TrueStmtContext *init = nullptr;
    hawkParser::ExprContext *test = nullptr;
    hawkParser::TrueStmtContext *inc = nullptr;
    ForRangeStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KFOR();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<TrueStmtContext *> trueStmt();
    TrueStmtContext* trueStmt(size_t i);
    ExprContext *expr();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

   
  };

  ForRangeStmtContext* forRangeStmt();

  class  ForEachStmtContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *it = nullptr;
    hawkParser::ExprContext *var = nullptr;
    ForEachStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KFOR();
    antlr4::tree::TerminalNode *LPAREN();
    TypeContext *type();
    antlr4::tree::TerminalNode *KCOLON();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    antlr4::tree::TerminalNode *ID();
    ExprContext *expr();
    antlr4::tree::TerminalNode *KCONST();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

   
  };

  ForEachStmtContext* forEachStmt();

  class  DoWhileStmtContext : public antlr4::ParserRuleContext {
  public:
    DoWhileStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KDO();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    antlr4::tree::TerminalNode *KWHILE();
    antlr4::tree::TerminalNode *LPAREN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

   
  };

  DoWhileStmtContext* doWhileStmt();

  class  StructContext : public antlr4::ParserRuleContext {
  public:
    StructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KSTRUCT();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

   
  };

  StructContext* struct_();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

