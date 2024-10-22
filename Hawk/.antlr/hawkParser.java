// Generated from c:/Users/gusbr/Desktop/CodingShit/Romulus-I/Hawk/hawkParser.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class hawkParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		KBOOL=1, KINT=2, KCHAR=3, KVOID=4, KADD=5, KSUB=6, KMUL=7, KDIV=8, KMOD=9, 
		KBAND=10, KBOR=11, KBNOT=12, KNOT=13, KXOR=14, KOR=15, KAND=16, KSHL=17, 
		KSHR=18, LPAREN=19, RPAREN=20, LBRACKET=21, RBRACKET=22, LBRACE=23, RBRACE=24, 
		KASSIGN=25, KADDASSIGN=26, KSUBASSIGN=27, KMULASSIGN=28, KDIVASSIGN=29, 
		KMODASSIGN=30, KANDASSIGN=31, KORASSIGN=32, KNOTASSIGN=33, KXORASSIGN=34, 
		KSHLASSIGN=35, KSHRASSIGN=36, KQUESTION=37, KCOLON=38, KEQ=39, KNE=40, 
		KG=41, KL=42, KGE=43, KLE=44, KINC=45, KDEC=46, KSTATIC=47, KCONST=48, 
		KSTRUCT=49, KIF=50, KELSE=51, KWHILE=52, KDO=53, KFOR=54, COMMA=55, SEMICOLON=56, 
		DOT=57, ARROW=58, ID=59, INT=60, HEX=61, BIN=62, COMMENT=63, BLOCKCOMMENT=64, 
		WS=65;
	public static final int
		RULE_program = 0, RULE_type = 1, RULE_op = 2, RULE_assignOp = 3, RULE_number = 4, 
		RULE_cond = 5, RULE_stmt = 6, RULE_trueStmt = 7, RULE_expr = 8, RULE_functionStmt = 9, 
		RULE_ifStmt = 10, RULE_ifBlock = 11, RULE_elifBlock = 12, RULE_elseBlock = 13, 
		RULE_whileStmt = 14, RULE_forRangeStmt = 15, RULE_forEachStmt = 16, RULE_doWhileStmt = 17, 
		RULE_struct = 18;
	private static String[] makeRuleNames() {
		return new String[] {
			"program", "type", "op", "assignOp", "number", "cond", "stmt", "trueStmt", 
			"expr", "functionStmt", "ifStmt", "ifBlock", "elifBlock", "elseBlock", 
			"whileStmt", "forRangeStmt", "forEachStmt", "doWhileStmt", "struct"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'bool'", "'int'", "'char'", "'void'", "'+'", "'-'", "'*'", "'/'", 
			"'%'", "'&'", "'|'", "'~'", "'!'", "'^'", "'||'", "'&&'", "'<<'", "'>>'", 
			"'('", "')'", "'['", "']'", "'{'", "'}'", "'='", "'+='", "'-='", "'*='", 
			"'/='", "'%='", "'&='", "'|='", "'~='", "'^='", "'<<='", "'>>='", "'?'", 
			"':'", "'=='", "'!='", "'>'", "'<'", "'>='", "'<='", "'++'", "'--'", 
			"'static'", "'const'", "'struct'", "'if'", "'else'", "'while'", "'do'", 
			"'for'", "','", "';'", "'.'", "'->'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "KBOOL", "KINT", "KCHAR", "KVOID", "KADD", "KSUB", "KMUL", "KDIV", 
			"KMOD", "KBAND", "KBOR", "KBNOT", "KNOT", "KXOR", "KOR", "KAND", "KSHL", 
			"KSHR", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", "LBRACE", "RBRACE", 
			"KASSIGN", "KADDASSIGN", "KSUBASSIGN", "KMULASSIGN", "KDIVASSIGN", "KMODASSIGN", 
			"KANDASSIGN", "KORASSIGN", "KNOTASSIGN", "KXORASSIGN", "KSHLASSIGN", 
			"KSHRASSIGN", "KQUESTION", "KCOLON", "KEQ", "KNE", "KG", "KL", "KGE", 
			"KLE", "KINC", "KDEC", "KSTATIC", "KCONST", "KSTRUCT", "KIF", "KELSE", 
			"KWHILE", "KDO", "KFOR", "COMMA", "SEMICOLON", "DOT", "ARROW", "ID", 
			"INT", "HEX", "BIN", "COMMENT", "BLOCKCOMMENT", "WS"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "hawkParser.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public hawkParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ProgramContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(hawkParser.EOF, 0); }
		public List<StmtContext> stmt() {
			return getRuleContexts(StmtContext.class);
		}
		public StmtContext stmt(int i) {
			return getRuleContext(StmtContext.class,i);
		}
		public ProgramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program; }
	}

	public final ProgramContext program() throws RecognitionException {
		ProgramContext _localctx = new ProgramContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_program);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(39); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(38);
				stmt();
				}
				}
				setState(41); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & 8680653097393456286L) != 0) );
			setState(43);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TypeContext extends ParserRuleContext {
		public TerminalNode KBOOL() { return getToken(hawkParser.KBOOL, 0); }
		public List<TerminalNode> KMUL() { return getTokens(hawkParser.KMUL); }
		public TerminalNode KMUL(int i) {
			return getToken(hawkParser.KMUL, i);
		}
		public TerminalNode KINT() { return getToken(hawkParser.KINT, 0); }
		public TerminalNode KCHAR() { return getToken(hawkParser.KCHAR, 0); }
		public TerminalNode KVOID() { return getToken(hawkParser.KVOID, 0); }
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_type);
		int _la;
		try {
			setState(73);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case KBOOL:
				enterOuterAlt(_localctx, 1);
				{
				setState(45);
				match(KBOOL);
				setState(49);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==KMUL) {
					{
					{
					setState(46);
					match(KMUL);
					}
					}
					setState(51);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case KINT:
				enterOuterAlt(_localctx, 2);
				{
				setState(52);
				match(KINT);
				setState(56);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==KMUL) {
					{
					{
					setState(53);
					match(KMUL);
					}
					}
					setState(58);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case KCHAR:
				enterOuterAlt(_localctx, 3);
				{
				setState(59);
				match(KCHAR);
				setState(63);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==KMUL) {
					{
					{
					setState(60);
					match(KMUL);
					}
					}
					setState(65);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case KVOID:
				enterOuterAlt(_localctx, 4);
				{
				setState(66);
				match(KVOID);
				setState(70);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==KMUL) {
					{
					{
					setState(67);
					match(KMUL);
					}
					}
					setState(72);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class OpContext extends ParserRuleContext {
		public TerminalNode KADD() { return getToken(hawkParser.KADD, 0); }
		public TerminalNode KSUB() { return getToken(hawkParser.KSUB, 0); }
		public TerminalNode KMUL() { return getToken(hawkParser.KMUL, 0); }
		public TerminalNode KDIV() { return getToken(hawkParser.KDIV, 0); }
		public TerminalNode KMOD() { return getToken(hawkParser.KMOD, 0); }
		public TerminalNode KBAND() { return getToken(hawkParser.KBAND, 0); }
		public TerminalNode KBOR() { return getToken(hawkParser.KBOR, 0); }
		public TerminalNode KBNOT() { return getToken(hawkParser.KBNOT, 0); }
		public TerminalNode KNOT() { return getToken(hawkParser.KNOT, 0); }
		public TerminalNode KXOR() { return getToken(hawkParser.KXOR, 0); }
		public TerminalNode KOR() { return getToken(hawkParser.KOR, 0); }
		public TerminalNode KAND() { return getToken(hawkParser.KAND, 0); }
		public TerminalNode KSHL() { return getToken(hawkParser.KSHL, 0); }
		public TerminalNode KSHR() { return getToken(hawkParser.KSHR, 0); }
		public OpContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_op; }
	}

	public final OpContext op() throws RecognitionException {
		OpContext _localctx = new OpContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_op);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(75);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 524256L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AssignOpContext extends ParserRuleContext {
		public TerminalNode KASSIGN() { return getToken(hawkParser.KASSIGN, 0); }
		public TerminalNode KADDASSIGN() { return getToken(hawkParser.KADDASSIGN, 0); }
		public TerminalNode KSUBASSIGN() { return getToken(hawkParser.KSUBASSIGN, 0); }
		public TerminalNode KMULASSIGN() { return getToken(hawkParser.KMULASSIGN, 0); }
		public TerminalNode KDIVASSIGN() { return getToken(hawkParser.KDIVASSIGN, 0); }
		public TerminalNode KMODASSIGN() { return getToken(hawkParser.KMODASSIGN, 0); }
		public TerminalNode KANDASSIGN() { return getToken(hawkParser.KANDASSIGN, 0); }
		public TerminalNode KORASSIGN() { return getToken(hawkParser.KORASSIGN, 0); }
		public TerminalNode KNOTASSIGN() { return getToken(hawkParser.KNOTASSIGN, 0); }
		public TerminalNode KXORASSIGN() { return getToken(hawkParser.KXORASSIGN, 0); }
		public TerminalNode KSHLASSIGN() { return getToken(hawkParser.KSHLASSIGN, 0); }
		public TerminalNode KSHRASSIGN() { return getToken(hawkParser.KSHRASSIGN, 0); }
		public AssignOpContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignOp; }
	}

	public final AssignOpContext assignOp() throws RecognitionException {
		AssignOpContext _localctx = new AssignOpContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_assignOp);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(77);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 137405399040L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NumberContext extends ParserRuleContext {
		public TerminalNode INT() { return getToken(hawkParser.INT, 0); }
		public TerminalNode HEX() { return getToken(hawkParser.HEX, 0); }
		public TerminalNode BIN() { return getToken(hawkParser.BIN, 0); }
		public NumberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_number; }
	}

	public final NumberContext number() throws RecognitionException {
		NumberContext _localctx = new NumberContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_number);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(79);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 8070450532247928832L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CondContext extends ParserRuleContext {
		public TerminalNode KEQ() { return getToken(hawkParser.KEQ, 0); }
		public TerminalNode KNE() { return getToken(hawkParser.KNE, 0); }
		public TerminalNode KG() { return getToken(hawkParser.KG, 0); }
		public TerminalNode KL() { return getToken(hawkParser.KL, 0); }
		public TerminalNode KGE() { return getToken(hawkParser.KGE, 0); }
		public TerminalNode KLE() { return getToken(hawkParser.KLE, 0); }
		public CondContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_cond; }
	}

	public final CondContext cond() throws RecognitionException {
		CondContext _localctx = new CondContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_cond);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(81);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 34634616274944L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StmtContext extends ParserRuleContext {
		public FunctionStmtContext functionStmt() {
			return getRuleContext(FunctionStmtContext.class,0);
		}
		public IfStmtContext ifStmt() {
			return getRuleContext(IfStmtContext.class,0);
		}
		public WhileStmtContext whileStmt() {
			return getRuleContext(WhileStmtContext.class,0);
		}
		public DoWhileStmtContext doWhileStmt() {
			return getRuleContext(DoWhileStmtContext.class,0);
		}
		public ForRangeStmtContext forRangeStmt() {
			return getRuleContext(ForRangeStmtContext.class,0);
		}
		public ForEachStmtContext forEachStmt() {
			return getRuleContext(ForEachStmtContext.class,0);
		}
		public StructContext struct() {
			return getRuleContext(StructContext.class,0);
		}
		public TrueStmtContext trueStmt() {
			return getRuleContext(TrueStmtContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(hawkParser.SEMICOLON, 0); }
		public StmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmt; }
	}

	public final StmtContext stmt() throws RecognitionException {
		StmtContext _localctx = new StmtContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_stmt);
		try {
			setState(93);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(83);
				functionStmt();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(84);
				ifStmt();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(85);
				whileStmt();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(86);
				doWhileStmt();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(87);
				forRangeStmt();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(88);
				forEachStmt();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(89);
				struct();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(90);
				trueStmt();
				setState(91);
				match(SEMICOLON);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TrueStmtContext extends ParserRuleContext {
		public Token ret;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public AssignOpContext assignOp() {
			return getRuleContext(AssignOpContext.class,0);
		}
		public TerminalNode KSTATIC() { return getToken(hawkParser.KSTATIC, 0); }
		public List<TerminalNode> KCONST() { return getTokens(hawkParser.KCONST); }
		public TerminalNode KCONST(int i) {
			return getToken(hawkParser.KCONST, i);
		}
		public List<TerminalNode> ID() { return getTokens(hawkParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(hawkParser.ID, i);
		}
		public TerminalNode KINC() { return getToken(hawkParser.KINC, 0); }
		public TerminalNode KDEC() { return getToken(hawkParser.KDEC, 0); }
		public List<TypeContext> type() {
			return getRuleContexts(TypeContext.class);
		}
		public TypeContext type(int i) {
			return getRuleContext(TypeContext.class,i);
		}
		public TerminalNode LPAREN() { return getToken(hawkParser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(hawkParser.RPAREN, 0); }
		public List<TerminalNode> COMMA() { return getTokens(hawkParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(hawkParser.COMMA, i);
		}
		public TrueStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_trueStmt; }
	}

	public final TrueStmtContext trueStmt() throws RecognitionException {
		TrueStmtContext _localctx = new TrueStmtContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_trueStmt);
		int _la;
		try {
			setState(137);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(96);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KSTATIC) {
					{
					setState(95);
					match(KSTATIC);
					}
				}

				setState(99);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KCONST) {
					{
					setState(98);
					match(KCONST);
					}
				}

				setState(101);
				expr(0);
				setState(102);
				assignOp();
				setState(103);
				expr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(105);
				match(ID);
				setState(106);
				_la = _input.LA(1);
				if ( !(_la==KINC || _la==KDEC) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(108);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KCONST) {
					{
					setState(107);
					match(KCONST);
					}
				}

				setState(110);
				type();
				setState(111);
				((TrueStmtContext)_localctx).ret = match(ID);
				setState(112);
				match(LPAREN);
				setState(130);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 281474976710686L) != 0)) {
					{
					setState(114);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==KCONST) {
						{
						setState(113);
						match(KCONST);
						}
					}

					setState(116);
					type();
					setState(117);
					match(ID);
					setState(127);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==COMMA) {
						{
						{
						setState(118);
						match(COMMA);
						setState(120);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==KCONST) {
							{
							setState(119);
							match(KCONST);
							}
						}

						setState(122);
						type();
						setState(123);
						match(ID);
						}
						}
						setState(129);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
				}

				setState(132);
				match(RPAREN);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(134);
				_la = _input.LA(1);
				if ( !(_la==KINC || _la==KDEC) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(135);
				match(ID);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(136);
				expr(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExprContext extends ParserRuleContext {
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	 
		public ExprContext() { }
		public void copyFrom(ExprContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class VarExprContext extends ExprContext {
		public TerminalNode ID() { return getToken(hawkParser.ID, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode LBRACKET() { return getToken(hawkParser.LBRACKET, 0); }
		public TerminalNode RBRACKET() { return getToken(hawkParser.RBRACKET, 0); }
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public VarExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class TernaryExprContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode KQUESTION() { return getToken(hawkParser.KQUESTION, 0); }
		public TerminalNode KCOLON() { return getToken(hawkParser.KCOLON, 0); }
		public TernaryExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class PtrAccessExprContext extends ExprContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode ARROW() { return getToken(hawkParser.ARROW, 0); }
		public TerminalNode ID() { return getToken(hawkParser.ID, 0); }
		public PtrAccessExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class DerefExprContext extends ExprContext {
		public TerminalNode KMUL() { return getToken(hawkParser.KMUL, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public DerefExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class AddrExprContext extends ExprContext {
		public TerminalNode KBAND() { return getToken(hawkParser.KBAND, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public AddrExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ArithmeticExprContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public OpContext op() {
			return getRuleContext(OpContext.class,0);
		}
		public ArithmeticExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class RelationalExprContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public CondContext cond() {
			return getRuleContext(CondContext.class,0);
		}
		public RelationalExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class BraceExprContext extends ExprContext {
		public TerminalNode LBRACE() { return getToken(hawkParser.LBRACE, 0); }
		public TerminalNode RBRACE() { return getToken(hawkParser.RBRACE, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(hawkParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(hawkParser.COMMA, i);
		}
		public BraceExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ParenExprContext extends ExprContext {
		public TerminalNode LPAREN() { return getToken(hawkParser.LPAREN, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(hawkParser.RPAREN, 0); }
		public ParenExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class NumExprContext extends ExprContext {
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public NumExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class AccessExprContext extends ExprContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode DOT() { return getToken(hawkParser.DOT, 0); }
		public TerminalNode ID() { return getToken(hawkParser.ID, 0); }
		public AccessExprContext(ExprContext ctx) { copyFrom(ctx); }
	}

	public final ExprContext expr() throws RecognitionException {
		return expr(0);
	}

	private ExprContext expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprContext _localctx = new ExprContext(_ctx, _parentState);
		ExprContext _prevctx = _localctx;
		int _startState = 16;
		enterRecursionRule(_localctx, 16, RULE_expr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(172);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case KMUL:
				{
				_localctx = new DerefExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(140);
				match(KMUL);
				setState(141);
				expr(8);
				}
				break;
			case LPAREN:
				{
				_localctx = new ParenExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(142);
				match(LPAREN);
				setState(143);
				expr(0);
				setState(144);
				match(RPAREN);
				}
				break;
			case KBOOL:
			case KINT:
			case KCHAR:
			case KVOID:
			case ID:
				{
				_localctx = new VarExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(147);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 30L) != 0)) {
					{
					setState(146);
					type();
					}
				}

				setState(149);
				match(ID);
				setState(155);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,17,_ctx) ) {
				case 1:
					{
					setState(150);
					match(LBRACKET);
					setState(152);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 8070450532247928832L) != 0)) {
						{
						setState(151);
						number();
						}
					}

					setState(154);
					match(RBRACKET);
					}
					break;
				}
				}
				break;
			case INT:
			case HEX:
			case BIN:
				{
				_localctx = new NumExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(157);
				number();
				}
				break;
			case KBAND:
				{
				_localctx = new AddrExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(158);
				match(KBAND);
				setState(159);
				expr(4);
				}
				break;
			case LBRACE:
				{
				_localctx = new BraceExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(160);
				match(LBRACE);
				setState(169);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 8646911284560266398L) != 0)) {
					{
					setState(161);
					expr(0);
					setState(166);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==COMMA) {
						{
						{
						setState(162);
						match(COMMA);
						setState(163);
						expr(0);
						}
						}
						setState(168);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
				}

				setState(171);
				match(RBRACE);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(196);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(194);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,21,_ctx) ) {
					case 1:
						{
						_localctx = new ArithmeticExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(174);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(175);
						op();
						setState(176);
						expr(12);
						}
						break;
					case 2:
						{
						_localctx = new RelationalExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(178);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(179);
						cond();
						setState(180);
						expr(11);
						}
						break;
					case 3:
						{
						_localctx = new TernaryExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(182);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(183);
						match(KQUESTION);
						setState(184);
						expr(0);
						setState(185);
						match(KCOLON);
						setState(186);
						expr(10);
						}
						break;
					case 4:
						{
						_localctx = new AccessExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(188);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(189);
						match(DOT);
						setState(190);
						match(ID);
						}
						break;
					case 5:
						{
						_localctx = new PtrAccessExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(191);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(192);
						match(ARROW);
						setState(193);
						match(ID);
						}
						break;
					}
					} 
				}
				setState(198);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FunctionStmtContext extends ParserRuleContext {
		public Token ret;
		public List<TypeContext> type() {
			return getRuleContexts(TypeContext.class);
		}
		public TypeContext type(int i) {
			return getRuleContext(TypeContext.class,i);
		}
		public TerminalNode LPAREN() { return getToken(hawkParser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(hawkParser.RPAREN, 0); }
		public TerminalNode LBRACE() { return getToken(hawkParser.LBRACE, 0); }
		public TerminalNode RBRACE() { return getToken(hawkParser.RBRACE, 0); }
		public List<TerminalNode> ID() { return getTokens(hawkParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(hawkParser.ID, i);
		}
		public List<TerminalNode> KCONST() { return getTokens(hawkParser.KCONST); }
		public TerminalNode KCONST(int i) {
			return getToken(hawkParser.KCONST, i);
		}
		public List<StmtContext> stmt() {
			return getRuleContexts(StmtContext.class);
		}
		public StmtContext stmt(int i) {
			return getRuleContext(StmtContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(hawkParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(hawkParser.COMMA, i);
		}
		public FunctionStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionStmt; }
	}

	public final FunctionStmtContext functionStmt() throws RecognitionException {
		FunctionStmtContext _localctx = new FunctionStmtContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_functionStmt);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(200);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==KCONST) {
				{
				setState(199);
				match(KCONST);
				}
			}

			setState(202);
			type();
			setState(203);
			((FunctionStmtContext)_localctx).ret = match(ID);
			setState(204);
			match(LPAREN);
			setState(222);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 281474976710686L) != 0)) {
				{
				setState(206);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KCONST) {
					{
					setState(205);
					match(KCONST);
					}
				}

				setState(208);
				type();
				setState(209);
				match(ID);
				setState(219);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(210);
					match(COMMA);
					setState(212);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==KCONST) {
						{
						setState(211);
						match(KCONST);
						}
					}

					setState(214);
					type();
					setState(215);
					match(ID);
					}
					}
					setState(221);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(224);
			match(RPAREN);
			setState(225);
			match(LBRACE);
			setState(229);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 8680653097393456286L) != 0)) {
				{
				{
				setState(226);
				stmt();
				}
				}
				setState(231);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(232);
			match(RBRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IfStmtContext extends ParserRuleContext {
		public IfBlockContext ifBlock() {
			return getRuleContext(IfBlockContext.class,0);
		}
		public List<ElifBlockContext> elifBlock() {
			return getRuleContexts(ElifBlockContext.class);
		}
		public ElifBlockContext elifBlock(int i) {
			return getRuleContext(ElifBlockContext.class,i);
		}
		public ElseBlockContext elseBlock() {
			return getRuleContext(ElseBlockContext.class,0);
		}
		public IfStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifStmt; }
	}

	public final IfStmtContext ifStmt() throws RecognitionException {
		IfStmtContext _localctx = new IfStmtContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_ifStmt);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(234);
			ifBlock();
			setState(238);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,29,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(235);
					elifBlock();
					}
					} 
				}
				setState(240);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,29,_ctx);
			}
			setState(242);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,30,_ctx) ) {
			case 1:
				{
				setState(241);
				elseBlock();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IfBlockContext extends ParserRuleContext {
		public TerminalNode KIF() { return getToken(hawkParser.KIF, 0); }
		public TerminalNode LPAREN() { return getToken(hawkParser.LPAREN, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(hawkParser.RPAREN, 0); }
		public TerminalNode LBRACE() { return getToken(hawkParser.LBRACE, 0); }
		public TerminalNode RBRACE() { return getToken(hawkParser.RBRACE, 0); }
		public List<StmtContext> stmt() {
			return getRuleContexts(StmtContext.class);
		}
		public StmtContext stmt(int i) {
			return getRuleContext(StmtContext.class,i);
		}
		public IfBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifBlock; }
	}

	public final IfBlockContext ifBlock() throws RecognitionException {
		IfBlockContext _localctx = new IfBlockContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_ifBlock);
		int _la;
		try {
			setState(263);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,32,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(244);
				match(KIF);
				setState(245);
				match(LPAREN);
				setState(246);
				expr(0);
				setState(247);
				match(RPAREN);
				setState(248);
				match(LBRACE);
				setState(252);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 8680653097393456286L) != 0)) {
					{
					{
					setState(249);
					stmt();
					}
					}
					setState(254);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(255);
				match(RBRACE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(257);
				match(KIF);
				setState(258);
				match(LPAREN);
				setState(259);
				expr(0);
				setState(260);
				match(RPAREN);
				setState(261);
				stmt();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ElifBlockContext extends ParserRuleContext {
		public TerminalNode KELSE() { return getToken(hawkParser.KELSE, 0); }
		public TerminalNode KIF() { return getToken(hawkParser.KIF, 0); }
		public TerminalNode LPAREN() { return getToken(hawkParser.LPAREN, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(hawkParser.RPAREN, 0); }
		public TerminalNode LBRACE() { return getToken(hawkParser.LBRACE, 0); }
		public TerminalNode RBRACE() { return getToken(hawkParser.RBRACE, 0); }
		public List<StmtContext> stmt() {
			return getRuleContexts(StmtContext.class);
		}
		public StmtContext stmt(int i) {
			return getRuleContext(StmtContext.class,i);
		}
		public ElifBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_elifBlock; }
	}

	public final ElifBlockContext elifBlock() throws RecognitionException {
		ElifBlockContext _localctx = new ElifBlockContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_elifBlock);
		int _la;
		try {
			setState(286);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,34,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(265);
				match(KELSE);
				setState(266);
				match(KIF);
				setState(267);
				match(LPAREN);
				setState(268);
				expr(0);
				setState(269);
				match(RPAREN);
				setState(270);
				match(LBRACE);
				setState(274);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 8680653097393456286L) != 0)) {
					{
					{
					setState(271);
					stmt();
					}
					}
					setState(276);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(277);
				match(RBRACE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(279);
				match(KELSE);
				setState(280);
				match(KIF);
				setState(281);
				match(LPAREN);
				setState(282);
				expr(0);
				setState(283);
				match(RPAREN);
				setState(284);
				stmt();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ElseBlockContext extends ParserRuleContext {
		public TerminalNode KELSE() { return getToken(hawkParser.KELSE, 0); }
		public TerminalNode LBRACE() { return getToken(hawkParser.LBRACE, 0); }
		public TerminalNode RBRACE() { return getToken(hawkParser.RBRACE, 0); }
		public List<StmtContext> stmt() {
			return getRuleContexts(StmtContext.class);
		}
		public StmtContext stmt(int i) {
			return getRuleContext(StmtContext.class,i);
		}
		public ElseBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_elseBlock; }
	}

	public final ElseBlockContext elseBlock() throws RecognitionException {
		ElseBlockContext _localctx = new ElseBlockContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_elseBlock);
		int _la;
		try {
			setState(299);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,36,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(288);
				match(KELSE);
				setState(289);
				match(LBRACE);
				setState(293);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 8680653097393456286L) != 0)) {
					{
					{
					setState(290);
					stmt();
					}
					}
					setState(295);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(296);
				match(RBRACE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(297);
				match(KELSE);
				setState(298);
				stmt();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class WhileStmtContext extends ParserRuleContext {
		public TerminalNode KWHILE() { return getToken(hawkParser.KWHILE, 0); }
		public TerminalNode LPAREN() { return getToken(hawkParser.LPAREN, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(hawkParser.RPAREN, 0); }
		public TerminalNode LBRACE() { return getToken(hawkParser.LBRACE, 0); }
		public TerminalNode RBRACE() { return getToken(hawkParser.RBRACE, 0); }
		public List<StmtContext> stmt() {
			return getRuleContexts(StmtContext.class);
		}
		public StmtContext stmt(int i) {
			return getRuleContext(StmtContext.class,i);
		}
		public WhileStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_whileStmt; }
	}

	public final WhileStmtContext whileStmt() throws RecognitionException {
		WhileStmtContext _localctx = new WhileStmtContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_whileStmt);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(301);
			match(KWHILE);
			setState(302);
			match(LPAREN);
			setState(303);
			expr(0);
			setState(304);
			match(RPAREN);
			setState(305);
			match(LBRACE);
			setState(309);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 8680653097393456286L) != 0)) {
				{
				{
				setState(306);
				stmt();
				}
				}
				setState(311);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(312);
			match(RBRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ForRangeStmtContext extends ParserRuleContext {
		public TrueStmtContext init;
		public ExprContext test;
		public TrueStmtContext inc;
		public TerminalNode KFOR() { return getToken(hawkParser.KFOR, 0); }
		public TerminalNode LPAREN() { return getToken(hawkParser.LPAREN, 0); }
		public List<TerminalNode> SEMICOLON() { return getTokens(hawkParser.SEMICOLON); }
		public TerminalNode SEMICOLON(int i) {
			return getToken(hawkParser.SEMICOLON, i);
		}
		public TerminalNode RPAREN() { return getToken(hawkParser.RPAREN, 0); }
		public TerminalNode LBRACE() { return getToken(hawkParser.LBRACE, 0); }
		public TerminalNode RBRACE() { return getToken(hawkParser.RBRACE, 0); }
		public List<TrueStmtContext> trueStmt() {
			return getRuleContexts(TrueStmtContext.class);
		}
		public TrueStmtContext trueStmt(int i) {
			return getRuleContext(TrueStmtContext.class,i);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public List<StmtContext> stmt() {
			return getRuleContexts(StmtContext.class);
		}
		public StmtContext stmt(int i) {
			return getRuleContext(StmtContext.class,i);
		}
		public ForRangeStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_forRangeStmt; }
	}

	public final ForRangeStmtContext forRangeStmt() throws RecognitionException {
		ForRangeStmtContext _localctx = new ForRangeStmtContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_forRangeStmt);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(314);
			match(KFOR);
			setState(315);
			match(LPAREN);
			setState(316);
			((ForRangeStmtContext)_localctx).init = trueStmt();
			setState(317);
			match(SEMICOLON);
			setState(318);
			((ForRangeStmtContext)_localctx).test = expr(0);
			setState(319);
			match(SEMICOLON);
			setState(320);
			((ForRangeStmtContext)_localctx).inc = trueStmt();
			setState(321);
			match(RPAREN);
			setState(322);
			match(LBRACE);
			setState(326);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 8680653097393456286L) != 0)) {
				{
				{
				setState(323);
				stmt();
				}
				}
				setState(328);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(329);
			match(RBRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ForEachStmtContext extends ParserRuleContext {
		public Token it;
		public ExprContext var;
		public TerminalNode KFOR() { return getToken(hawkParser.KFOR, 0); }
		public TerminalNode LPAREN() { return getToken(hawkParser.LPAREN, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode KCOLON() { return getToken(hawkParser.KCOLON, 0); }
		public TerminalNode RPAREN() { return getToken(hawkParser.RPAREN, 0); }
		public TerminalNode LBRACE() { return getToken(hawkParser.LBRACE, 0); }
		public TerminalNode RBRACE() { return getToken(hawkParser.RBRACE, 0); }
		public TerminalNode ID() { return getToken(hawkParser.ID, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode KCONST() { return getToken(hawkParser.KCONST, 0); }
		public List<StmtContext> stmt() {
			return getRuleContexts(StmtContext.class);
		}
		public StmtContext stmt(int i) {
			return getRuleContext(StmtContext.class,i);
		}
		public ForEachStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_forEachStmt; }
	}

	public final ForEachStmtContext forEachStmt() throws RecognitionException {
		ForEachStmtContext _localctx = new ForEachStmtContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_forEachStmt);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(331);
			match(KFOR);
			setState(332);
			match(LPAREN);
			setState(334);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==KCONST) {
				{
				setState(333);
				match(KCONST);
				}
			}

			setState(336);
			type();
			setState(337);
			((ForEachStmtContext)_localctx).it = match(ID);
			setState(338);
			match(KCOLON);
			setState(339);
			((ForEachStmtContext)_localctx).var = expr(0);
			setState(340);
			match(RPAREN);
			setState(341);
			match(LBRACE);
			setState(345);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 8680653097393456286L) != 0)) {
				{
				{
				setState(342);
				stmt();
				}
				}
				setState(347);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(348);
			match(RBRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DoWhileStmtContext extends ParserRuleContext {
		public TerminalNode KDO() { return getToken(hawkParser.KDO, 0); }
		public TerminalNode LBRACE() { return getToken(hawkParser.LBRACE, 0); }
		public TerminalNode RBRACE() { return getToken(hawkParser.RBRACE, 0); }
		public TerminalNode KWHILE() { return getToken(hawkParser.KWHILE, 0); }
		public TerminalNode LPAREN() { return getToken(hawkParser.LPAREN, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(hawkParser.RPAREN, 0); }
		public TerminalNode SEMICOLON() { return getToken(hawkParser.SEMICOLON, 0); }
		public List<StmtContext> stmt() {
			return getRuleContexts(StmtContext.class);
		}
		public StmtContext stmt(int i) {
			return getRuleContext(StmtContext.class,i);
		}
		public DoWhileStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_doWhileStmt; }
	}

	public final DoWhileStmtContext doWhileStmt() throws RecognitionException {
		DoWhileStmtContext _localctx = new DoWhileStmtContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_doWhileStmt);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(350);
			match(KDO);
			setState(351);
			match(LBRACE);
			setState(355);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 8680653097393456286L) != 0)) {
				{
				{
				setState(352);
				stmt();
				}
				}
				setState(357);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(358);
			match(RBRACE);
			setState(359);
			match(KWHILE);
			setState(360);
			match(LPAREN);
			setState(361);
			expr(0);
			setState(362);
			match(RPAREN);
			setState(363);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StructContext extends ParserRuleContext {
		public TerminalNode KSTRUCT() { return getToken(hawkParser.KSTRUCT, 0); }
		public TerminalNode ID() { return getToken(hawkParser.ID, 0); }
		public TerminalNode LBRACE() { return getToken(hawkParser.LBRACE, 0); }
		public TerminalNode RBRACE() { return getToken(hawkParser.RBRACE, 0); }
		public TerminalNode SEMICOLON() { return getToken(hawkParser.SEMICOLON, 0); }
		public List<StmtContext> stmt() {
			return getRuleContexts(StmtContext.class);
		}
		public StmtContext stmt(int i) {
			return getRuleContext(StmtContext.class,i);
		}
		public StructContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_struct; }
	}

	public final StructContext struct() throws RecognitionException {
		StructContext _localctx = new StructContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_struct);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(365);
			match(KSTRUCT);
			setState(366);
			match(ID);
			setState(367);
			match(LBRACE);
			setState(371);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 8680653097393456286L) != 0)) {
				{
				{
				setState(368);
				stmt();
				}
				}
				setState(373);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(374);
			match(RBRACE);
			setState(375);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 8:
			return expr_sempred((ExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 11);
		case 1:
			return precpred(_ctx, 10);
		case 2:
			return precpred(_ctx, 9);
		case 3:
			return precpred(_ctx, 3);
		case 4:
			return precpred(_ctx, 2);
		}
		return true;
	}

	public static final String _serializedATN =
		"\u0004\u0001A\u017a\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0001\u0000\u0004\u0000(\b\u0000\u000b\u0000\f\u0000)\u0001\u0000\u0001"+
		"\u0000\u0001\u0001\u0001\u0001\u0005\u00010\b\u0001\n\u0001\f\u00013\t"+
		"\u0001\u0001\u0001\u0001\u0001\u0005\u00017\b\u0001\n\u0001\f\u0001:\t"+
		"\u0001\u0001\u0001\u0001\u0001\u0005\u0001>\b\u0001\n\u0001\f\u0001A\t"+
		"\u0001\u0001\u0001\u0001\u0001\u0005\u0001E\b\u0001\n\u0001\f\u0001H\t"+
		"\u0001\u0003\u0001J\b\u0001\u0001\u0002\u0001\u0002\u0001\u0003\u0001"+
		"\u0003\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005\u0001\u0006\u0001"+
		"\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001"+
		"\u0006\u0001\u0006\u0001\u0006\u0003\u0006^\b\u0006\u0001\u0007\u0003"+
		"\u0007a\b\u0007\u0001\u0007\u0003\u0007d\b\u0007\u0001\u0007\u0001\u0007"+
		"\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0003\u0007"+
		"m\b\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0003\u0007"+
		"s\b\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0003\u0007"+
		"y\b\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0005\u0007~\b\u0007\n\u0007"+
		"\f\u0007\u0081\t\u0007\u0003\u0007\u0083\b\u0007\u0001\u0007\u0001\u0007"+
		"\u0001\u0007\u0001\u0007\u0001\u0007\u0003\u0007\u008a\b\u0007\u0001\b"+
		"\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0003\b\u0094"+
		"\b\b\u0001\b\u0001\b\u0001\b\u0003\b\u0099\b\b\u0001\b\u0003\b\u009c\b"+
		"\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0005\b\u00a5"+
		"\b\b\n\b\f\b\u00a8\t\b\u0003\b\u00aa\b\b\u0001\b\u0003\b\u00ad\b\b\u0001"+
		"\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001"+
		"\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001"+
		"\b\u0001\b\u0005\b\u00c3\b\b\n\b\f\b\u00c6\t\b\u0001\t\u0003\t\u00c9\b"+
		"\t\u0001\t\u0001\t\u0001\t\u0001\t\u0003\t\u00cf\b\t\u0001\t\u0001\t\u0001"+
		"\t\u0001\t\u0003\t\u00d5\b\t\u0001\t\u0001\t\u0001\t\u0005\t\u00da\b\t"+
		"\n\t\f\t\u00dd\t\t\u0003\t\u00df\b\t\u0001\t\u0001\t\u0001\t\u0005\t\u00e4"+
		"\b\t\n\t\f\t\u00e7\t\t\u0001\t\u0001\t\u0001\n\u0001\n\u0005\n\u00ed\b"+
		"\n\n\n\f\n\u00f0\t\n\u0001\n\u0003\n\u00f3\b\n\u0001\u000b\u0001\u000b"+
		"\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0005\u000b\u00fb\b\u000b"+
		"\n\u000b\f\u000b\u00fe\t\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0003\u000b\u0108"+
		"\b\u000b\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0005"+
		"\f\u0111\b\f\n\f\f\f\u0114\t\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f"+
		"\u0001\f\u0001\f\u0001\f\u0001\f\u0003\f\u011f\b\f\u0001\r\u0001\r\u0001"+
		"\r\u0005\r\u0124\b\r\n\r\f\r\u0127\t\r\u0001\r\u0001\r\u0001\r\u0003\r"+
		"\u012c\b\r\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e"+
		"\u0001\u000e\u0005\u000e\u0134\b\u000e\n\u000e\f\u000e\u0137\t\u000e\u0001"+
		"\u000e\u0001\u000e\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001"+
		"\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0005"+
		"\u000f\u0145\b\u000f\n\u000f\f\u000f\u0148\t\u000f\u0001\u000f\u0001\u000f"+
		"\u0001\u0010\u0001\u0010\u0001\u0010\u0003\u0010\u014f\b\u0010\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010"+
		"\u0005\u0010\u0158\b\u0010\n\u0010\f\u0010\u015b\t\u0010\u0001\u0010\u0001"+
		"\u0010\u0001\u0011\u0001\u0011\u0001\u0011\u0005\u0011\u0162\b\u0011\n"+
		"\u0011\f\u0011\u0165\t\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001"+
		"\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0012\u0001\u0012\u0001"+
		"\u0012\u0001\u0012\u0005\u0012\u0172\b\u0012\n\u0012\f\u0012\u0175\t\u0012"+
		"\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0000\u0001\u0010\u0013"+
		"\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016\u0018\u001a"+
		"\u001c\u001e \"$\u0000\u0005\u0001\u0000\u0005\u0012\u0001\u0000\u0019"+
		"$\u0001\u0000<>\u0001\u0000\',\u0001\u0000-.\u01a3\u0000\'\u0001\u0000"+
		"\u0000\u0000\u0002I\u0001\u0000\u0000\u0000\u0004K\u0001\u0000\u0000\u0000"+
		"\u0006M\u0001\u0000\u0000\u0000\bO\u0001\u0000\u0000\u0000\nQ\u0001\u0000"+
		"\u0000\u0000\f]\u0001\u0000\u0000\u0000\u000e\u0089\u0001\u0000\u0000"+
		"\u0000\u0010\u00ac\u0001\u0000\u0000\u0000\u0012\u00c8\u0001\u0000\u0000"+
		"\u0000\u0014\u00ea\u0001\u0000\u0000\u0000\u0016\u0107\u0001\u0000\u0000"+
		"\u0000\u0018\u011e\u0001\u0000\u0000\u0000\u001a\u012b\u0001\u0000\u0000"+
		"\u0000\u001c\u012d\u0001\u0000\u0000\u0000\u001e\u013a\u0001\u0000\u0000"+
		"\u0000 \u014b\u0001\u0000\u0000\u0000\"\u015e\u0001\u0000\u0000\u0000"+
		"$\u016d\u0001\u0000\u0000\u0000&(\u0003\f\u0006\u0000\'&\u0001\u0000\u0000"+
		"\u0000()\u0001\u0000\u0000\u0000)\'\u0001\u0000\u0000\u0000)*\u0001\u0000"+
		"\u0000\u0000*+\u0001\u0000\u0000\u0000+,\u0005\u0000\u0000\u0001,\u0001"+
		"\u0001\u0000\u0000\u0000-1\u0005\u0001\u0000\u0000.0\u0005\u0007\u0000"+
		"\u0000/.\u0001\u0000\u0000\u000003\u0001\u0000\u0000\u00001/\u0001\u0000"+
		"\u0000\u000012\u0001\u0000\u0000\u00002J\u0001\u0000\u0000\u000031\u0001"+
		"\u0000\u0000\u000048\u0005\u0002\u0000\u000057\u0005\u0007\u0000\u0000"+
		"65\u0001\u0000\u0000\u00007:\u0001\u0000\u0000\u000086\u0001\u0000\u0000"+
		"\u000089\u0001\u0000\u0000\u00009J\u0001\u0000\u0000\u0000:8\u0001\u0000"+
		"\u0000\u0000;?\u0005\u0003\u0000\u0000<>\u0005\u0007\u0000\u0000=<\u0001"+
		"\u0000\u0000\u0000>A\u0001\u0000\u0000\u0000?=\u0001\u0000\u0000\u0000"+
		"?@\u0001\u0000\u0000\u0000@J\u0001\u0000\u0000\u0000A?\u0001\u0000\u0000"+
		"\u0000BF\u0005\u0004\u0000\u0000CE\u0005\u0007\u0000\u0000DC\u0001\u0000"+
		"\u0000\u0000EH\u0001\u0000\u0000\u0000FD\u0001\u0000\u0000\u0000FG\u0001"+
		"\u0000\u0000\u0000GJ\u0001\u0000\u0000\u0000HF\u0001\u0000\u0000\u0000"+
		"I-\u0001\u0000\u0000\u0000I4\u0001\u0000\u0000\u0000I;\u0001\u0000\u0000"+
		"\u0000IB\u0001\u0000\u0000\u0000J\u0003\u0001\u0000\u0000\u0000KL\u0007"+
		"\u0000\u0000\u0000L\u0005\u0001\u0000\u0000\u0000MN\u0007\u0001\u0000"+
		"\u0000N\u0007\u0001\u0000\u0000\u0000OP\u0007\u0002\u0000\u0000P\t\u0001"+
		"\u0000\u0000\u0000QR\u0007\u0003\u0000\u0000R\u000b\u0001\u0000\u0000"+
		"\u0000S^\u0003\u0012\t\u0000T^\u0003\u0014\n\u0000U^\u0003\u001c\u000e"+
		"\u0000V^\u0003\"\u0011\u0000W^\u0003\u001e\u000f\u0000X^\u0003 \u0010"+
		"\u0000Y^\u0003$\u0012\u0000Z[\u0003\u000e\u0007\u0000[\\\u00058\u0000"+
		"\u0000\\^\u0001\u0000\u0000\u0000]S\u0001\u0000\u0000\u0000]T\u0001\u0000"+
		"\u0000\u0000]U\u0001\u0000\u0000\u0000]V\u0001\u0000\u0000\u0000]W\u0001"+
		"\u0000\u0000\u0000]X\u0001\u0000\u0000\u0000]Y\u0001\u0000\u0000\u0000"+
		"]Z\u0001\u0000\u0000\u0000^\r\u0001\u0000\u0000\u0000_a\u0005/\u0000\u0000"+
		"`_\u0001\u0000\u0000\u0000`a\u0001\u0000\u0000\u0000ac\u0001\u0000\u0000"+
		"\u0000bd\u00050\u0000\u0000cb\u0001\u0000\u0000\u0000cd\u0001\u0000\u0000"+
		"\u0000de\u0001\u0000\u0000\u0000ef\u0003\u0010\b\u0000fg\u0003\u0006\u0003"+
		"\u0000gh\u0003\u0010\b\u0000h\u008a\u0001\u0000\u0000\u0000ij\u0005;\u0000"+
		"\u0000j\u008a\u0007\u0004\u0000\u0000km\u00050\u0000\u0000lk\u0001\u0000"+
		"\u0000\u0000lm\u0001\u0000\u0000\u0000mn\u0001\u0000\u0000\u0000no\u0003"+
		"\u0002\u0001\u0000op\u0005;\u0000\u0000p\u0082\u0005\u0013\u0000\u0000"+
		"qs\u00050\u0000\u0000rq\u0001\u0000\u0000\u0000rs\u0001\u0000\u0000\u0000"+
		"st\u0001\u0000\u0000\u0000tu\u0003\u0002\u0001\u0000u\u007f\u0005;\u0000"+
		"\u0000vx\u00057\u0000\u0000wy\u00050\u0000\u0000xw\u0001\u0000\u0000\u0000"+
		"xy\u0001\u0000\u0000\u0000yz\u0001\u0000\u0000\u0000z{\u0003\u0002\u0001"+
		"\u0000{|\u0005;\u0000\u0000|~\u0001\u0000\u0000\u0000}v\u0001\u0000\u0000"+
		"\u0000~\u0081\u0001\u0000\u0000\u0000\u007f}\u0001\u0000\u0000\u0000\u007f"+
		"\u0080\u0001\u0000\u0000\u0000\u0080\u0083\u0001\u0000\u0000\u0000\u0081"+
		"\u007f\u0001\u0000\u0000\u0000\u0082r\u0001\u0000\u0000\u0000\u0082\u0083"+
		"\u0001\u0000\u0000\u0000\u0083\u0084\u0001\u0000\u0000\u0000\u0084\u0085"+
		"\u0005\u0014\u0000\u0000\u0085\u008a\u0001\u0000\u0000\u0000\u0086\u0087"+
		"\u0007\u0004\u0000\u0000\u0087\u008a\u0005;\u0000\u0000\u0088\u008a\u0003"+
		"\u0010\b\u0000\u0089`\u0001\u0000\u0000\u0000\u0089i\u0001\u0000\u0000"+
		"\u0000\u0089l\u0001\u0000\u0000\u0000\u0089\u0086\u0001\u0000\u0000\u0000"+
		"\u0089\u0088\u0001\u0000\u0000\u0000\u008a\u000f\u0001\u0000\u0000\u0000"+
		"\u008b\u008c\u0006\b\uffff\uffff\u0000\u008c\u008d\u0005\u0007\u0000\u0000"+
		"\u008d\u00ad\u0003\u0010\b\b\u008e\u008f\u0005\u0013\u0000\u0000\u008f"+
		"\u0090\u0003\u0010\b\u0000\u0090\u0091\u0005\u0014\u0000\u0000\u0091\u00ad"+
		"\u0001\u0000\u0000\u0000\u0092\u0094\u0003\u0002\u0001\u0000\u0093\u0092"+
		"\u0001\u0000\u0000\u0000\u0093\u0094\u0001\u0000\u0000\u0000\u0094\u0095"+
		"\u0001\u0000\u0000\u0000\u0095\u009b\u0005;\u0000\u0000\u0096\u0098\u0005"+
		"\u0015\u0000\u0000\u0097\u0099\u0003\b\u0004\u0000\u0098\u0097\u0001\u0000"+
		"\u0000\u0000\u0098\u0099\u0001\u0000\u0000\u0000\u0099\u009a\u0001\u0000"+
		"\u0000\u0000\u009a\u009c\u0005\u0016\u0000\u0000\u009b\u0096\u0001\u0000"+
		"\u0000\u0000\u009b\u009c\u0001\u0000\u0000\u0000\u009c\u00ad\u0001\u0000"+
		"\u0000\u0000\u009d\u00ad\u0003\b\u0004\u0000\u009e\u009f\u0005\n\u0000"+
		"\u0000\u009f\u00ad\u0003\u0010\b\u0004\u00a0\u00a9\u0005\u0017\u0000\u0000"+
		"\u00a1\u00a6\u0003\u0010\b\u0000\u00a2\u00a3\u00057\u0000\u0000\u00a3"+
		"\u00a5\u0003\u0010\b\u0000\u00a4\u00a2\u0001\u0000\u0000\u0000\u00a5\u00a8"+
		"\u0001\u0000\u0000\u0000\u00a6\u00a4\u0001\u0000\u0000\u0000\u00a6\u00a7"+
		"\u0001\u0000\u0000\u0000\u00a7\u00aa\u0001\u0000\u0000\u0000\u00a8\u00a6"+
		"\u0001\u0000\u0000\u0000\u00a9\u00a1\u0001\u0000\u0000\u0000\u00a9\u00aa"+
		"\u0001\u0000\u0000\u0000\u00aa\u00ab\u0001\u0000\u0000\u0000\u00ab\u00ad"+
		"\u0005\u0018\u0000\u0000\u00ac\u008b\u0001\u0000\u0000\u0000\u00ac\u008e"+
		"\u0001\u0000\u0000\u0000\u00ac\u0093\u0001\u0000\u0000\u0000\u00ac\u009d"+
		"\u0001\u0000\u0000\u0000\u00ac\u009e\u0001\u0000\u0000\u0000\u00ac\u00a0"+
		"\u0001\u0000\u0000\u0000\u00ad\u00c4\u0001\u0000\u0000\u0000\u00ae\u00af"+
		"\n\u000b\u0000\u0000\u00af\u00b0\u0003\u0004\u0002\u0000\u00b0\u00b1\u0003"+
		"\u0010\b\f\u00b1\u00c3\u0001\u0000\u0000\u0000\u00b2\u00b3\n\n\u0000\u0000"+
		"\u00b3\u00b4\u0003\n\u0005\u0000\u00b4\u00b5\u0003\u0010\b\u000b\u00b5"+
		"\u00c3\u0001\u0000\u0000\u0000\u00b6\u00b7\n\t\u0000\u0000\u00b7\u00b8"+
		"\u0005%\u0000\u0000\u00b8\u00b9\u0003\u0010\b\u0000\u00b9\u00ba\u0005"+
		"&\u0000\u0000\u00ba\u00bb\u0003\u0010\b\n\u00bb\u00c3\u0001\u0000\u0000"+
		"\u0000\u00bc\u00bd\n\u0003\u0000\u0000\u00bd\u00be\u00059\u0000\u0000"+
		"\u00be\u00c3\u0005;\u0000\u0000\u00bf\u00c0\n\u0002\u0000\u0000\u00c0"+
		"\u00c1\u0005:\u0000\u0000\u00c1\u00c3\u0005;\u0000\u0000\u00c2\u00ae\u0001"+
		"\u0000\u0000\u0000\u00c2\u00b2\u0001\u0000\u0000\u0000\u00c2\u00b6\u0001"+
		"\u0000\u0000\u0000\u00c2\u00bc\u0001\u0000\u0000\u0000\u00c2\u00bf\u0001"+
		"\u0000\u0000\u0000\u00c3\u00c6\u0001\u0000\u0000\u0000\u00c4\u00c2\u0001"+
		"\u0000\u0000\u0000\u00c4\u00c5\u0001\u0000\u0000\u0000\u00c5\u0011\u0001"+
		"\u0000\u0000\u0000\u00c6\u00c4\u0001\u0000\u0000\u0000\u00c7\u00c9\u0005"+
		"0\u0000\u0000\u00c8\u00c7\u0001\u0000\u0000\u0000\u00c8\u00c9\u0001\u0000"+
		"\u0000\u0000\u00c9\u00ca\u0001\u0000\u0000\u0000\u00ca\u00cb\u0003\u0002"+
		"\u0001\u0000\u00cb\u00cc\u0005;\u0000\u0000\u00cc\u00de\u0005\u0013\u0000"+
		"\u0000\u00cd\u00cf\u00050\u0000\u0000\u00ce\u00cd\u0001\u0000\u0000\u0000"+
		"\u00ce\u00cf\u0001\u0000\u0000\u0000\u00cf\u00d0\u0001\u0000\u0000\u0000"+
		"\u00d0\u00d1\u0003\u0002\u0001\u0000\u00d1\u00db\u0005;\u0000\u0000\u00d2"+
		"\u00d4\u00057\u0000\u0000\u00d3\u00d5\u00050\u0000\u0000\u00d4\u00d3\u0001"+
		"\u0000\u0000\u0000\u00d4\u00d5\u0001\u0000\u0000\u0000\u00d5\u00d6\u0001"+
		"\u0000\u0000\u0000\u00d6\u00d7\u0003\u0002\u0001\u0000\u00d7\u00d8\u0005"+
		";\u0000\u0000\u00d8\u00da\u0001\u0000\u0000\u0000\u00d9\u00d2\u0001\u0000"+
		"\u0000\u0000\u00da\u00dd\u0001\u0000\u0000\u0000\u00db\u00d9\u0001\u0000"+
		"\u0000\u0000\u00db\u00dc\u0001\u0000\u0000\u0000\u00dc\u00df\u0001\u0000"+
		"\u0000\u0000\u00dd\u00db\u0001\u0000\u0000\u0000\u00de\u00ce\u0001\u0000"+
		"\u0000\u0000\u00de\u00df\u0001\u0000\u0000\u0000\u00df\u00e0\u0001\u0000"+
		"\u0000\u0000\u00e0\u00e1\u0005\u0014\u0000\u0000\u00e1\u00e5\u0005\u0017"+
		"\u0000\u0000\u00e2\u00e4\u0003\f\u0006\u0000\u00e3\u00e2\u0001\u0000\u0000"+
		"\u0000\u00e4\u00e7\u0001\u0000\u0000\u0000\u00e5\u00e3\u0001\u0000\u0000"+
		"\u0000\u00e5\u00e6\u0001\u0000\u0000\u0000\u00e6\u00e8\u0001\u0000\u0000"+
		"\u0000\u00e7\u00e5\u0001\u0000\u0000\u0000\u00e8\u00e9\u0005\u0018\u0000"+
		"\u0000\u00e9\u0013\u0001\u0000\u0000\u0000\u00ea\u00ee\u0003\u0016\u000b"+
		"\u0000\u00eb\u00ed\u0003\u0018\f\u0000\u00ec\u00eb\u0001\u0000\u0000\u0000"+
		"\u00ed\u00f0\u0001\u0000\u0000\u0000\u00ee\u00ec\u0001\u0000\u0000\u0000"+
		"\u00ee\u00ef\u0001\u0000\u0000\u0000\u00ef\u00f2\u0001\u0000\u0000\u0000"+
		"\u00f0\u00ee\u0001\u0000\u0000\u0000\u00f1\u00f3\u0003\u001a\r\u0000\u00f2"+
		"\u00f1\u0001\u0000\u0000\u0000\u00f2\u00f3\u0001\u0000\u0000\u0000\u00f3"+
		"\u0015\u0001\u0000\u0000\u0000\u00f4\u00f5\u00052\u0000\u0000\u00f5\u00f6"+
		"\u0005\u0013\u0000\u0000\u00f6\u00f7\u0003\u0010\b\u0000\u00f7\u00f8\u0005"+
		"\u0014\u0000\u0000\u00f8\u00fc\u0005\u0017\u0000\u0000\u00f9\u00fb\u0003"+
		"\f\u0006\u0000\u00fa\u00f9\u0001\u0000\u0000\u0000\u00fb\u00fe\u0001\u0000"+
		"\u0000\u0000\u00fc\u00fa\u0001\u0000\u0000\u0000\u00fc\u00fd\u0001\u0000"+
		"\u0000\u0000\u00fd\u00ff\u0001\u0000\u0000\u0000\u00fe\u00fc\u0001\u0000"+
		"\u0000\u0000\u00ff\u0100\u0005\u0018\u0000\u0000\u0100\u0108\u0001\u0000"+
		"\u0000\u0000\u0101\u0102\u00052\u0000\u0000\u0102\u0103\u0005\u0013\u0000"+
		"\u0000\u0103\u0104\u0003\u0010\b\u0000\u0104\u0105\u0005\u0014\u0000\u0000"+
		"\u0105\u0106\u0003\f\u0006\u0000\u0106\u0108\u0001\u0000\u0000\u0000\u0107"+
		"\u00f4\u0001\u0000\u0000\u0000\u0107\u0101\u0001\u0000\u0000\u0000\u0108"+
		"\u0017\u0001\u0000\u0000\u0000\u0109\u010a\u00053\u0000\u0000\u010a\u010b"+
		"\u00052\u0000\u0000\u010b\u010c\u0005\u0013\u0000\u0000\u010c\u010d\u0003"+
		"\u0010\b\u0000\u010d\u010e\u0005\u0014\u0000\u0000\u010e\u0112\u0005\u0017"+
		"\u0000\u0000\u010f\u0111\u0003\f\u0006\u0000\u0110\u010f\u0001\u0000\u0000"+
		"\u0000\u0111\u0114\u0001\u0000\u0000\u0000\u0112\u0110\u0001\u0000\u0000"+
		"\u0000\u0112\u0113\u0001\u0000\u0000\u0000\u0113\u0115\u0001\u0000\u0000"+
		"\u0000\u0114\u0112\u0001\u0000\u0000\u0000\u0115\u0116\u0005\u0018\u0000"+
		"\u0000\u0116\u011f\u0001\u0000\u0000\u0000\u0117\u0118\u00053\u0000\u0000"+
		"\u0118\u0119\u00052\u0000\u0000\u0119\u011a\u0005\u0013\u0000\u0000\u011a"+
		"\u011b\u0003\u0010\b\u0000\u011b\u011c\u0005\u0014\u0000\u0000\u011c\u011d"+
		"\u0003\f\u0006\u0000\u011d\u011f\u0001\u0000\u0000\u0000\u011e\u0109\u0001"+
		"\u0000\u0000\u0000\u011e\u0117\u0001\u0000\u0000\u0000\u011f\u0019\u0001"+
		"\u0000\u0000\u0000\u0120\u0121\u00053\u0000\u0000\u0121\u0125\u0005\u0017"+
		"\u0000\u0000\u0122\u0124\u0003\f\u0006\u0000\u0123\u0122\u0001\u0000\u0000"+
		"\u0000\u0124\u0127\u0001\u0000\u0000\u0000\u0125\u0123\u0001\u0000\u0000"+
		"\u0000\u0125\u0126\u0001\u0000\u0000\u0000\u0126\u0128\u0001\u0000\u0000"+
		"\u0000\u0127\u0125\u0001\u0000\u0000\u0000\u0128\u012c\u0005\u0018\u0000"+
		"\u0000\u0129\u012a\u00053\u0000\u0000\u012a\u012c\u0003\f\u0006\u0000"+
		"\u012b\u0120\u0001\u0000\u0000\u0000\u012b\u0129\u0001\u0000\u0000\u0000"+
		"\u012c\u001b\u0001\u0000\u0000\u0000\u012d\u012e\u00054\u0000\u0000\u012e"+
		"\u012f\u0005\u0013\u0000\u0000\u012f\u0130\u0003\u0010\b\u0000\u0130\u0131"+
		"\u0005\u0014\u0000\u0000\u0131\u0135\u0005\u0017\u0000\u0000\u0132\u0134"+
		"\u0003\f\u0006\u0000\u0133\u0132\u0001\u0000\u0000\u0000\u0134\u0137\u0001"+
		"\u0000\u0000\u0000\u0135\u0133\u0001\u0000\u0000\u0000\u0135\u0136\u0001"+
		"\u0000\u0000\u0000\u0136\u0138\u0001\u0000\u0000\u0000\u0137\u0135\u0001"+
		"\u0000\u0000\u0000\u0138\u0139\u0005\u0018\u0000\u0000\u0139\u001d\u0001"+
		"\u0000\u0000\u0000\u013a\u013b\u00056\u0000\u0000\u013b\u013c\u0005\u0013"+
		"\u0000\u0000\u013c\u013d\u0003\u000e\u0007\u0000\u013d\u013e\u00058\u0000"+
		"\u0000\u013e\u013f\u0003\u0010\b\u0000\u013f\u0140\u00058\u0000\u0000"+
		"\u0140\u0141\u0003\u000e\u0007\u0000\u0141\u0142\u0005\u0014\u0000\u0000"+
		"\u0142\u0146\u0005\u0017\u0000\u0000\u0143\u0145\u0003\f\u0006\u0000\u0144"+
		"\u0143\u0001\u0000\u0000\u0000\u0145\u0148\u0001\u0000\u0000\u0000\u0146"+
		"\u0144\u0001\u0000\u0000\u0000\u0146\u0147\u0001\u0000\u0000\u0000\u0147"+
		"\u0149\u0001\u0000\u0000\u0000\u0148\u0146\u0001\u0000\u0000\u0000\u0149"+
		"\u014a\u0005\u0018\u0000\u0000\u014a\u001f\u0001\u0000\u0000\u0000\u014b"+
		"\u014c\u00056\u0000\u0000\u014c\u014e\u0005\u0013\u0000\u0000\u014d\u014f"+
		"\u00050\u0000\u0000\u014e\u014d\u0001\u0000\u0000\u0000\u014e\u014f\u0001"+
		"\u0000\u0000\u0000\u014f\u0150\u0001\u0000\u0000\u0000\u0150\u0151\u0003"+
		"\u0002\u0001\u0000\u0151\u0152\u0005;\u0000\u0000\u0152\u0153\u0005&\u0000"+
		"\u0000\u0153\u0154\u0003\u0010\b\u0000\u0154\u0155\u0005\u0014\u0000\u0000"+
		"\u0155\u0159\u0005\u0017\u0000\u0000\u0156\u0158\u0003\f\u0006\u0000\u0157"+
		"\u0156\u0001\u0000\u0000\u0000\u0158\u015b\u0001\u0000\u0000\u0000\u0159"+
		"\u0157\u0001\u0000\u0000\u0000\u0159\u015a\u0001\u0000\u0000\u0000\u015a"+
		"\u015c\u0001\u0000\u0000\u0000\u015b\u0159\u0001\u0000\u0000\u0000\u015c"+
		"\u015d\u0005\u0018\u0000\u0000\u015d!\u0001\u0000\u0000\u0000\u015e\u015f"+
		"\u00055\u0000\u0000\u015f\u0163\u0005\u0017\u0000\u0000\u0160\u0162\u0003"+
		"\f\u0006\u0000\u0161\u0160\u0001\u0000\u0000\u0000\u0162\u0165\u0001\u0000"+
		"\u0000\u0000\u0163\u0161\u0001\u0000\u0000\u0000\u0163\u0164\u0001\u0000"+
		"\u0000\u0000\u0164\u0166\u0001\u0000\u0000\u0000\u0165\u0163\u0001\u0000"+
		"\u0000\u0000\u0166\u0167\u0005\u0018\u0000\u0000\u0167\u0168\u00054\u0000"+
		"\u0000\u0168\u0169\u0005\u0013\u0000\u0000\u0169\u016a\u0003\u0010\b\u0000"+
		"\u016a\u016b\u0005\u0014\u0000\u0000\u016b\u016c\u00058\u0000\u0000\u016c"+
		"#\u0001\u0000\u0000\u0000\u016d\u016e\u00051\u0000\u0000\u016e\u016f\u0005"+
		";\u0000\u0000\u016f\u0173\u0005\u0017\u0000\u0000\u0170\u0172\u0003\f"+
		"\u0006\u0000\u0171\u0170\u0001\u0000\u0000\u0000\u0172\u0175\u0001\u0000"+
		"\u0000\u0000\u0173\u0171\u0001\u0000\u0000\u0000\u0173\u0174\u0001\u0000"+
		"\u0000\u0000\u0174\u0176\u0001\u0000\u0000\u0000\u0175\u0173\u0001\u0000"+
		"\u0000\u0000\u0176\u0177\u0005\u0018\u0000\u0000\u0177\u0178\u00058\u0000"+
		"\u0000\u0178%\u0001\u0000\u0000\u0000+)18?FI]`clrx\u007f\u0082\u0089\u0093"+
		"\u0098\u009b\u00a6\u00a9\u00ac\u00c2\u00c4\u00c8\u00ce\u00d4\u00db\u00de"+
		"\u00e5\u00ee\u00f2\u00fc\u0107\u0112\u011e\u0125\u012b\u0135\u0146\u014e"+
		"\u0159\u0163\u0173";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}