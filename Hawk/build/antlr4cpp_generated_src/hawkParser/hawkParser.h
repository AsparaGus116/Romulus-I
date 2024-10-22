
// Generated from hawkParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace hawk {


class  hawkParser : public antlr4::Parser {
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

  enum {
    RuleProgram = 0, RuleType = 1, RuleOp = 2, RuleAssignOp = 3, RuleNumber = 4, 
    RuleCond = 5, RuleStmt = 6, RuleTrueStmt = 7, RuleExpr = 8, RuleFunctionStmt = 9, 
    RuleIfStmt = 10, RuleIfBlock = 11, RuleElifBlock = 12, RuleElseBlock = 13, 
    RuleWhileStmt = 14, RuleForRange = 15
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
  class OpContext;
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
  class ForRangeContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KBOOL();
    antlr4::tree::TerminalNode *KINT();
    antlr4::tree::TerminalNode *KCHAR();
    antlr4::tree::TerminalNode *KVOID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  OpContext : public antlr4::ParserRuleContext {
  public:
    OpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KADD();
    antlr4::tree::TerminalNode *KSUB();
    antlr4::tree::TerminalNode *KMUL();
    antlr4::tree::TerminalNode *KDIV();
    antlr4::tree::TerminalNode *KMOD();
    antlr4::tree::TerminalNode *KBAND();
    antlr4::tree::TerminalNode *KBOR();
    antlr4::tree::TerminalNode *KBNOT();
    antlr4::tree::TerminalNode *KNOT();
    antlr4::tree::TerminalNode *KXOR();
    antlr4::tree::TerminalNode *KOR();
    antlr4::tree::TerminalNode *KAND();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpContext* op();

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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignOpContext* assignOp();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *HEX();
    antlr4::tree::TerminalNode *BIN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CondContext* cond();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionStmtContext *functionStmt();
    IfStmtContext *ifStmt();
    WhileStmtContext *whileStmt();
    ForRangeContext *forRange();
    TrueStmtContext *trueStmt();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  TrueStmtContext : public antlr4::ParserRuleContext {
  public:
    TrueStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    AssignOpContext *assignOp();
    ExprContext *expr();
    TypeContext *type();
    antlr4::tree::TerminalNode *KINC();
    antlr4::tree::TerminalNode *KDEC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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

  class  VarExprContext : public ExprContext {
  public:
    VarExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *ID();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArithmeticExprContext : public ExprContext {
  public:
    ArithmeticExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    OpContext *op();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RelationalExprContext : public ExprContext {
  public:
    RelationalExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    CondContext *cond();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenExprContext : public ExprContext {
  public:
    ParenExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprContext : public ExprContext {
  public:
    NumExprContext(ExprContext *ctx);

    NumberContext *number();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  FunctionStmtContext : public antlr4::ParserRuleContext {
  public:
    FunctionStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStmtContext* whileStmt();

  class  ForRangeContext : public antlr4::ParserRuleContext {
  public:
    hawkParser::TrueStmtContext *init = nullptr;
    hawkParser::ExprContext *test = nullptr;
    hawkParser::TrueStmtContext *inc = nullptr;
    ForRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForRangeContext* forRange();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace hawk
