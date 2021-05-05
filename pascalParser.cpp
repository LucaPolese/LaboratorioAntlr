
// Generated from pascal.g4 by ANTLR 4.7.2



#include "pascalParser.h"


using namespace antlrcpp;
using namespace antlr4;

pascalParser::pascalParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

pascalParser::~pascalParser() {
  delete _interpreter;
}

std::string pascalParser::getGrammarFileName() const {
  return "pascal.g4";
}

const std::vector<std::string>& pascalParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& pascalParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- StartContext ------------------------------------------------------------------

pascalParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::StartContext::ID() {
  return getToken(pascalParser::ID, 0);
}

tree::TerminalNode* pascalParser::StartContext::SEMI() {
  return getToken(pascalParser::SEMI, 0);
}

pascalParser::Decl_listContext* pascalParser::StartContext::decl_list() {
  return getRuleContext<pascalParser::Decl_listContext>(0);
}

pascalParser::Main_codeContext* pascalParser::StartContext::main_code() {
  return getRuleContext<pascalParser::Main_codeContext>(0);
}

tree::TerminalNode* pascalParser::StartContext::EOF() {
  return getToken(pascalParser::EOF, 0);
}


size_t pascalParser::StartContext::getRuleIndex() const {
  return pascalParser::RuleStart;
}


