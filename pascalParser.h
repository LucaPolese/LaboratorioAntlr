
// Generated from pascal.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  pascalParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, PLUS = 16, MINUS = 17, TIMES = 18, DIVISION = 19, MOD = 20, 
    ASSIGN = 21, COMMA = 22, SEMI = 23, COLON = 24, EQ = 25, LT = 26, LEQ = 27, 
    GT = 28, GEQ = 29, NEQ = 30, LPAREN = 31, RPAREN = 32, LPARENCOM = 33, 
    RPARENCOM = 34, LBRACK = 35, RBRACK = 36, DOT = 37, LCURLY = 38, RCURLY = 39, 
    ID = 40, NUMBER = 41, STRING = 42, R_COMMENT = 43, C_COMMENT = 44, LINE_COMMENT = 45, 
    WS = 46, ErrorChar = 47
  };

  enum {
    RuleStart = 0, RuleDecl_list = 1, RuleDecl = 2, RuleVar_list = 3, RuleMain_code = 4, 
    RuleCode_block = 5, RuleSt_list = 6, RuleStatement = 7, RuleSclose = 8, 
    RuleSopen = 9, RuleExpr = 10, RuleArith_expr = 11, RuleSum = 12, RuleProd = 13, 
    RuleSign = 14, RuleValue = 15, RuleBool_expr = 16, RuleOr_oper = 17, 
    RuleAnd_oper = 18, RuleNot_oper = 19, RuleBvalue = 20, RuleRelation = 21, 
    RuleAssign = 22, RuleIn = 23, RuleOut = 24, RuleBranch = 25, RuleOpenbranch = 26, 
    RuleClosebranch = 27, RuleLoop = 28
  };

  pascalParser(antlr4::TokenStream *input);
  ~pascalParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class StartContext;
  class Decl_listContext;
  class DeclContext;
  class Var_listContext;
  class Main_codeContext;
  class Code_blockContext;
  class St_listContext;
  class StatementContext;
  class ScloseContext;
  class SopenContext;
  class ExprContext;
  class Arith_exprContext;
  class SumContext;
  class ProdContext;
  class SignContext;
  class ValueContext;
  class Bool_exprContext;
  class Or_operContext;
  class And_operContext;
  class Not_operContext;
  class BvalueContext;
  class RelationContext;
  class AssignContext;
  class InContext;
  class OutContext;
  class BranchContext;
  class OpenbranchContext;
  class ClosebranchContext;
  class LoopContext; 

  class  StartContext : public antlr4::ParserRuleContext {
  public:
    StartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *SEMI();
    Decl_listContext *decl_list();
    Main_codeContext *main_code();
    antlr4::tree::TerminalNode *EOF();

   
  };

  StartContext* start();

  class  Decl_listContext : public antlr4::ParserRuleContext {
  public:
    Decl_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclContext *decl();
    Decl_listContext *decl_list();

   
  };

  Decl_listContext* decl_list();

  class  DeclContext : public antlr4::ParserRuleContext {
  public:
    DeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_listContext *var_list();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *SEMI();

   
  };

  DeclContext* decl();

  class  Var_listContext : public antlr4::ParserRuleContext {
  public:
    Var_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *COMMA();
    Var_listContext *var_list();

   
  };

  Var_listContext* var_list();

  class  Main_codeContext : public antlr4::ParserRuleContext {
  public:
    Main_codeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Code_blockContext *code_block();
    antlr4::tree::TerminalNode *DOT();

   
  };

  Main_codeContext* main_code();

  class  Code_blockContext : public antlr4::ParserRuleContext {
  public:
    Code_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    St_listContext *st_list();

   
  };

  Code_blockContext* code_block();

  class  St_listContext : public antlr4::ParserRuleContext {
  public:
    St_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    antlr4::tree::TerminalNode *SEMI();
    St_listContext *st_list();

   
  };

  St_listContext* st_list();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SopenContext *sopen();
    ScloseContext *sclose();

   
  };

  StatementContext* statement();

  class  ScloseContext : public antlr4::ParserRuleContext {
  public:
    ScloseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignContext *assign();
    ClosebranchContext *closebranch();
    Code_blockContext *code_block();
    InContext *in();
    OutContext *out();
    LoopContext *loop();

   
  };

  ScloseContext* sclose();

  class  SopenContext : public antlr4::ParserRuleContext {
  public:
    SopenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OpenbranchContext *openbranch();

   
  };

  SopenContext* sopen();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Arith_exprContext *arith_expr();
    Bool_exprContext *bool_expr();
    antlr4::tree::TerminalNode *STRING();

   
  };

  ExprContext* expr();

  class  Arith_exprContext : public antlr4::ParserRuleContext {
  public:
    Arith_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SumContext *sum();

   
  };

  Arith_exprContext* arith_expr();

  class  SumContext : public antlr4::ParserRuleContext {
  public:
    SumContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProdContext *prod();
    SumContext *sum();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

   
  };

  SumContext* sum();

  class  ProdContext : public antlr4::ParserRuleContext {
  public:
    ProdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SignContext *sign();
    ProdContext *prod();
    antlr4::tree::TerminalNode *TIMES();
    antlr4::tree::TerminalNode *DIVISION();
    antlr4::tree::TerminalNode *MOD();

   
  };

  ProdContext* prod();

  class  SignContext : public antlr4::ParserRuleContext {
  public:
    SignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueContext *value();
    SignContext *sign();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

   
  };

  SignContext* sign();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LPAREN();
    Arith_exprContext *arith_expr();
    antlr4::tree::TerminalNode *RPAREN();

   
  };

  ValueContext* value();

  class  Bool_exprContext : public antlr4::ParserRuleContext {
  public:
    Bool_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Or_operContext *or_oper();

   
  };

  Bool_exprContext* bool_expr();

  class  Or_operContext : public antlr4::ParserRuleContext {
  public:
    Or_operContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    And_operContext *and_oper();
    Or_operContext *or_oper();

   
  };

  Or_operContext* or_oper();

  class  And_operContext : public antlr4::ParserRuleContext {
  public:
    And_operContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Not_operContext *not_oper();
    And_operContext *and_oper();

   
  };

  And_operContext* and_oper();

  class  Not_operContext : public antlr4::ParserRuleContext {
  public:
    Not_operContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BvalueContext *bvalue();

   
  };

  Not_operContext* not_oper();

  class  BvalueContext : public antlr4::ParserRuleContext {
  public:
    BvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RelationContext *relation();
    antlr4::tree::TerminalNode *LPAREN();
    Bool_exprContext *bool_expr();
    antlr4::tree::TerminalNode *RPAREN();

   
  };

  BvalueContext* bvalue();

  class  RelationContext : public antlr4::ParserRuleContext {
  public:
    RelationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Arith_exprContext *> arith_expr();
    Arith_exprContext* arith_expr(size_t i);
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LEQ();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NEQ();
    antlr4::tree::TerminalNode *GEQ();
    antlr4::tree::TerminalNode *GT();

   
  };

  RelationContext* relation();

  class  AssignContext : public antlr4::ParserRuleContext {
  public:
    AssignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ASSIGN();
    ExprContext *expr();

   
  };

  AssignContext* assign();

  class  InContext : public antlr4::ParserRuleContext {
  public:
    InContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *RPAREN();

   
  };

  InContext* in();

  class  OutContext : public antlr4::ParserRuleContext {
  public:
    OutContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RPAREN();

   
  };

  OutContext* out();

  class  BranchContext : public antlr4::ParserRuleContext {
  public:
    BranchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Bool_exprContext *bool_expr();
    Code_blockContext *code_block();

   
  };

  BranchContext* branch();

  class  OpenbranchContext : public antlr4::ParserRuleContext {
  public:
    OpenbranchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Bool_exprContext *bool_expr();
    SopenContext *sopen();
    ScloseContext *sclose();

   
  };

  OpenbranchContext* openbranch();

  class  ClosebranchContext : public antlr4::ParserRuleContext {
  public:
    ClosebranchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Bool_exprContext *bool_expr();
    std::vector<ScloseContext *> sclose();
    ScloseContext* sclose(size_t i);

   
  };

  ClosebranchContext* closebranch();

  class  LoopContext : public antlr4::ParserRuleContext {
  public:
    LoopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    St_listContext *st_list();
    Bool_exprContext *bool_expr();

   
  };

  LoopContext* loop();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

