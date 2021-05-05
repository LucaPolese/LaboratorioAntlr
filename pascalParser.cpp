
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
    setState(58);
    match(pascalParser::T__0);
    setState(59);
    match(pascalParser::ID);
    setState(60);
    match(pascalParser::SEMI);
    setState(61);
    match(pascalParser::T__1);
    setState(62);
    decl_list();
    setState(63);
    main_code();
    setState(64);
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
    setState(70);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(66);
      decl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(67);
      decl();
      setState(68);
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

pascalParser::Var_listContext* pascalParser::DeclContext::var_list() {
  return getRuleContext<pascalParser::Var_listContext>(0);
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
    enterOuterAlt(_localctx, 1);
    setState(72);
    var_list();
    setState(73);
    match(pascalParser::COLON);
    setState(74);
    match(pascalParser::T__2);
    setState(75);
    match(pascalParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_listContext ------------------------------------------------------------------

pascalParser::Var_listContext::Var_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::Var_listContext::ID() {
  return getToken(pascalParser::ID, 0);
}

tree::TerminalNode* pascalParser::Var_listContext::COMMA() {
  return getToken(pascalParser::COMMA, 0);
}

pascalParser::Var_listContext* pascalParser::Var_listContext::var_list() {
  return getRuleContext<pascalParser::Var_listContext>(0);
}


size_t pascalParser::Var_listContext::getRuleIndex() const {
  return pascalParser::RuleVar_list;
}


pascalParser::Var_listContext* pascalParser::var_list() {
  Var_listContext *_localctx = _tracker.createInstance<Var_listContext>(_ctx, getState());
  enterRule(_localctx, 6, pascalParser::RuleVar_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(81);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(77);
      match(pascalParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(78);
      match(pascalParser::ID);
      setState(79);
      match(pascalParser::COMMA);
      setState(80);
      var_list();
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

pascalParser::Code_blockContext* pascalParser::Main_codeContext::code_block() {
  return getRuleContext<pascalParser::Code_blockContext>(0);
}

tree::TerminalNode* pascalParser::Main_codeContext::DOT() {
  return getToken(pascalParser::DOT, 0);
}


size_t pascalParser::Main_codeContext::getRuleIndex() const {
  return pascalParser::RuleMain_code;
}


pascalParser::Main_codeContext* pascalParser::main_code() {
  Main_codeContext *_localctx = _tracker.createInstance<Main_codeContext>(_ctx, getState());
  enterRule(_localctx, 8, pascalParser::RuleMain_code);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    code_block();
    setState(84);
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


size_t pascalParser::Code_blockContext::getRuleIndex() const {
  return pascalParser::RuleCode_block;
}


pascalParser::Code_blockContext* pascalParser::code_block() {
  Code_blockContext *_localctx = _tracker.createInstance<Code_blockContext>(_ctx, getState());
  enterRule(_localctx, 10, pascalParser::RuleCode_block);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    match(pascalParser::T__3);
    setState(87);
    st_list();
    setState(88);
    match(pascalParser::T__4);
   
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
  enterRule(_localctx, 12, pascalParser::RuleSt_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(95);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(90);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(91);
      statement();
      setState(92);
      match(pascalParser::SEMI);
      setState(93);
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

pascalParser::SopenContext* pascalParser::StatementContext::sopen() {
  return getRuleContext<pascalParser::SopenContext>(0);
}

pascalParser::ScloseContext* pascalParser::StatementContext::sclose() {
  return getRuleContext<pascalParser::ScloseContext>(0);
}


size_t pascalParser::StatementContext::getRuleIndex() const {
  return pascalParser::RuleStatement;
}


pascalParser::StatementContext* pascalParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 14, pascalParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(99);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(97);
      sopen();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(98);
      sclose();
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

//----------------- ScloseContext ------------------------------------------------------------------

pascalParser::ScloseContext::ScloseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::AssignContext* pascalParser::ScloseContext::assign() {
  return getRuleContext<pascalParser::AssignContext>(0);
}

pascalParser::ClosebranchContext* pascalParser::ScloseContext::closebranch() {
  return getRuleContext<pascalParser::ClosebranchContext>(0);
}

pascalParser::Code_blockContext* pascalParser::ScloseContext::code_block() {
  return getRuleContext<pascalParser::Code_blockContext>(0);
}

pascalParser::InContext* pascalParser::ScloseContext::in() {
  return getRuleContext<pascalParser::InContext>(0);
}

pascalParser::OutContext* pascalParser::ScloseContext::out() {
  return getRuleContext<pascalParser::OutContext>(0);
}

pascalParser::LoopContext* pascalParser::ScloseContext::loop() {
  return getRuleContext<pascalParser::LoopContext>(0);
}


size_t pascalParser::ScloseContext::getRuleIndex() const {
  return pascalParser::RuleSclose;
}


pascalParser::ScloseContext* pascalParser::sclose() {
  ScloseContext *_localctx = _tracker.createInstance<ScloseContext>(_ctx, getState());
  enterRule(_localctx, 16, pascalParser::RuleSclose);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(108);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::T__4:
      case pascalParser::T__12:
      case pascalParser::T__14:
      case pascalParser::SEMI: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case pascalParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(102);
        assign();
        break;
      }

      case pascalParser::T__10: {
        enterOuterAlt(_localctx, 3);
        setState(103);
        closebranch();
        break;
      }

      case pascalParser::T__3: {
        enterOuterAlt(_localctx, 4);
        setState(104);
        code_block();
        break;
      }

      case pascalParser::T__8: {
        enterOuterAlt(_localctx, 5);
        setState(105);
        in();
        break;
      }

      case pascalParser::T__9: {
        enterOuterAlt(_localctx, 6);
        setState(106);
        out();
        break;
      }

      case pascalParser::T__13: {
        enterOuterAlt(_localctx, 7);
        setState(107);
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

//----------------- SopenContext ------------------------------------------------------------------

pascalParser::SopenContext::SopenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::OpenbranchContext* pascalParser::SopenContext::openbranch() {
  return getRuleContext<pascalParser::OpenbranchContext>(0);
}


size_t pascalParser::SopenContext::getRuleIndex() const {
  return pascalParser::RuleSopen;
}


pascalParser::SopenContext* pascalParser::sopen() {
  SopenContext *_localctx = _tracker.createInstance<SopenContext>(_ctx, getState());
  enterRule(_localctx, 18, pascalParser::RuleSopen);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(110);
    openbranch();
   
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

pascalParser::Arith_exprContext* pascalParser::ExprContext::arith_expr() {
  return getRuleContext<pascalParser::Arith_exprContext>(0);
}

pascalParser::Bool_exprContext* pascalParser::ExprContext::bool_expr() {
  return getRuleContext<pascalParser::Bool_exprContext>(0);
}

tree::TerminalNode* pascalParser::ExprContext::STRING() {
  return getToken(pascalParser::STRING, 0);
}


size_t pascalParser::ExprContext::getRuleIndex() const {
  return pascalParser::RuleExpr;
}


pascalParser::ExprContext* pascalParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 20, pascalParser::RuleExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(115);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(112);
      arith_expr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(113);
      bool_expr();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(114);
      match(pascalParser::STRING);
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

//----------------- Arith_exprContext ------------------------------------------------------------------

pascalParser::Arith_exprContext::Arith_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::SumContext* pascalParser::Arith_exprContext::sum() {
  return getRuleContext<pascalParser::SumContext>(0);
}


size_t pascalParser::Arith_exprContext::getRuleIndex() const {
  return pascalParser::RuleArith_expr;
}


pascalParser::Arith_exprContext* pascalParser::arith_expr() {
  Arith_exprContext *_localctx = _tracker.createInstance<Arith_exprContext>(_ctx, getState());
  enterRule(_localctx, 22, pascalParser::RuleArith_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    sum();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SumContext ------------------------------------------------------------------

pascalParser::SumContext::SumContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::ProdContext* pascalParser::SumContext::prod() {
  return getRuleContext<pascalParser::ProdContext>(0);
}

pascalParser::SumContext* pascalParser::SumContext::sum() {
  return getRuleContext<pascalParser::SumContext>(0);
}

tree::TerminalNode* pascalParser::SumContext::PLUS() {
  return getToken(pascalParser::PLUS, 0);
}

tree::TerminalNode* pascalParser::SumContext::MINUS() {
  return getToken(pascalParser::MINUS, 0);
}


size_t pascalParser::SumContext::getRuleIndex() const {
  return pascalParser::RuleSum;
}


pascalParser::SumContext* pascalParser::sum() {
  SumContext *_localctx = _tracker.createInstance<SumContext>(_ctx, getState());
  enterRule(_localctx, 24, pascalParser::RuleSum);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(124);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(119);
      prod();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(120);
      prod();
      setState(121);
      _la = _input->LA(1);
      if (!(_la == pascalParser::PLUS

      || _la == pascalParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(122);
      sum();
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

//----------------- ProdContext ------------------------------------------------------------------

pascalParser::ProdContext::ProdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::SignContext* pascalParser::ProdContext::sign() {
  return getRuleContext<pascalParser::SignContext>(0);
}

pascalParser::ProdContext* pascalParser::ProdContext::prod() {
  return getRuleContext<pascalParser::ProdContext>(0);
}

tree::TerminalNode* pascalParser::ProdContext::TIMES() {
  return getToken(pascalParser::TIMES, 0);
}

tree::TerminalNode* pascalParser::ProdContext::DIVISION() {
  return getToken(pascalParser::DIVISION, 0);
}

tree::TerminalNode* pascalParser::ProdContext::MOD() {
  return getToken(pascalParser::MOD, 0);
}


size_t pascalParser::ProdContext::getRuleIndex() const {
  return pascalParser::RuleProd;
}


pascalParser::ProdContext* pascalParser::prod() {
  ProdContext *_localctx = _tracker.createInstance<ProdContext>(_ctx, getState());
  enterRule(_localctx, 26, pascalParser::RuleProd);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(131);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(126);
      sign();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(127);
      sign();
      setState(128);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << pascalParser::TIMES)
        | (1ULL << pascalParser::DIVISION)
        | (1ULL << pascalParser::MOD))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(129);
      prod();
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

//----------------- SignContext ------------------------------------------------------------------

pascalParser::SignContext::SignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::ValueContext* pascalParser::SignContext::value() {
  return getRuleContext<pascalParser::ValueContext>(0);
}

pascalParser::SignContext* pascalParser::SignContext::sign() {
  return getRuleContext<pascalParser::SignContext>(0);
}

tree::TerminalNode* pascalParser::SignContext::PLUS() {
  return getToken(pascalParser::PLUS, 0);
}

tree::TerminalNode* pascalParser::SignContext::MINUS() {
  return getToken(pascalParser::MINUS, 0);
}


size_t pascalParser::SignContext::getRuleIndex() const {
  return pascalParser::RuleSign;
}


pascalParser::SignContext* pascalParser::sign() {
  SignContext *_localctx = _tracker.createInstance<SignContext>(_ctx, getState());
  enterRule(_localctx, 28, pascalParser::RuleSign);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(136);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::LPAREN:
      case pascalParser::ID:
      case pascalParser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(133);
        value();
        break;
      }

      case pascalParser::PLUS:
      case pascalParser::MINUS: {
        enterOuterAlt(_localctx, 2);
        setState(134);
        _la = _input->LA(1);
        if (!(_la == pascalParser::PLUS

        || _la == pascalParser::MINUS)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(135);
        sign();
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

//----------------- ValueContext ------------------------------------------------------------------

pascalParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::ValueContext::NUMBER() {
  return getToken(pascalParser::NUMBER, 0);
}

tree::TerminalNode* pascalParser::ValueContext::ID() {
  return getToken(pascalParser::ID, 0);
}

tree::TerminalNode* pascalParser::ValueContext::LPAREN() {
  return getToken(pascalParser::LPAREN, 0);
}

pascalParser::Arith_exprContext* pascalParser::ValueContext::arith_expr() {
  return getRuleContext<pascalParser::Arith_exprContext>(0);
}

tree::TerminalNode* pascalParser::ValueContext::RPAREN() {
  return getToken(pascalParser::RPAREN, 0);
}


size_t pascalParser::ValueContext::getRuleIndex() const {
  return pascalParser::RuleValue;
}


pascalParser::ValueContext* pascalParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 30, pascalParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(144);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(138);
        match(pascalParser::NUMBER);
        break;
      }

      case pascalParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(139);
        match(pascalParser::ID);
        break;
      }

      case pascalParser::LPAREN: {
        enterOuterAlt(_localctx, 3);
        setState(140);
        match(pascalParser::LPAREN);
        setState(141);
        arith_expr();
        setState(142);
        match(pascalParser::RPAREN);
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

//----------------- Bool_exprContext ------------------------------------------------------------------

pascalParser::Bool_exprContext::Bool_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::Or_operContext* pascalParser::Bool_exprContext::or_oper() {
  return getRuleContext<pascalParser::Or_operContext>(0);
}


size_t pascalParser::Bool_exprContext::getRuleIndex() const {
  return pascalParser::RuleBool_expr;
}


pascalParser::Bool_exprContext* pascalParser::bool_expr() {
  Bool_exprContext *_localctx = _tracker.createInstance<Bool_exprContext>(_ctx, getState());
  enterRule(_localctx, 32, pascalParser::RuleBool_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    or_oper();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Or_operContext ------------------------------------------------------------------

pascalParser::Or_operContext::Or_operContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::And_operContext* pascalParser::Or_operContext::and_oper() {
  return getRuleContext<pascalParser::And_operContext>(0);
}

pascalParser::Or_operContext* pascalParser::Or_operContext::or_oper() {
  return getRuleContext<pascalParser::Or_operContext>(0);
}


size_t pascalParser::Or_operContext::getRuleIndex() const {
  return pascalParser::RuleOr_oper;
}


pascalParser::Or_operContext* pascalParser::or_oper() {
  Or_operContext *_localctx = _tracker.createInstance<Or_operContext>(_ctx, getState());
  enterRule(_localctx, 34, pascalParser::RuleOr_oper);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(153);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(148);
      and_oper();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(149);
      and_oper();
      setState(150);
      match(pascalParser::T__5);
      setState(151);
      or_oper();
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

//----------------- And_operContext ------------------------------------------------------------------

pascalParser::And_operContext::And_operContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::Not_operContext* pascalParser::And_operContext::not_oper() {
  return getRuleContext<pascalParser::Not_operContext>(0);
}

pascalParser::And_operContext* pascalParser::And_operContext::and_oper() {
  return getRuleContext<pascalParser::And_operContext>(0);
}


size_t pascalParser::And_operContext::getRuleIndex() const {
  return pascalParser::RuleAnd_oper;
}


pascalParser::And_operContext* pascalParser::and_oper() {
  And_operContext *_localctx = _tracker.createInstance<And_operContext>(_ctx, getState());
  enterRule(_localctx, 36, pascalParser::RuleAnd_oper);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(160);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(155);
      not_oper();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(156);
      not_oper();
      setState(157);
      match(pascalParser::T__6);
      setState(158);
      and_oper();
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

//----------------- Not_operContext ------------------------------------------------------------------

pascalParser::Not_operContext::Not_operContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::BvalueContext* pascalParser::Not_operContext::bvalue() {
  return getRuleContext<pascalParser::BvalueContext>(0);
}


size_t pascalParser::Not_operContext::getRuleIndex() const {
  return pascalParser::RuleNot_oper;
}


pascalParser::Not_operContext* pascalParser::not_oper() {
  Not_operContext *_localctx = _tracker.createInstance<Not_operContext>(_ctx, getState());
  enterRule(_localctx, 38, pascalParser::RuleNot_oper);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(165);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::PLUS:
      case pascalParser::MINUS:
      case pascalParser::LPAREN:
      case pascalParser::ID:
      case pascalParser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(162);
        bvalue();
        break;
      }

      case pascalParser::T__7: {
        enterOuterAlt(_localctx, 2);
        setState(163);
        match(pascalParser::T__7);
        setState(164);
        bvalue();
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

//----------------- BvalueContext ------------------------------------------------------------------

pascalParser::BvalueContext::BvalueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::RelationContext* pascalParser::BvalueContext::relation() {
  return getRuleContext<pascalParser::RelationContext>(0);
}

tree::TerminalNode* pascalParser::BvalueContext::LPAREN() {
  return getToken(pascalParser::LPAREN, 0);
}

pascalParser::Bool_exprContext* pascalParser::BvalueContext::bool_expr() {
  return getRuleContext<pascalParser::Bool_exprContext>(0);
}

tree::TerminalNode* pascalParser::BvalueContext::RPAREN() {
  return getToken(pascalParser::RPAREN, 0);
}


size_t pascalParser::BvalueContext::getRuleIndex() const {
  return pascalParser::RuleBvalue;
}


pascalParser::BvalueContext* pascalParser::bvalue() {
  BvalueContext *_localctx = _tracker.createInstance<BvalueContext>(_ctx, getState());
  enterRule(_localctx, 40, pascalParser::RuleBvalue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(172);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(167);
      relation();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(168);
      match(pascalParser::LPAREN);
      setState(169);
      bool_expr();
      setState(170);
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

//----------------- RelationContext ------------------------------------------------------------------

pascalParser::RelationContext::RelationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<pascalParser::Arith_exprContext *> pascalParser::RelationContext::arith_expr() {
  return getRuleContexts<pascalParser::Arith_exprContext>();
}

pascalParser::Arith_exprContext* pascalParser::RelationContext::arith_expr(size_t i) {
  return getRuleContext<pascalParser::Arith_exprContext>(i);
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


size_t pascalParser::RelationContext::getRuleIndex() const {
  return pascalParser::RuleRelation;
}


pascalParser::RelationContext* pascalParser::relation() {
  RelationContext *_localctx = _tracker.createInstance<RelationContext>(_ctx, getState());
  enterRule(_localctx, 42, pascalParser::RuleRelation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(198);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(174);
      arith_expr();
      setState(175);
      match(pascalParser::LT);
      setState(176);
      arith_expr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(178);
      arith_expr();
      setState(179);
      match(pascalParser::LEQ);
      setState(180);
      arith_expr();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(182);
      arith_expr();
      setState(183);
      match(pascalParser::EQ);
      setState(184);
      arith_expr();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(186);
      arith_expr();
      setState(187);
      match(pascalParser::NEQ);
      setState(188);
      arith_expr();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(190);
      arith_expr();
      setState(191);
      match(pascalParser::GEQ);
      setState(192);
      arith_expr();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(194);
      arith_expr();
      setState(195);
      match(pascalParser::GT);
      setState(196);
      arith_expr();
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
  enterRule(_localctx, 44, pascalParser::RuleAssign);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(200);
    match(pascalParser::ID);
    setState(201);
    match(pascalParser::ASSIGN);
    setState(202);
    expr();
   
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
  enterRule(_localctx, 46, pascalParser::RuleIn);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    match(pascalParser::T__8);
    setState(205);
    match(pascalParser::LPAREN);
    setState(206);
    match(pascalParser::ID);
    setState(207);
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


size_t pascalParser::OutContext::getRuleIndex() const {
  return pascalParser::RuleOut;
}


pascalParser::OutContext* pascalParser::out() {
  OutContext *_localctx = _tracker.createInstance<OutContext>(_ctx, getState());
  enterRule(_localctx, 48, pascalParser::RuleOut);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(209);
    match(pascalParser::T__9);
    setState(210);
    match(pascalParser::LPAREN);
    setState(211);
    expr();
    setState(212);
    match(pascalParser::RPAREN);
   
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

pascalParser::Bool_exprContext* pascalParser::BranchContext::bool_expr() {
  return getRuleContext<pascalParser::Bool_exprContext>(0);
}

pascalParser::Code_blockContext* pascalParser::BranchContext::code_block() {
  return getRuleContext<pascalParser::Code_blockContext>(0);
}


size_t pascalParser::BranchContext::getRuleIndex() const {
  return pascalParser::RuleBranch;
}


pascalParser::BranchContext* pascalParser::branch() {
  BranchContext *_localctx = _tracker.createInstance<BranchContext>(_ctx, getState());
  enterRule(_localctx, 50, pascalParser::RuleBranch);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    match(pascalParser::T__10);
    setState(215);
    bool_expr();
    setState(216);
    match(pascalParser::T__11);
    setState(217);
    code_block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpenbranchContext ------------------------------------------------------------------

pascalParser::OpenbranchContext::OpenbranchContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::Bool_exprContext* pascalParser::OpenbranchContext::bool_expr() {
  return getRuleContext<pascalParser::Bool_exprContext>(0);
}

pascalParser::SopenContext* pascalParser::OpenbranchContext::sopen() {
  return getRuleContext<pascalParser::SopenContext>(0);
}

pascalParser::ScloseContext* pascalParser::OpenbranchContext::sclose() {
  return getRuleContext<pascalParser::ScloseContext>(0);
}


size_t pascalParser::OpenbranchContext::getRuleIndex() const {
  return pascalParser::RuleOpenbranch;
}


pascalParser::OpenbranchContext* pascalParser::openbranch() {
  OpenbranchContext *_localctx = _tracker.createInstance<OpenbranchContext>(_ctx, getState());
  enterRule(_localctx, 52, pascalParser::RuleOpenbranch);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(231);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(219);
      match(pascalParser::T__10);
      setState(220);
      bool_expr();
      setState(221);
      match(pascalParser::T__11);
      setState(222);
      sopen();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(224);
      match(pascalParser::T__10);
      setState(225);
      bool_expr();
      setState(226);
      match(pascalParser::T__11);
      setState(227);
      sclose();
      setState(228);
      match(pascalParser::T__12);
      setState(229);
      sopen();
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

//----------------- ClosebranchContext ------------------------------------------------------------------

pascalParser::ClosebranchContext::ClosebranchContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::Bool_exprContext* pascalParser::ClosebranchContext::bool_expr() {
  return getRuleContext<pascalParser::Bool_exprContext>(0);
}

std::vector<pascalParser::ScloseContext *> pascalParser::ClosebranchContext::sclose() {
  return getRuleContexts<pascalParser::ScloseContext>();
}

pascalParser::ScloseContext* pascalParser::ClosebranchContext::sclose(size_t i) {
  return getRuleContext<pascalParser::ScloseContext>(i);
}


size_t pascalParser::ClosebranchContext::getRuleIndex() const {
  return pascalParser::RuleClosebranch;
}


pascalParser::ClosebranchContext* pascalParser::closebranch() {
  ClosebranchContext *_localctx = _tracker.createInstance<ClosebranchContext>(_ctx, getState());
  enterRule(_localctx, 54, pascalParser::RuleClosebranch);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(245);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(233);
      match(pascalParser::T__10);
      setState(234);
      bool_expr();
      setState(235);
      match(pascalParser::T__11);
      setState(236);
      sclose();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(238);
      match(pascalParser::T__10);
      setState(239);
      bool_expr();
      setState(240);
      match(pascalParser::T__11);
      setState(241);
      sclose();
      setState(242);
      match(pascalParser::T__12);
      setState(243);
      sclose();
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

pascalParser::Bool_exprContext* pascalParser::LoopContext::bool_expr() {
  return getRuleContext<pascalParser::Bool_exprContext>(0);
}


size_t pascalParser::LoopContext::getRuleIndex() const {
  return pascalParser::RuleLoop;
}


pascalParser::LoopContext* pascalParser::loop() {
  LoopContext *_localctx = _tracker.createInstance<LoopContext>(_ctx, getState());
  enterRule(_localctx, 56, pascalParser::RuleLoop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(247);
    match(pascalParser::T__13);
    setState(248);
    st_list();
    setState(249);
    match(pascalParser::T__14);
    setState(250);
    bool_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> pascalParser::_decisionToDFA;
atn::PredictionContextCache pascalParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN pascalParser::_atn;
std::vector<uint16_t> pascalParser::_serializedATN;

std::vector<std::string> pascalParser::_ruleNames = {
  "start", "decl_list", "decl", "var_list", "main_code", "code_block", "st_list", 
  "statement", "sclose", "sopen", "expr", "arith_expr", "sum", "prod", "sign", 
  "value", "bool_expr", "or_oper", "and_oper", "not_oper", "bvalue", "relation", 
  "assign", "in", "out", "branch", "openbranch", "closebranch", "loop"
};

std::vector<std::string> pascalParser::_literalNames = {
  "", "'program'", "'var'", "'integer'", "'begin'", "'end'", "'or'", "'and'", 
  "'not'", "'readln'", "'writeln'", "'if'", "'then'", "'else'", "'repeat'", 
  "'until'", "'+'", "'-'", "'*'", "'/'", "'%'", "':='", "','", "';'", "':'", 
  "'='", "'<'", "'<='", "'>'", "'>='", "'<>'", "'('", "')'", "'(*'", "'*)'", 
  "'['", "']'", "'.'", "'{'", "'}'"
};

std::vector<std::string> pascalParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "PLUS", 
  "MINUS", "TIMES", "DIVISION", "MOD", "ASSIGN", "COMMA", "SEMI", "COLON", 
  "EQ", "LT", "LEQ", "GT", "GEQ", "NEQ", "LPAREN", "RPAREN", "LPARENCOM", 
  "RPARENCOM", "LBRACK", "RBRACK", "DOT", "LCURLY", "RCURLY", "ID", "NUMBER", 
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
    0x3, 0x31, 0xff, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 
    0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x49, 0xa, 0x3, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x54, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x62, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 
    0x9, 0x66, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x6f, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x76, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x7f, 0xa, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x86, 
    0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x8b, 0xa, 0x10, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 
    0x11, 0x93, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x9c, 0xa, 0x13, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0xa3, 0xa, 0x14, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0xa8, 0xa, 0x15, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0xaf, 0xa, 0x16, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0xc9, 0xa, 0x17, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0xea, 
    0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
    0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x5, 0x1d, 0xf8, 0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x2, 0x2, 0x1f, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
    0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x2, 
    0x4, 0x3, 0x2, 0x12, 0x13, 0x3, 0x2, 0x14, 0x16, 0x2, 0xfd, 0x2, 0x3c, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x48, 0x3, 0x2, 0x2, 0x2, 0x6, 0x4a, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x53, 0x3, 0x2, 0x2, 0x2, 0xa, 0x55, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x58, 0x3, 0x2, 0x2, 0x2, 0xe, 0x61, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0x65, 0x3, 0x2, 0x2, 0x2, 0x12, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x14, 0x70, 
    0x3, 0x2, 0x2, 0x2, 0x16, 0x75, 0x3, 0x2, 0x2, 0x2, 0x18, 0x77, 0x3, 
    0x2, 0x2, 0x2, 0x1a, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x85, 0x3, 0x2, 
    0x2, 0x2, 0x1e, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x20, 0x92, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0x94, 0x3, 0x2, 0x2, 0x2, 0x24, 0x9b, 0x3, 0x2, 0x2, 0x2, 
    0x26, 0xa2, 0x3, 0x2, 0x2, 0x2, 0x28, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x2a, 
    0xae, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xc8, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xca, 
    0x3, 0x2, 0x2, 0x2, 0x30, 0xce, 0x3, 0x2, 0x2, 0x2, 0x32, 0xd3, 0x3, 
    0x2, 0x2, 0x2, 0x34, 0xd8, 0x3, 0x2, 0x2, 0x2, 0x36, 0xe9, 0x3, 0x2, 
    0x2, 0x2, 0x38, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x3a, 0xf9, 0x3, 0x2, 0x2, 
    0x2, 0x3c, 0x3d, 0x7, 0x3, 0x2, 0x2, 0x3d, 0x3e, 0x7, 0x2a, 0x2, 0x2, 
    0x3e, 0x3f, 0x7, 0x19, 0x2, 0x2, 0x3f, 0x40, 0x7, 0x4, 0x2, 0x2, 0x40, 
    0x41, 0x5, 0x4, 0x3, 0x2, 0x41, 0x42, 0x5, 0xa, 0x6, 0x2, 0x42, 0x43, 
    0x7, 0x2, 0x2, 0x3, 0x43, 0x3, 0x3, 0x2, 0x2, 0x2, 0x44, 0x49, 0x5, 
    0x6, 0x4, 0x2, 0x45, 0x46, 0x5, 0x6, 0x4, 0x2, 0x46, 0x47, 0x5, 0x4, 
    0x3, 0x2, 0x47, 0x49, 0x3, 0x2, 0x2, 0x2, 0x48, 0x44, 0x3, 0x2, 0x2, 
    0x2, 0x48, 0x45, 0x3, 0x2, 0x2, 0x2, 0x49, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x4a, 0x4b, 0x5, 0x8, 0x5, 0x2, 0x4b, 0x4c, 0x7, 0x1a, 0x2, 0x2, 0x4c, 
    0x4d, 0x7, 0x5, 0x2, 0x2, 0x4d, 0x4e, 0x7, 0x19, 0x2, 0x2, 0x4e, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x4f, 0x54, 0x7, 0x2a, 0x2, 0x2, 0x50, 0x51, 0x7, 
    0x2a, 0x2, 0x2, 0x51, 0x52, 0x7, 0x18, 0x2, 0x2, 0x52, 0x54, 0x5, 0x8, 
    0x5, 0x2, 0x53, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x53, 0x50, 0x3, 0x2, 0x2, 
    0x2, 0x54, 0x9, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x5, 0xc, 0x7, 0x2, 
    0x56, 0x57, 0x7, 0x27, 0x2, 0x2, 0x57, 0xb, 0x3, 0x2, 0x2, 0x2, 0x58, 
    0x59, 0x7, 0x6, 0x2, 0x2, 0x59, 0x5a, 0x5, 0xe, 0x8, 0x2, 0x5a, 0x5b, 
    0x7, 0x7, 0x2, 0x2, 0x5b, 0xd, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x62, 0x5, 
    0x10, 0x9, 0x2, 0x5d, 0x5e, 0x5, 0x10, 0x9, 0x2, 0x5e, 0x5f, 0x7, 0x19, 
    0x2, 0x2, 0x5f, 0x60, 0x5, 0xe, 0x8, 0x2, 0x60, 0x62, 0x3, 0x2, 0x2, 
    0x2, 0x61, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5d, 0x3, 0x2, 0x2, 0x2, 
    0x62, 0xf, 0x3, 0x2, 0x2, 0x2, 0x63, 0x66, 0x5, 0x14, 0xb, 0x2, 0x64, 
    0x66, 0x5, 0x12, 0xa, 0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 0x65, 0x64, 
    0x3, 0x2, 0x2, 0x2, 0x66, 0x11, 0x3, 0x2, 0x2, 0x2, 0x67, 0x6f, 0x3, 
    0x2, 0x2, 0x2, 0x68, 0x6f, 0x5, 0x2e, 0x18, 0x2, 0x69, 0x6f, 0x5, 0x38, 
    0x1d, 0x2, 0x6a, 0x6f, 0x5, 0xc, 0x7, 0x2, 0x6b, 0x6f, 0x5, 0x30, 0x19, 
    0x2, 0x6c, 0x6f, 0x5, 0x32, 0x1a, 0x2, 0x6d, 0x6f, 0x5, 0x3a, 0x1e, 
    0x2, 0x6e, 0x67, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x68, 0x3, 0x2, 0x2, 0x2, 
    0x6e, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6e, 
    0x6b, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6d, 
    0x3, 0x2, 0x2, 0x2, 0x6f, 0x13, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x5, 
    0x36, 0x1c, 0x2, 0x71, 0x15, 0x3, 0x2, 0x2, 0x2, 0x72, 0x76, 0x5, 0x18, 
    0xd, 0x2, 0x73, 0x76, 0x5, 0x22, 0x12, 0x2, 0x74, 0x76, 0x7, 0x2c, 0x2, 
    0x2, 0x75, 0x72, 0x3, 0x2, 0x2, 0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 
    0x75, 0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x17, 0x3, 0x2, 0x2, 0x2, 0x77, 
    0x78, 0x5, 0x1a, 0xe, 0x2, 0x78, 0x19, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7f, 
    0x5, 0x1c, 0xf, 0x2, 0x7a, 0x7b, 0x5, 0x1c, 0xf, 0x2, 0x7b, 0x7c, 0x9, 
    0x2, 0x2, 0x2, 0x7c, 0x7d, 0x5, 0x1a, 0xe, 0x2, 0x7d, 0x7f, 0x3, 0x2, 
    0x2, 0x2, 0x7e, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7a, 0x3, 0x2, 0x2, 
    0x2, 0x7f, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x80, 0x86, 0x5, 0x1e, 0x10, 0x2, 
    0x81, 0x82, 0x5, 0x1e, 0x10, 0x2, 0x82, 0x83, 0x9, 0x3, 0x2, 0x2, 0x83, 
    0x84, 0x5, 0x1c, 0xf, 0x2, 0x84, 0x86, 0x3, 0x2, 0x2, 0x2, 0x85, 0x80, 
    0x3, 0x2, 0x2, 0x2, 0x85, 0x81, 0x3, 0x2, 0x2, 0x2, 0x86, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0x87, 0x8b, 0x5, 0x20, 0x11, 0x2, 0x88, 0x89, 0x9, 0x2, 
    0x2, 0x2, 0x89, 0x8b, 0x5, 0x1e, 0x10, 0x2, 0x8a, 0x87, 0x3, 0x2, 0x2, 
    0x2, 0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x8c, 0x93, 0x7, 0x2b, 0x2, 0x2, 0x8d, 0x93, 0x7, 0x2a, 0x2, 0x2, 0x8e, 
    0x8f, 0x7, 0x21, 0x2, 0x2, 0x8f, 0x90, 0x5, 0x18, 0xd, 0x2, 0x90, 0x91, 
    0x7, 0x22, 0x2, 0x2, 0x91, 0x93, 0x3, 0x2, 0x2, 0x2, 0x92, 0x8c, 0x3, 
    0x2, 0x2, 0x2, 0x92, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x92, 0x8e, 0x3, 0x2, 
    0x2, 0x2, 0x93, 0x21, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x5, 0x24, 0x13, 
    0x2, 0x95, 0x23, 0x3, 0x2, 0x2, 0x2, 0x96, 0x9c, 0x5, 0x26, 0x14, 0x2, 
    0x97, 0x98, 0x5, 0x26, 0x14, 0x2, 0x98, 0x99, 0x7, 0x8, 0x2, 0x2, 0x99, 
    0x9a, 0x5, 0x24, 0x13, 0x2, 0x9a, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x96, 
    0x3, 0x2, 0x2, 0x2, 0x9b, 0x97, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0x9d, 0xa3, 0x5, 0x28, 0x15, 0x2, 0x9e, 0x9f, 0x5, 0x28, 
    0x15, 0x2, 0x9f, 0xa0, 0x7, 0x9, 0x2, 0x2, 0xa0, 0xa1, 0x5, 0x26, 0x14, 
    0x2, 0xa1, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x9d, 0x3, 0x2, 0x2, 0x2, 
    0xa2, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa3, 0x27, 0x3, 0x2, 0x2, 0x2, 0xa4, 
    0xa8, 0x5, 0x2a, 0x16, 0x2, 0xa5, 0xa6, 0x7, 0xa, 0x2, 0x2, 0xa6, 0xa8, 
    0x5, 0x2a, 0x16, 0x2, 0xa7, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa5, 0x3, 
    0x2, 0x2, 0x2, 0xa8, 0x29, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaf, 0x5, 0x2c, 
    0x17, 0x2, 0xaa, 0xab, 0x7, 0x21, 0x2, 0x2, 0xab, 0xac, 0x5, 0x22, 0x12, 
    0x2, 0xac, 0xad, 0x7, 0x22, 0x2, 0x2, 0xad, 0xaf, 0x3, 0x2, 0x2, 0x2, 
    0xae, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xaf, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x5, 0x18, 0xd, 0x2, 0xb1, 0xb2, 
    0x7, 0x1c, 0x2, 0x2, 0xb2, 0xb3, 0x5, 0x18, 0xd, 0x2, 0xb3, 0xc9, 0x3, 
    0x2, 0x2, 0x2, 0xb4, 0xb5, 0x5, 0x18, 0xd, 0x2, 0xb5, 0xb6, 0x7, 0x1d, 
    0x2, 0x2, 0xb6, 0xb7, 0x5, 0x18, 0xd, 0x2, 0xb7, 0xc9, 0x3, 0x2, 0x2, 
    0x2, 0xb8, 0xb9, 0x5, 0x18, 0xd, 0x2, 0xb9, 0xba, 0x7, 0x1b, 0x2, 0x2, 
    0xba, 0xbb, 0x5, 0x18, 0xd, 0x2, 0xbb, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xbc, 
    0xbd, 0x5, 0x18, 0xd, 0x2, 0xbd, 0xbe, 0x7, 0x20, 0x2, 0x2, 0xbe, 0xbf, 
    0x5, 0x18, 0xd, 0x2, 0xbf, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x5, 
    0x18, 0xd, 0x2, 0xc1, 0xc2, 0x7, 0x1f, 0x2, 0x2, 0xc2, 0xc3, 0x5, 0x18, 
    0xd, 0x2, 0xc3, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x5, 0x18, 0xd, 
    0x2, 0xc5, 0xc6, 0x7, 0x1e, 0x2, 0x2, 0xc6, 0xc7, 0x5, 0x18, 0xd, 0x2, 
    0xc7, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xc8, 
    0xb4, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xbc, 
    0x3, 0x2, 0x2, 0x2, 0xc8, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc4, 0x3, 
    0x2, 0x2, 0x2, 0xc9, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x7, 0x2a, 
    0x2, 0x2, 0xcb, 0xcc, 0x7, 0x17, 0x2, 0x2, 0xcc, 0xcd, 0x5, 0x16, 0xc, 
    0x2, 0xcd, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x7, 0xb, 0x2, 0x2, 
    0xcf, 0xd0, 0x7, 0x21, 0x2, 0x2, 0xd0, 0xd1, 0x7, 0x2a, 0x2, 0x2, 0xd1, 
    0xd2, 0x7, 0x22, 0x2, 0x2, 0xd2, 0x31, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 
    0x7, 0xc, 0x2, 0x2, 0xd4, 0xd5, 0x7, 0x21, 0x2, 0x2, 0xd5, 0xd6, 0x5, 
    0x16, 0xc, 0x2, 0xd6, 0xd7, 0x7, 0x22, 0x2, 0x2, 0xd7, 0x33, 0x3, 0x2, 
    0x2, 0x2, 0xd8, 0xd9, 0x7, 0xd, 0x2, 0x2, 0xd9, 0xda, 0x5, 0x22, 0x12, 
    0x2, 0xda, 0xdb, 0x7, 0xe, 0x2, 0x2, 0xdb, 0xdc, 0x5, 0xc, 0x7, 0x2, 
    0xdc, 0x35, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x7, 0xd, 0x2, 0x2, 0xde, 
    0xdf, 0x5, 0x22, 0x12, 0x2, 0xdf, 0xe0, 0x7, 0xe, 0x2, 0x2, 0xe0, 0xe1, 
    0x5, 0x14, 0xb, 0x2, 0xe1, 0xea, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 0x7, 
    0xd, 0x2, 0x2, 0xe3, 0xe4, 0x5, 0x22, 0x12, 0x2, 0xe4, 0xe5, 0x7, 0xe, 
    0x2, 0x2, 0xe5, 0xe6, 0x5, 0x12, 0xa, 0x2, 0xe6, 0xe7, 0x7, 0xf, 0x2, 
    0x2, 0xe7, 0xe8, 0x5, 0x14, 0xb, 0x2, 0xe8, 0xea, 0x3, 0x2, 0x2, 0x2, 
    0xe9, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xea, 
    0x37, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x7, 0xd, 0x2, 0x2, 0xec, 0xed, 
    0x5, 0x22, 0x12, 0x2, 0xed, 0xee, 0x7, 0xe, 0x2, 0x2, 0xee, 0xef, 0x5, 
    0x12, 0xa, 0x2, 0xef, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x7, 0xd, 
    0x2, 0x2, 0xf1, 0xf2, 0x5, 0x22, 0x12, 0x2, 0xf2, 0xf3, 0x7, 0xe, 0x2, 
    0x2, 0xf3, 0xf4, 0x5, 0x12, 0xa, 0x2, 0xf4, 0xf5, 0x7, 0xf, 0x2, 0x2, 
    0xf5, 0xf6, 0x5, 0x12, 0xa, 0x2, 0xf6, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xf7, 
    0xeb, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x39, 
    0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 0x7, 0x10, 0x2, 0x2, 0xfa, 0xfb, 0x5, 
    0xe, 0x8, 0x2, 0xfb, 0xfc, 0x7, 0x11, 0x2, 0x2, 0xfc, 0xfd, 0x5, 0x22, 
    0x12, 0x2, 0xfd, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x13, 0x48, 0x53, 0x61, 0x65, 
    0x6e, 0x75, 0x7e, 0x85, 0x8a, 0x92, 0x9b, 0xa2, 0xa7, 0xae, 0xc8, 0xe9, 
    0xf7, 
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