pascalParser::StartContext* pascalParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, pascalParser::RuleStart);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(28);
    match(pascalParser::T__0);
    setState(29);
    match(pascalParser::ID);
    setState(30);
    match(pascalParser::SEMI);
    setState(31);
    match(pascalParser::T__1);
    setState(32);
    decl_list();
    setState(33);
    main_code();
    setState(34);
    match(pascalParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Decl_listContext ------------------------------------------------------------------

pascalParser::Decl_listContext::Decl_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::DeclContext* pascalParser::Decl_listContext::decl() {
  return getRuleContext<pascalParser::DeclContext>(0);
}

pascalParser::Decl_listContext* pascalParser::Decl_listContext::decl_list() {
  return getRuleContext<pascalParser::Decl_listContext>(0);
}


size_t pascalParser::Decl_listContext::getRuleIndex() const {
  return pascalParser::RuleDecl_list;
}


pascalParser::Decl_listContext* pascalParser::decl_list() {
  Decl_listContext *_localctx = _tracker.createInstance<Decl_listContext>(_ctx, getState());
  enterRule(_localctx, 2, pascalParser::RuleDecl_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(40);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(36);
      decl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(37);
      decl();
      setState(38);
      decl_list();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

pascalParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::DeclContext::ID() {
  return getToken(pascalParser::ID, 0);
}

tree::TerminalNode* pascalParser::DeclContext::COMMA() {
  return getToken(pascalParser::COMMA, 0);
}

pascalParser::DeclContext* pascalParser::DeclContext::decl() {
  return getRuleContext<pascalParser::DeclContext>(0);
}

tree::TerminalNode* pascalParser::DeclContext::COLON() {
  return getToken(pascalParser::COLON, 0);
}

tree::TerminalNode* pascalParser::DeclContext::SEMI() {
  return getToken(pascalParser::SEMI, 0);
}


size_t pascalParser::DeclContext::getRuleIndex() const {
  return pascalParser::RuleDecl;
}


pascalParser::DeclContext* pascalParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 4, pascalParser::RuleDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(49);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(42);
      match(pascalParser::ID);
      setState(43);
      match(pascalParser::COMMA);
      setState(44);
      decl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(45);
      match(pascalParser::ID);
      setState(46);
      match(pascalParser::COLON);
      setState(47);
      match(pascalParser::T__2);
      setState(48);
      match(pascalParser::SEMI);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Main_codeContext ------------------------------------------------------------------

pascalParser::Main_codeContext::Main_codeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::St_listContext* pascalParser::Main_codeContext::st_list() {
  return getRuleContext<pascalParser::St_listContext>(0);
}

tree::TerminalNode* pascalParser::Main_codeContext::DOT() {
  return getToken(pascalParser::DOT, 0);
}


size_t pascalParser::Main_codeContext::getRuleIndex() const {
  return pascalParser::RuleMain_code;
}


pascalParser::Main_codeContext* pascalParser::main_code() {
  Main_codeContext *_localctx = _tracker.createInstance<Main_codeContext>(_ctx, getState());
  enterRule(_localctx, 6, pascalParser::RuleMain_code);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    match(pascalParser::T__3);
    setState(52);
    st_list();
    setState(53);
    match(pascalParser::T__4);
    setState(54);
    match(pascalParser::DOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Code_blockContext ------------------------------------------------------------------

pascalParser::Code_blockContext::Code_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::St_listContext* pascalParser::Code_blockContext::st_list() {
  return getRuleContext<pascalParser::St_listContext>(0);
}

pascalParser::StatementContext* pascalParser::Code_blockContext::statement() {
  return getRuleContext<pascalParser::StatementContext>(0);
}


size_t pascalParser::Code_blockContext::getRuleIndex() const {
  return pascalParser::RuleCode_block;
}


pascalParser::Code_blockContext* pascalParser::code_block() {
  Code_blockContext *_localctx = _tracker.createInstance<Code_blockContext>(_ctx, getState());
  enterRule(_localctx, 8, pascalParser::RuleCode_block);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(61);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::T__3: {
        enterOuterAlt(_localctx, 1);
        setState(56);
        match(pascalParser::T__3);
        setState(57);
        st_list();
        setState(58);
        match(pascalParser::T__4);
        break;
      }

      case pascalParser::T__5:
      case pascalParser::T__6:
      case pascalParser::T__7:
      case pascalParser::T__10:
      case pascalParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(60);
        statement();
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

//----------------- St_listContext ------------------------------------------------------------------

pascalParser::St_listContext::St_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::StatementContext* pascalParser::St_listContext::statement() {
  return getRuleContext<pascalParser::StatementContext>(0);
}

tree::TerminalNode* pascalParser::St_listContext::SEMI() {
  return getToken(pascalParser::SEMI, 0);
}

pascalParser::St_listContext* pascalParser::St_listContext::st_list() {
  return getRuleContext<pascalParser::St_listContext>(0);
}


size_t pascalParser::St_listContext::getRuleIndex() const {
  return pascalParser::RuleSt_list;
}


pascalParser::St_listContext* pascalParser::st_list() {
  St_listContext *_localctx = _tracker.createInstance<St_listContext>(_ctx, getState());
  enterRule(_localctx, 10, pascalParser::RuleSt_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(70);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(63);
      statement();
      setState(64);
      match(pascalParser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(66);
      statement();
      setState(67);
      match(pascalParser::SEMI);
      setState(68);
      st_list();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

pascalParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::AssignContext* pascalParser::StatementContext::assign() {
  return getRuleContext<pascalParser::AssignContext>(0);
}

pascalParser::BranchContext* pascalParser::StatementContext::branch() {
  return getRuleContext<pascalParser::BranchContext>(0);
}

pascalParser::InContext* pascalParser::StatementContext::in() {
  return getRuleContext<pascalParser::InContext>(0);
}

pascalParser::OutContext* pascalParser::StatementContext::out() {
  return getRuleContext<pascalParser::OutContext>(0);
}

pascalParser::LoopContext* pascalParser::StatementContext::loop() {
  return getRuleContext<pascalParser::LoopContext>(0);
}


size_t pascalParser::StatementContext::getRuleIndex() const {
  return pascalParser::RuleStatement;
}


pascalParser::StatementContext* pascalParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 12, pascalParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(77);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(72);
        assign();
        break;
      }

      case pascalParser::T__7: {
        enterOuterAlt(_localctx, 2);
        setState(73);
        branch();
        break;
      }

      case pascalParser::T__5: {
        enterOuterAlt(_localctx, 3);
        setState(74);
        in();
        break;
      }

      case pascalParser::T__6: {
        enterOuterAlt(_localctx, 4);
        setState(75);
        out();
        break;
      }

      case pascalParser::T__10: {
        enterOuterAlt(_localctx, 5);
        setState(76);
        loop();
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

//----------------- ExprContext ------------------------------------------------------------------

pascalParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::ExprContext::NUMBER() {
  return getToken(pascalParser::NUMBER, 0);
}

tree::TerminalNode* pascalParser::ExprContext::ID() {
  return getToken(pascalParser::ID, 0);
}

tree::TerminalNode* pascalParser::ExprContext::LPAREN() {
  return getToken(pascalParser::LPAREN, 0);
}

std::vector<pascalParser::ExprContext *> pascalParser::ExprContext::expr() {
  return getRuleContexts<pascalParser::ExprContext>();
}

pascalParser::ExprContext* pascalParser::ExprContext::expr(size_t i) {
  return getRuleContext<pascalParser::ExprContext>(i);
}

tree::TerminalNode* pascalParser::ExprContext::RPAREN() {
  return getToken(pascalParser::RPAREN, 0);
}

tree::TerminalNode* pascalParser::ExprContext::PLUS() {
  return getToken(pascalParser::PLUS, 0);
}

tree::TerminalNode* pascalParser::ExprContext::MINUS() {
  return getToken(pascalParser::MINUS, 0);
}

tree::TerminalNode* pascalParser::ExprContext::TIMES() {
  return getToken(pascalParser::TIMES, 0);
}

tree::TerminalNode* pascalParser::ExprContext::DIVISION() {
  return getToken(pascalParser::DIVISION, 0);
}

tree::TerminalNode* pascalParser::ExprContext::MOD() {
  return getToken(pascalParser::MOD, 0);
}


size_t pascalParser::ExprContext::getRuleIndex() const {
  return pascalParser::RuleExpr;
}



pascalParser::ExprContext* pascalParser::expr() {
   return expr(0);
}

pascalParser::ExprContext* pascalParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  pascalParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  pascalParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, pascalParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(86);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::NUMBER: {
        setState(80);
        match(pascalParser::NUMBER);
        break;
      }

      case pascalParser::ID: {
        setState(81);
        match(pascalParser::ID);
        break;
      }

      case pascalParser::LPAREN: {
        setState(82);
        match(pascalParser::LPAREN);
        setState(83);
        expr(0);
        setState(84);
        match(pascalParser::RPAREN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(93);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpr);
        setState(88);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(89);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << pascalParser::PLUS)
          | (1ULL << pascalParser::MINUS)
          | (1ULL << pascalParser::TIMES)
          | (1ULL << pascalParser::DIVISION)
          | (1ULL << pascalParser::MOD))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(90);
        expr(3); 
      }
      setState(95);
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

//----------------- RelationContext ------------------------------------------------------------------

pascalParser::RelationContext::RelationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<pascalParser::ExprContext *> pascalParser::RelationContext::expr() {
  return getRuleContexts<pascalParser::ExprContext>();
}

pascalParser::ExprContext* pascalParser::RelationContext::expr(size_t i) {
  return getRuleContext<pascalParser::ExprContext>(i);
}

tree::TerminalNode* pascalParser::RelationContext::LT() {
  return getToken(pascalParser::LT, 0);
}

tree::TerminalNode* pascalParser::RelationContext::LEQ() {
  return getToken(pascalParser::LEQ, 0);
}

tree::TerminalNode* pascalParser::RelationContext::EQ() {
  return getToken(pascalParser::EQ, 0);
}

tree::TerminalNode* pascalParser::RelationContext::NEQ() {
  return getToken(pascalParser::NEQ, 0);
}

tree::TerminalNode* pascalParser::RelationContext::GEQ() {
  return getToken(pascalParser::GEQ, 0);
}

tree::TerminalNode* pascalParser::RelationContext::GT() {
  return getToken(pascalParser::GT, 0);
}

tree::TerminalNode* pascalParser::RelationContext::LPAREN() {
  return getToken(pascalParser::LPAREN, 0);
}

std::vector<pascalParser::RelationContext *> pascalParser::RelationContext::relation() {
  return getRuleContexts<pascalParser::RelationContext>();
}

pascalParser::RelationContext* pascalParser::RelationContext::relation(size_t i) {
  return getRuleContext<pascalParser::RelationContext>(i);
}

tree::TerminalNode* pascalParser::RelationContext::RPAREN() {
  return getToken(pascalParser::RPAREN, 0);
}

tree::TerminalNode* pascalParser::RelationContext::AND() {
  return getToken(pascalParser::AND, 0);
}

tree::TerminalNode* pascalParser::RelationContext::OR() {
  return getToken(pascalParser::OR, 0);
}

tree::TerminalNode* pascalParser::RelationContext::NOT() {
  return getToken(pascalParser::NOT, 0);
}


size_t pascalParser::RelationContext::getRuleIndex() const {
  return pascalParser::RuleRelation;
}



pascalParser::RelationContext* pascalParser::relation() {
   return relation(0);
}

pascalParser::RelationContext* pascalParser::relation(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  pascalParser::RelationContext *_localctx = _tracker.createInstance<RelationContext>(_ctx, parentState);
  pascalParser::RelationContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, pascalParser::RuleRelation, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(125);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(97);
      expr(0);
      setState(98);
      match(pascalParser::LT);
      setState(99);
      expr(0);
      break;
    }

    case 2: {
      setState(101);
      expr(0);
      setState(102);
      match(pascalParser::LEQ);
      setState(103);
      expr(0);
      break;
    }

    case 3: {
      setState(105);
      expr(0);
      setState(106);
      match(pascalParser::EQ);
      setState(107);
      expr(0);
      break;
    }

    case 4: {
      setState(109);
      expr(0);
      setState(110);
      match(pascalParser::NEQ);
      setState(111);
      expr(0);
      break;
    }

    case 5: {
      setState(113);
      expr(0);
      setState(114);
      match(pascalParser::GEQ);
      setState(115);
      expr(0);
      break;
    }

    case 6: {
      setState(117);
      expr(0);
      setState(118);
      match(pascalParser::GT);
      setState(119);
      expr(0);
      break;
    }

    case 7: {
      setState(121);
      match(pascalParser::LPAREN);
      setState(122);
      relation(0);
      setState(123);
      match(pascalParser::RPAREN);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(138);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(136);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<RelationContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelation);
          setState(127);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(128);
          match(pascalParser::AND);
          setState(129);
          relation(5);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<RelationContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelation);
          setState(130);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(131);
          match(pascalParser::OR);
          setState(132);
          relation(4);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<RelationContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelation);
          setState(133);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(134);
          match(pascalParser::NOT);
          setState(135);
          relation(3);
          break;
        }

        } 
      }
      setState(140);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AssignContext ------------------------------------------------------------------

pascalParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::AssignContext::ID() {
  return getToken(pascalParser::ID, 0);
}

tree::TerminalNode* pascalParser::AssignContext::ASSIGN() {
  return getToken(pascalParser::ASSIGN, 0);
}

pascalParser::ExprContext* pascalParser::AssignContext::expr() {
  return getRuleContext<pascalParser::ExprContext>(0);
}


size_t pascalParser::AssignContext::getRuleIndex() const {
  return pascalParser::RuleAssign;
}


pascalParser::AssignContext* pascalParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 18, pascalParser::RuleAssign);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    match(pascalParser::ID);
    setState(142);
    match(pascalParser::ASSIGN);
    setState(143);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InContext ------------------------------------------------------------------

pascalParser::InContext::InContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::InContext::LPAREN() {
  return getToken(pascalParser::LPAREN, 0);
}

tree::TerminalNode* pascalParser::InContext::ID() {
  return getToken(pascalParser::ID, 0);
}

tree::TerminalNode* pascalParser::InContext::RPAREN() {
  return getToken(pascalParser::RPAREN, 0);
}


size_t pascalParser::InContext::getRuleIndex() const {
  return pascalParser::RuleIn;
}


pascalParser::InContext* pascalParser::in() {
  InContext *_localctx = _tracker.createInstance<InContext>(_ctx, getState());
  enterRule(_localctx, 20, pascalParser::RuleIn);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    match(pascalParser::T__5);
    setState(146);
    match(pascalParser::LPAREN);
    setState(147);
    match(pascalParser::ID);
    setState(148);
    match(pascalParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OutContext ------------------------------------------------------------------

pascalParser::OutContext::OutContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::OutContext::LPAREN() {
  return getToken(pascalParser::LPAREN, 0);
}

pascalParser::ExprContext* pascalParser::OutContext::expr() {
  return getRuleContext<pascalParser::ExprContext>(0);
}

tree::TerminalNode* pascalParser::OutContext::RPAREN() {
  return getToken(pascalParser::RPAREN, 0);
}

tree::TerminalNode* pascalParser::OutContext::STRING() {
  return getToken(pascalParser::STRING, 0);
}


size_t pascalParser::OutContext::getRuleIndex() const {
  return pascalParser::RuleOut;
}


pascalParser::OutContext* pascalParser::out() {
  OutContext *_localctx = _tracker.createInstance<OutContext>(_ctx, getState());
  enterRule(_localctx, 22, pascalParser::RuleOut);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(159);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(150);
      match(pascalParser::T__6);
      setState(151);
      match(pascalParser::LPAREN);
      setState(152);
      expr(0);
      setState(153);
      match(pascalParser::RPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(155);
      match(pascalParser::T__6);
      setState(156);
      match(pascalParser::LPAREN);
      setState(157);
      match(pascalParser::STRING);
      setState(158);
      match(pascalParser::RPAREN);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BranchContext ------------------------------------------------------------------

pascalParser::BranchContext::BranchContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::RelationContext* pascalParser::BranchContext::relation() {
  return getRuleContext<pascalParser::RelationContext>(0);
}

std::vector<pascalParser::Code_blockContext *> pascalParser::BranchContext::code_block() {
  return getRuleContexts<pascalParser::Code_blockContext>();
}

pascalParser::Code_blockContext* pascalParser::BranchContext::code_block(size_t i) {
  return getRuleContext<pascalParser::Code_blockContext>(i);
}


size_t pascalParser::BranchContext::getRuleIndex() const {
  return pascalParser::RuleBranch;
}


pascalParser::BranchContext* pascalParser::branch() {
  BranchContext *_localctx = _tracker.createInstance<BranchContext>(_ctx, getState());
  enterRule(_localctx, 24, pascalParser::RuleBranch);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(173);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(161);
      match(pascalParser::T__7);
      setState(162);
      relation(0);
      setState(163);
      match(pascalParser::T__8);
      setState(164);
      code_block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(166);
      match(pascalParser::T__7);
      setState(167);
      relation(0);
      setState(168);
      match(pascalParser::T__8);
      setState(169);
      code_block();
      setState(170);
      match(pascalParser::T__9);
      setState(171);
      code_block();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopContext ------------------------------------------------------------------

pascalParser::LoopContext::LoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::St_listContext* pascalParser::LoopContext::st_list() {
  return getRuleContext<pascalParser::St_listContext>(0);
}

pascalParser::RelationContext* pascalParser::LoopContext::relation() {
  return getRuleContext<pascalParser::RelationContext>(0);
}


size_t pascalParser::LoopContext::getRuleIndex() const {
  return pascalParser::RuleLoop;
}


pascalParser::LoopContext* pascalParser::loop() {
  LoopContext *_localctx = _tracker.createInstance<LoopContext>(_ctx, getState());
  enterRule(_localctx, 26, pascalParser::RuleLoop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    match(pascalParser::T__10);
    setState(176);
    st_list();
    setState(177);
    match(pascalParser::T__11);
    setState(178);
    relation(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool pascalParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 7: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);
    case 8: return relationSempred(dynamic_cast<RelationContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool pascalParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool pascalParser::relationSempred(RelationContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 4);
    case 2: return precpred(_ctx, 3);
    case 3: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> pascalParser::_decisionToDFA;
atn::PredictionContextCache pascalParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN pascalParser::_atn;
std::vector<uint16_t> pascalParser::_serializedATN;

std::vector<std::string> pascalParser::_ruleNames = {
  "start", "decl_list", "decl", "main_code", "code_block", "st_list", "statement", 
  "expr", "relation", "assign", "in", "out", "branch", "loop"
};

std::vector<std::string> pascalParser::_literalNames = {
  "", "'program'", "'var'", "'integer'", "'begin'", "'end'", "'readln'", 
  "'writeln'", "'if'", "'then'", "'else'", "'repeat'", "'until'", "'+'", 
  "'-'", "'*'", "'/'", "'%'", "':='", "','", "';'", "':'", "'='", "'<'", 
  "'<='", "'>'", "'>='", "'<>'", "'('", "')'", "'(*'", "'*)'", "'['", "']'", 
  "'.'", "'{'", "'}'", "'and'", "'or'", "'not'"
};

std::vector<std::string> pascalParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "PLUS", "MINUS", "TIMES", 
  "DIVISION", "MOD", "ASSIGN", "COMMA", "SEMI", "COLON", "EQ", "LT", "LEQ", 
  "GT", "GEQ", "NEQ", "LPAREN", "RPAREN", "LPARENCOM", "RPARENCOM", "LBRACK", 
  "RBRACK", "DOT", "LCURLY", "RCURLY", "AND", "OR", "NOT", "ID", "NUMBER", 
  "STRING", "R_COMMENT", "C_COMMENT", "LINE_COMMENT", "WS", "ErrorChar"
};

dfa::Vocabulary pascalParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> pascalParser::_tokenNames;

pascalParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x31, 0xb7, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 
    0x3, 0x2b, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x34, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x5, 0x6, 0x40, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x49, 0xa, 0x7, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x50, 0xa, 0x8, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 
    0x59, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x5e, 0xa, 0x9, 
    0xc, 0x9, 0xe, 0x9, 0x61, 0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x80, 0xa, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x8b, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x8e, 
    0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xa2, 0xa, 
    0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xb0, 
    0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x2, 0x4, 0x10, 0x12, 0x10, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x2, 0x3, 0x3, 0x2, 0xf, 0x13, 0x2, 
    0xbe, 0x2, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2a, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x33, 0x3, 0x2, 0x2, 0x2, 0x8, 0x35, 0x3, 0x2, 0x2, 0x2, 0xa, 0x3f, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x48, 0x3, 0x2, 0x2, 0x2, 0xe, 0x4f, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x58, 0x3, 0x2, 0x2, 0x2, 0x12, 0x7f, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x16, 0x93, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0xb1, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1f, 0x7, 0x3, 0x2, 0x2, 0x1f, 0x20, 
    0x7, 0x2a, 0x2, 0x2, 0x20, 0x21, 0x7, 0x16, 0x2, 0x2, 0x21, 0x22, 0x7, 
    0x4, 0x2, 0x2, 0x22, 0x23, 0x5, 0x4, 0x3, 0x2, 0x23, 0x24, 0x5, 0x8, 
    0x5, 0x2, 0x24, 0x25, 0x7, 0x2, 0x2, 0x3, 0x25, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x2b, 0x5, 0x6, 0x4, 0x2, 0x27, 0x28, 0x5, 0x6, 0x4, 0x2, 
    0x28, 0x29, 0x5, 0x4, 0x3, 0x2, 0x29, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2a, 
    0x26, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x7, 0x2a, 0x2, 0x2, 0x2d, 0x2e, 0x7, 
    0x15, 0x2, 0x2, 0x2e, 0x34, 0x5, 0x6, 0x4, 0x2, 0x2f, 0x30, 0x7, 0x2a, 
    0x2, 0x2, 0x30, 0x31, 0x7, 0x17, 0x2, 0x2, 0x31, 0x32, 0x7, 0x5, 0x2, 
    0x2, 0x32, 0x34, 0x7, 0x16, 0x2, 0x2, 0x33, 0x2c, 0x3, 0x2, 0x2, 0x2, 
    0x33, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x34, 0x7, 0x3, 0x2, 0x2, 0x2, 0x35, 
    0x36, 0x7, 0x6, 0x2, 0x2, 0x36, 0x37, 0x5, 0xc, 0x7, 0x2, 0x37, 0x38, 
    0x7, 0x7, 0x2, 0x2, 0x38, 0x39, 0x7, 0x24, 0x2, 0x2, 0x39, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0x6, 0x2, 0x2, 0x3b, 0x3c, 0x5, 0xc, 
    0x7, 0x2, 0x3c, 0x3d, 0x7, 0x7, 0x2, 0x2, 0x3d, 0x40, 0x3, 0x2, 0x2, 
    0x2, 0x3e, 0x40, 0x5, 0xe, 0x8, 0x2, 0x3f, 0x3a, 0x3, 0x2, 0x2, 0x2, 
    0x3f, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x40, 0xb, 0x3, 0x2, 0x2, 0x2, 0x41, 
    0x42, 0x5, 0xe, 0x8, 0x2, 0x42, 0x43, 0x7, 0x16, 0x2, 0x2, 0x43, 0x49, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x5, 0xe, 0x8, 0x2, 0x45, 0x46, 0x7, 
    0x16, 0x2, 0x2, 0x46, 0x47, 0x5, 0xc, 0x7, 0x2, 0x47, 0x49, 0x3, 0x2, 
    0x2, 0x2, 0x48, 0x41, 0x3, 0x2, 0x2, 0x2, 0x48, 0x44, 0x3, 0x2, 0x2, 
    0x2, 0x49, 0xd, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x50, 0x5, 0x14, 0xb, 0x2, 
    0x4b, 0x50, 0x5, 0x1a, 0xe, 0x2, 0x4c, 0x50, 0x5, 0x16, 0xc, 0x2, 0x4d, 
    0x50, 0x5, 0x18, 0xd, 0x2, 0x4e, 0x50, 0x5, 0x1c, 0xf, 0x2, 0x4f, 0x4a, 
    0x3, 0x2, 0x2, 0x2, 0x4f, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x4c, 0x3, 
    0x2, 0x2, 0x2, 0x4f, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x4e, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0xf, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x8, 0x9, 0x1, 
    0x2, 0x52, 0x59, 0x7, 0x2b, 0x2, 0x2, 0x53, 0x59, 0x7, 0x2a, 0x2, 0x2, 
    0x54, 0x55, 0x7, 0x1e, 0x2, 0x2, 0x55, 0x56, 0x5, 0x10, 0x9, 0x2, 0x56, 
    0x57, 0x7, 0x1f, 0x2, 0x2, 0x57, 0x59, 0x3, 0x2, 0x2, 0x2, 0x58, 0x51, 
    0x3, 0x2, 0x2, 0x2, 0x58, 0x53, 0x3, 0x2, 0x2, 0x2, 0x58, 0x54, 0x3, 
    0x2, 0x2, 0x2, 0x59, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0xc, 0x4, 
    0x2, 0x2, 0x5b, 0x5c, 0x9, 0x2, 0x2, 0x2, 0x5c, 0x5e, 0x5, 0x10, 0x9, 
    0x5, 0x5d, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x61, 0x3, 0x2, 0x2, 0x2, 
    0x5f, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x3, 0x2, 0x2, 0x2, 0x60, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 
    0x8, 0xa, 0x1, 0x2, 0x63, 0x64, 0x5, 0x10, 0x9, 0x2, 0x64, 0x65, 0x7, 
    0x19, 0x2, 0x2, 0x65, 0x66, 0x5, 0x10, 0x9, 0x2, 0x66, 0x80, 0x3, 0x2, 
    0x2, 0x2, 0x67, 0x68, 0x5, 0x10, 0x9, 0x2, 0x68, 0x69, 0x7, 0x1a, 0x2, 
    0x2, 0x69, 0x6a, 0x5, 0x10, 0x9, 0x2, 0x6a, 0x80, 0x3, 0x2, 0x2, 0x2, 
    0x6b, 0x6c, 0x5, 0x10, 0x9, 0x2, 0x6c, 0x6d, 0x7, 0x18, 0x2, 0x2, 0x6d, 
    0x6e, 0x5, 0x10, 0x9, 0x2, 0x6e, 0x80, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 
    0x5, 0x10, 0x9, 0x2, 0x70, 0x71, 0x7, 0x1d, 0x2, 0x2, 0x71, 0x72, 0x5, 
    0x10, 0x9, 0x2, 0x72, 0x80, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x5, 0x10, 
    0x9, 0x2, 0x74, 0x75, 0x7, 0x1c, 0x2, 0x2, 0x75, 0x76, 0x5, 0x10, 0x9, 
    0x2, 0x76, 0x80, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x5, 0x10, 0x9, 0x2, 
    0x78, 0x79, 0x7, 0x1b, 0x2, 0x2, 0x79, 0x7a, 0x5, 0x10, 0x9, 0x2, 0x7a, 
    0x80, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x7, 0x1e, 0x2, 0x2, 0x7c, 0x7d, 
    0x5, 0x12, 0xa, 0x2, 0x7d, 0x7e, 0x7, 0x1f, 0x2, 0x2, 0x7e, 0x80, 0x3, 
    0x2, 0x2, 0x2, 0x7f, 0x62, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x67, 0x3, 0x2, 
    0x2, 0x2, 0x7f, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x6f, 0x3, 0x2, 0x2, 
    0x2, 0x7f, 0x73, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x77, 0x3, 0x2, 0x2, 0x2, 
    0x7f, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x80, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x81, 
    0x82, 0xc, 0x6, 0x2, 0x2, 0x82, 0x83, 0x7, 0x27, 0x2, 0x2, 0x83, 0x8b, 
    0x5, 0x12, 0xa, 0x7, 0x84, 0x85, 0xc, 0x5, 0x2, 0x2, 0x85, 0x86, 0x7, 
    0x28, 0x2, 0x2, 0x86, 0x8b, 0x5, 0x12, 0xa, 0x6, 0x87, 0x88, 0xc, 0x4, 
    0x2, 0x2, 0x88, 0x89, 0x7, 0x29, 0x2, 0x2, 0x89, 0x8b, 0x5, 0x12, 0xa, 
    0x5, 0x8a, 0x81, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x84, 0x3, 0x2, 0x2, 0x2, 
    0x8a, 0x87, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x8c, 
    0x8a, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x7, 
    0x2a, 0x2, 0x2, 0x90, 0x91, 0x7, 0x14, 0x2, 0x2, 0x91, 0x92, 0x5, 0x10, 
    0x9, 0x2, 0x92, 0x15, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x7, 0x8, 0x2, 
    0x2, 0x94, 0x95, 0x7, 0x1e, 0x2, 0x2, 0x95, 0x96, 0x7, 0x2a, 0x2, 0x2, 
    0x96, 0x97, 0x7, 0x1f, 0x2, 0x2, 0x97, 0x17, 0x3, 0x2, 0x2, 0x2, 0x98, 
    0x99, 0x7, 0x9, 0x2, 0x2, 0x99, 0x9a, 0x7, 0x1e, 0x2, 0x2, 0x9a, 0x9b, 
    0x5, 0x10, 0x9, 0x2, 0x9b, 0x9c, 0x7, 0x1f, 0x2, 0x2, 0x9c, 0xa2, 0x3, 
    0x2, 0x2, 0x2, 0x9d, 0x9e, 0x7, 0x9, 0x2, 0x2, 0x9e, 0x9f, 0x7, 0x1e, 
    0x2, 0x2, 0x9f, 0xa0, 0x7, 0x2c, 0x2, 0x2, 0xa0, 0xa2, 0x7, 0x1f, 0x2, 
    0x2, 0xa1, 0x98, 0x3, 0x2, 0x2, 0x2, 0xa1, 0x9d, 0x3, 0x2, 0x2, 0x2, 
    0xa2, 0x19, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0x7, 0xa, 0x2, 0x2, 0xa4, 
    0xa5, 0x5, 0x12, 0xa, 0x2, 0xa5, 0xa6, 0x7, 0xb, 0x2, 0x2, 0xa6, 0xa7, 
    0x5, 0xa, 0x6, 0x2, 0xa7, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x7, 
    0xa, 0x2, 0x2, 0xa9, 0xaa, 0x5, 0x12, 0xa, 0x2, 0xaa, 0xab, 0x7, 0xb, 
    0x2, 0x2, 0xab, 0xac, 0x5, 0xa, 0x6, 0x2, 0xac, 0xad, 0x7, 0xc, 0x2, 
    0x2, 0xad, 0xae, 0x5, 0xa, 0x6, 0x2, 0xae, 0xb0, 0x3, 0x2, 0x2, 0x2, 
    0xaf, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xb0, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x7, 0xd, 0x2, 0x2, 0xb2, 0xb3, 
    0x5, 0xc, 0x7, 0x2, 0xb3, 0xb4, 0x7, 0xe, 0x2, 0x2, 0xb4, 0xb5, 0x5, 
    0x12, 0xa, 0x2, 0xb5, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xe, 0x2a, 0x33, 0x3f, 
    0x48, 0x4f, 0x58, 0x5f, 0x7f, 0x8a, 0x8c, 0xa1, 0xaf, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

pascalParser::Initializer pascalParser::_init;
