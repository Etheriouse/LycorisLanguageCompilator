// Generated from /home/liayel/project/small_compiler/src/antlr/lycoris.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class lycorisParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, LP=17, 
		RP=18, LC=19, RC=20, LA=21, RA=22, COMMA=23, SEMICOLON=24, NEWLINE=25, 
		WS=26, INT=27, FLOAT=28, BOOL=29, IDENT=30, CHAR=31, STRING=32;
	public static final int
		RULE_prog = 0, RULE_expr = 1, RULE_mor_ = 2, RULE_xor_ = 3, RULE_mxor_ = 4, 
		RULE_and_ = 5, RULE_mand_ = 6, RULE_equal = 7, RULE_mequal = 8, RULE_comparaison = 9, 
		RULE_mcomparaison = 10, RULE_addsub = 11, RULE_maddsub = 12, RULE_muldivmod = 13, 
		RULE_mmuldivmod = 14, RULE_unary = 15, RULE_atom = 16;
	private static String[] makeRuleNames() {
		return new String[] {
			"prog", "expr", "mor_", "xor_", "mxor_", "and_", "mand_", "equal", "mequal", 
			"comparaison", "mcomparaison", "addsub", "maddsub", "muldivmod", "mmuldivmod", 
			"unary", "atom"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'||'", "'<>'", "'&&'", "'=='", "'!='", "'<'", "'>'", "'<='", "'>='", 
			"'+'", "'-'", "'*'", "'/'", "'%'", "'&'", "'!'", "'('", "')'", "'['", 
			"']'", "'{'", "'}'", "','", "';'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, "LP", "RP", "LC", "RC", "LA", "RA", "COMMA", 
			"SEMICOLON", "NEWLINE", "WS", "INT", "FLOAT", "BOOL", "IDENT", "CHAR", 
			"STRING"
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
	public String getGrammarFileName() { return "lycoris.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public lycorisParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ProgContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(lycorisParser.EOF, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<TerminalNode> SEMICOLON() { return getTokens(lycorisParser.SEMICOLON); }
		public TerminalNode SEMICOLON(int i) {
			return getToken(lycorisParser.SEMICOLON, i);
		}
		public ProgContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prog; }
	}

	public final ProgContext prog() throws RecognitionException {
		ProgContext _localctx = new ProgContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_prog);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(39);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 8455952384L) != 0)) {
				{
				{
				setState(34);
				expr();
				setState(35);
				match(SEMICOLON);
				}
				}
				setState(41);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(42);
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
	public static class ExprContext extends ParserRuleContext {
		public Xor_Context a;
		public Mor_Context b;
		public Xor_Context xor_() {
			return getRuleContext(Xor_Context.class,0);
		}
		public List<Mor_Context> mor_() {
			return getRuleContexts(Mor_Context.class);
		}
		public Mor_Context mor_(int i) {
			return getRuleContext(Mor_Context.class,i);
		}
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	}

	public final ExprContext expr() throws RecognitionException {
		ExprContext _localctx = new ExprContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_expr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(44);
			((ExprContext)_localctx).a = xor_();
			setState(48);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__0) {
				{
				{
				setState(45);
				((ExprContext)_localctx).b = mor_();
				}
				}
				setState(50);
				_errHandler.sync(this);
				_la = _input.LA(1);
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
	public static class Mor_Context extends ParserRuleContext {
		public Token op;
		public Xor_Context b;
		public Xor_Context xor_() {
			return getRuleContext(Xor_Context.class,0);
		}
		public Mor_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mor_; }
	}

	public final Mor_Context mor_() throws RecognitionException {
		Mor_Context _localctx = new Mor_Context(_ctx, getState());
		enterRule(_localctx, 4, RULE_mor_);
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(51);
			((Mor_Context)_localctx).op = match(T__0);
			setState(52);
			((Mor_Context)_localctx).b = xor_();
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
	public static class Xor_Context extends ParserRuleContext {
		public And_Context a;
		public Mxor_Context b;
		public And_Context and_() {
			return getRuleContext(And_Context.class,0);
		}
		public List<Mxor_Context> mxor_() {
			return getRuleContexts(Mxor_Context.class);
		}
		public Mxor_Context mxor_(int i) {
			return getRuleContext(Mxor_Context.class,i);
		}
		public Xor_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_xor_; }
	}

	public final Xor_Context xor_() throws RecognitionException {
		Xor_Context _localctx = new Xor_Context(_ctx, getState());
		enterRule(_localctx, 6, RULE_xor_);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(54);
			((Xor_Context)_localctx).a = and_();
			setState(58);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(55);
				((Xor_Context)_localctx).b = mxor_();
				}
				}
				setState(60);
				_errHandler.sync(this);
				_la = _input.LA(1);
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
	public static class Mxor_Context extends ParserRuleContext {
		public Token op;
		public And_Context b;
		public And_Context and_() {
			return getRuleContext(And_Context.class,0);
		}
		public Mxor_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mxor_; }
	}

	public final Mxor_Context mxor_() throws RecognitionException {
		Mxor_Context _localctx = new Mxor_Context(_ctx, getState());
		enterRule(_localctx, 8, RULE_mxor_);
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(61);
			((Mxor_Context)_localctx).op = match(T__1);
			setState(62);
			((Mxor_Context)_localctx).b = and_();
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
	public static class And_Context extends ParserRuleContext {
		public EqualContext a;
		public Mand_Context b;
		public EqualContext equal() {
			return getRuleContext(EqualContext.class,0);
		}
		public List<Mand_Context> mand_() {
			return getRuleContexts(Mand_Context.class);
		}
		public Mand_Context mand_(int i) {
			return getRuleContext(Mand_Context.class,i);
		}
		public And_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_and_; }
	}

	public final And_Context and_() throws RecognitionException {
		And_Context _localctx = new And_Context(_ctx, getState());
		enterRule(_localctx, 10, RULE_and_);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(64);
			((And_Context)_localctx).a = equal();
			setState(68);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__2) {
				{
				{
				setState(65);
				((And_Context)_localctx).b = mand_();
				}
				}
				setState(70);
				_errHandler.sync(this);
				_la = _input.LA(1);
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
	public static class Mand_Context extends ParserRuleContext {
		public Token op;
		public EqualContext b;
		public EqualContext equal() {
			return getRuleContext(EqualContext.class,0);
		}
		public Mand_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mand_; }
	}

	public final Mand_Context mand_() throws RecognitionException {
		Mand_Context _localctx = new Mand_Context(_ctx, getState());
		enterRule(_localctx, 12, RULE_mand_);
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(71);
			((Mand_Context)_localctx).op = match(T__2);
			setState(72);
			((Mand_Context)_localctx).b = equal();
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
	public static class EqualContext extends ParserRuleContext {
		public ComparaisonContext a;
		public MequalContext b;
		public ComparaisonContext comparaison() {
			return getRuleContext(ComparaisonContext.class,0);
		}
		public List<MequalContext> mequal() {
			return getRuleContexts(MequalContext.class);
		}
		public MequalContext mequal(int i) {
			return getRuleContext(MequalContext.class,i);
		}
		public EqualContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_equal; }
	}

	public final EqualContext equal() throws RecognitionException {
		EqualContext _localctx = new EqualContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_equal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(74);
			((EqualContext)_localctx).a = comparaison();
			setState(78);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__3 || _la==T__4) {
				{
				{
				setState(75);
				((EqualContext)_localctx).b = mequal();
				}
				}
				setState(80);
				_errHandler.sync(this);
				_la = _input.LA(1);
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
	public static class MequalContext extends ParserRuleContext {
		public Token op;
		public ComparaisonContext b;
		public ComparaisonContext comparaison() {
			return getRuleContext(ComparaisonContext.class,0);
		}
		public MequalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mequal; }
	}

	public final MequalContext mequal() throws RecognitionException {
		MequalContext _localctx = new MequalContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_mequal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(81);
			((MequalContext)_localctx).op = _input.LT(1);
			_la = _input.LA(1);
			if ( !(_la==T__3 || _la==T__4) ) {
				((MequalContext)_localctx).op = (Token)_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(82);
			((MequalContext)_localctx).b = comparaison();
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
	public static class ComparaisonContext extends ParserRuleContext {
		public AddsubContext a;
		public McomparaisonContext b;
		public AddsubContext addsub() {
			return getRuleContext(AddsubContext.class,0);
		}
		public List<McomparaisonContext> mcomparaison() {
			return getRuleContexts(McomparaisonContext.class);
		}
		public McomparaisonContext mcomparaison(int i) {
			return getRuleContext(McomparaisonContext.class,i);
		}
		public ComparaisonContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_comparaison; }
	}

	public final ComparaisonContext comparaison() throws RecognitionException {
		ComparaisonContext _localctx = new ComparaisonContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_comparaison);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(84);
			((ComparaisonContext)_localctx).a = addsub();
			setState(88);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 960L) != 0)) {
				{
				{
				setState(85);
				((ComparaisonContext)_localctx).b = mcomparaison();
				}
				}
				setState(90);
				_errHandler.sync(this);
				_la = _input.LA(1);
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
	public static class McomparaisonContext extends ParserRuleContext {
		public Token op;
		public AddsubContext b;
		public AddsubContext addsub() {
			return getRuleContext(AddsubContext.class,0);
		}
		public McomparaisonContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mcomparaison; }
	}

	public final McomparaisonContext mcomparaison() throws RecognitionException {
		McomparaisonContext _localctx = new McomparaisonContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_mcomparaison);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(91);
			((McomparaisonContext)_localctx).op = _input.LT(1);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 960L) != 0)) ) {
				((McomparaisonContext)_localctx).op = (Token)_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(92);
			((McomparaisonContext)_localctx).b = addsub();
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
	public static class AddsubContext extends ParserRuleContext {
		public MuldivmodContext a;
		public MaddsubContext b;
		public MuldivmodContext muldivmod() {
			return getRuleContext(MuldivmodContext.class,0);
		}
		public List<MaddsubContext> maddsub() {
			return getRuleContexts(MaddsubContext.class);
		}
		public MaddsubContext maddsub(int i) {
			return getRuleContext(MaddsubContext.class,i);
		}
		public AddsubContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_addsub; }
	}

	public final AddsubContext addsub() throws RecognitionException {
		AddsubContext _localctx = new AddsubContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_addsub);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(94);
			((AddsubContext)_localctx).a = muldivmod();
			setState(98);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__9 || _la==T__10) {
				{
				{
				setState(95);
				((AddsubContext)_localctx).b = maddsub();
				}
				}
				setState(100);
				_errHandler.sync(this);
				_la = _input.LA(1);
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
	public static class MaddsubContext extends ParserRuleContext {
		public Token op;
		public MuldivmodContext b;
		public MuldivmodContext muldivmod() {
			return getRuleContext(MuldivmodContext.class,0);
		}
		public MaddsubContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_maddsub; }
	}

	public final MaddsubContext maddsub() throws RecognitionException {
		MaddsubContext _localctx = new MaddsubContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_maddsub);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(101);
			((MaddsubContext)_localctx).op = _input.LT(1);
			_la = _input.LA(1);
			if ( !(_la==T__9 || _la==T__10) ) {
				((MaddsubContext)_localctx).op = (Token)_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(102);
			((MaddsubContext)_localctx).b = muldivmod();
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
	public static class MuldivmodContext extends ParserRuleContext {
		public UnaryContext a;
		public MmuldivmodContext b;
		public UnaryContext unary() {
			return getRuleContext(UnaryContext.class,0);
		}
		public List<MmuldivmodContext> mmuldivmod() {
			return getRuleContexts(MmuldivmodContext.class);
		}
		public MmuldivmodContext mmuldivmod(int i) {
			return getRuleContext(MmuldivmodContext.class,i);
		}
		public MuldivmodContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_muldivmod; }
	}

	public final MuldivmodContext muldivmod() throws RecognitionException {
		MuldivmodContext _localctx = new MuldivmodContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_muldivmod);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(104);
			((MuldivmodContext)_localctx).a = unary();
			setState(108);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 28672L) != 0)) {
				{
				{
				setState(105);
				((MuldivmodContext)_localctx).b = mmuldivmod();
				}
				}
				setState(110);
				_errHandler.sync(this);
				_la = _input.LA(1);
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
	public static class MmuldivmodContext extends ParserRuleContext {
		public Token op;
		public UnaryContext b;
		public UnaryContext unary() {
			return getRuleContext(UnaryContext.class,0);
		}
		public MmuldivmodContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mmuldivmod; }
	}

	public final MmuldivmodContext mmuldivmod() throws RecognitionException {
		MmuldivmodContext _localctx = new MmuldivmodContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_mmuldivmod);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(111);
			((MmuldivmodContext)_localctx).op = _input.LT(1);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 28672L) != 0)) ) {
				((MmuldivmodContext)_localctx).op = (Token)_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(112);
			((MmuldivmodContext)_localctx).b = unary();
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
	public static class UnaryContext extends ParserRuleContext {
		public Token op;
		public AtomContext a;
		public UnaryContext unary() {
			return getRuleContext(UnaryContext.class,0);
		}
		public AtomContext atom() {
			return getRuleContext(AtomContext.class,0);
		}
		public UnaryContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unary; }
	}

	public final UnaryContext unary() throws RecognitionException {
		UnaryContext _localctx = new UnaryContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_unary);
		int _la;
		try {
			setState(117);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__10:
			case T__11:
			case T__14:
			case T__15:
				enterOuterAlt(_localctx, 1);
				{
				setState(114);
				((UnaryContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 104448L) != 0)) ) {
					((UnaryContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(115);
				unary();
				}
				break;
			case LP:
			case INT:
			case FLOAT:
			case BOOL:
			case IDENT:
			case CHAR:
			case STRING:
				enterOuterAlt(_localctx, 2);
				{
				setState(116);
				((UnaryContext)_localctx).a = atom();
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
	public static class AtomContext extends ParserRuleContext {
		public TerminalNode INT() { return getToken(lycorisParser.INT, 0); }
		public TerminalNode FLOAT() { return getToken(lycorisParser.FLOAT, 0); }
		public TerminalNode STRING() { return getToken(lycorisParser.STRING, 0); }
		public TerminalNode CHAR() { return getToken(lycorisParser.CHAR, 0); }
		public TerminalNode BOOL() { return getToken(lycorisParser.BOOL, 0); }
		public TerminalNode IDENT() { return getToken(lycorisParser.IDENT, 0); }
		public TerminalNode LP() { return getToken(lycorisParser.LP, 0); }
		public TerminalNode RP() { return getToken(lycorisParser.RP, 0); }
		public TerminalNode LC() { return getToken(lycorisParser.LC, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode RC() { return getToken(lycorisParser.RC, 0); }
		public List<TerminalNode> COMMA() { return getTokens(lycorisParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(lycorisParser.COMMA, i);
		}
		public AtomContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_atom; }
	}

	public final AtomContext atom() throws RecognitionException {
		AtomContext _localctx = new AtomContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_atom);
		int _la;
		try {
			setState(147);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INT:
				enterOuterAlt(_localctx, 1);
				{
				setState(119);
				match(INT);
				}
				break;
			case FLOAT:
				enterOuterAlt(_localctx, 2);
				{
				setState(120);
				match(FLOAT);
				}
				break;
			case STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(121);
				match(STRING);
				}
				break;
			case CHAR:
				enterOuterAlt(_localctx, 4);
				{
				setState(122);
				match(CHAR);
				}
				break;
			case BOOL:
				enterOuterAlt(_localctx, 5);
				{
				setState(123);
				match(BOOL);
				}
				break;
			case IDENT:
				enterOuterAlt(_localctx, 6);
				{
				setState(124);
				match(IDENT);
				setState(141);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case LP:
					{
					setState(125);
					match(LP);
					setState(134);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 8455952384L) != 0)) {
						{
						setState(126);
						expr();
						setState(131);
						_errHandler.sync(this);
						_la = _input.LA(1);
						while (_la==COMMA) {
							{
							{
							setState(127);
							match(COMMA);
							setState(128);
							expr();
							}
							}
							setState(133);
							_errHandler.sync(this);
							_la = _input.LA(1);
						}
						}
					}

					setState(136);
					match(RP);
					}
					break;
				case LC:
					{
					setState(137);
					match(LC);
					setState(138);
					expr();
					setState(139);
					match(RC);
					}
					break;
				case T__0:
				case T__1:
				case T__2:
				case T__3:
				case T__4:
				case T__5:
				case T__6:
				case T__7:
				case T__8:
				case T__9:
				case T__10:
				case T__11:
				case T__12:
				case T__13:
				case RP:
				case RC:
				case COMMA:
				case SEMICOLON:
					break;
				default:
					break;
				}
				}
				break;
			case LP:
				enterOuterAlt(_localctx, 7);
				{
				setState(143);
				match(LP);
				setState(144);
				expr();
				setState(145);
				match(RP);
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

	public static final String _serializedATN =
		"\u0004\u0001 \u0096\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0001\u0000\u0001\u0000\u0001\u0000\u0005\u0000"+
		"&\b\u0000\n\u0000\f\u0000)\t\u0000\u0001\u0000\u0001\u0000\u0001\u0001"+
		"\u0001\u0001\u0005\u0001/\b\u0001\n\u0001\f\u00012\t\u0001\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003\u0005\u00039\b\u0003"+
		"\n\u0003\f\u0003<\t\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0005"+
		"\u0001\u0005\u0005\u0005C\b\u0005\n\u0005\f\u0005F\t\u0005\u0001\u0006"+
		"\u0001\u0006\u0001\u0006\u0001\u0007\u0001\u0007\u0005\u0007M\b\u0007"+
		"\n\u0007\f\u0007P\t\u0007\u0001\b\u0001\b\u0001\b\u0001\t\u0001\t\u0005"+
		"\tW\b\t\n\t\f\tZ\t\t\u0001\n\u0001\n\u0001\n\u0001\u000b\u0001\u000b\u0005"+
		"\u000ba\b\u000b\n\u000b\f\u000bd\t\u000b\u0001\f\u0001\f\u0001\f\u0001"+
		"\r\u0001\r\u0005\rk\b\r\n\r\f\rn\t\r\u0001\u000e\u0001\u000e\u0001\u000e"+
		"\u0001\u000f\u0001\u000f\u0001\u000f\u0003\u000fv\b\u000f\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0001\u0010\u0005\u0010\u0082\b\u0010\n\u0010"+
		"\f\u0010\u0085\t\u0010\u0003\u0010\u0087\b\u0010\u0001\u0010\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0001\u0010\u0003\u0010\u008e\b\u0010\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0001\u0010\u0003\u0010\u0094\b\u0010\u0001\u0010"+
		"\u0000\u0000\u0011\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010\u0012\u0014"+
		"\u0016\u0018\u001a\u001c\u001e \u0000\u0005\u0001\u0000\u0004\u0005\u0001"+
		"\u0000\u0006\t\u0001\u0000\n\u000b\u0001\u0000\f\u000e\u0002\u0000\u000b"+
		"\f\u000f\u0010\u0097\u0000\'\u0001\u0000\u0000\u0000\u0002,\u0001\u0000"+
		"\u0000\u0000\u00043\u0001\u0000\u0000\u0000\u00066\u0001\u0000\u0000\u0000"+
		"\b=\u0001\u0000\u0000\u0000\n@\u0001\u0000\u0000\u0000\fG\u0001\u0000"+
		"\u0000\u0000\u000eJ\u0001\u0000\u0000\u0000\u0010Q\u0001\u0000\u0000\u0000"+
		"\u0012T\u0001\u0000\u0000\u0000\u0014[\u0001\u0000\u0000\u0000\u0016^"+
		"\u0001\u0000\u0000\u0000\u0018e\u0001\u0000\u0000\u0000\u001ah\u0001\u0000"+
		"\u0000\u0000\u001co\u0001\u0000\u0000\u0000\u001eu\u0001\u0000\u0000\u0000"+
		" \u0093\u0001\u0000\u0000\u0000\"#\u0003\u0002\u0001\u0000#$\u0005\u0018"+
		"\u0000\u0000$&\u0001\u0000\u0000\u0000%\"\u0001\u0000\u0000\u0000&)\u0001"+
		"\u0000\u0000\u0000\'%\u0001\u0000\u0000\u0000\'(\u0001\u0000\u0000\u0000"+
		"(*\u0001\u0000\u0000\u0000)\'\u0001\u0000\u0000\u0000*+\u0005\u0000\u0000"+
		"\u0001+\u0001\u0001\u0000\u0000\u0000,0\u0003\u0006\u0003\u0000-/\u0003"+
		"\u0004\u0002\u0000.-\u0001\u0000\u0000\u0000/2\u0001\u0000\u0000\u0000"+
		"0.\u0001\u0000\u0000\u000001\u0001\u0000\u0000\u00001\u0003\u0001\u0000"+
		"\u0000\u000020\u0001\u0000\u0000\u000034\u0005\u0001\u0000\u000045\u0003"+
		"\u0006\u0003\u00005\u0005\u0001\u0000\u0000\u00006:\u0003\n\u0005\u0000"+
		"79\u0003\b\u0004\u000087\u0001\u0000\u0000\u00009<\u0001\u0000\u0000\u0000"+
		":8\u0001\u0000\u0000\u0000:;\u0001\u0000\u0000\u0000;\u0007\u0001\u0000"+
		"\u0000\u0000<:\u0001\u0000\u0000\u0000=>\u0005\u0002\u0000\u0000>?\u0003"+
		"\n\u0005\u0000?\t\u0001\u0000\u0000\u0000@D\u0003\u000e\u0007\u0000AC"+
		"\u0003\f\u0006\u0000BA\u0001\u0000\u0000\u0000CF\u0001\u0000\u0000\u0000"+
		"DB\u0001\u0000\u0000\u0000DE\u0001\u0000\u0000\u0000E\u000b\u0001\u0000"+
		"\u0000\u0000FD\u0001\u0000\u0000\u0000GH\u0005\u0003\u0000\u0000HI\u0003"+
		"\u000e\u0007\u0000I\r\u0001\u0000\u0000\u0000JN\u0003\u0012\t\u0000KM"+
		"\u0003\u0010\b\u0000LK\u0001\u0000\u0000\u0000MP\u0001\u0000\u0000\u0000"+
		"NL\u0001\u0000\u0000\u0000NO\u0001\u0000\u0000\u0000O\u000f\u0001\u0000"+
		"\u0000\u0000PN\u0001\u0000\u0000\u0000QR\u0007\u0000\u0000\u0000RS\u0003"+
		"\u0012\t\u0000S\u0011\u0001\u0000\u0000\u0000TX\u0003\u0016\u000b\u0000"+
		"UW\u0003\u0014\n\u0000VU\u0001\u0000\u0000\u0000WZ\u0001\u0000\u0000\u0000"+
		"XV\u0001\u0000\u0000\u0000XY\u0001\u0000\u0000\u0000Y\u0013\u0001\u0000"+
		"\u0000\u0000ZX\u0001\u0000\u0000\u0000[\\\u0007\u0001\u0000\u0000\\]\u0003"+
		"\u0016\u000b\u0000]\u0015\u0001\u0000\u0000\u0000^b\u0003\u001a\r\u0000"+
		"_a\u0003\u0018\f\u0000`_\u0001\u0000\u0000\u0000ad\u0001\u0000\u0000\u0000"+
		"b`\u0001\u0000\u0000\u0000bc\u0001\u0000\u0000\u0000c\u0017\u0001\u0000"+
		"\u0000\u0000db\u0001\u0000\u0000\u0000ef\u0007\u0002\u0000\u0000fg\u0003"+
		"\u001a\r\u0000g\u0019\u0001\u0000\u0000\u0000hl\u0003\u001e\u000f\u0000"+
		"ik\u0003\u001c\u000e\u0000ji\u0001\u0000\u0000\u0000kn\u0001\u0000\u0000"+
		"\u0000lj\u0001\u0000\u0000\u0000lm\u0001\u0000\u0000\u0000m\u001b\u0001"+
		"\u0000\u0000\u0000nl\u0001\u0000\u0000\u0000op\u0007\u0003\u0000\u0000"+
		"pq\u0003\u001e\u000f\u0000q\u001d\u0001\u0000\u0000\u0000rs\u0007\u0004"+
		"\u0000\u0000sv\u0003\u001e\u000f\u0000tv\u0003 \u0010\u0000ur\u0001\u0000"+
		"\u0000\u0000ut\u0001\u0000\u0000\u0000v\u001f\u0001\u0000\u0000\u0000"+
		"w\u0094\u0005\u001b\u0000\u0000x\u0094\u0005\u001c\u0000\u0000y\u0094"+
		"\u0005 \u0000\u0000z\u0094\u0005\u001f\u0000\u0000{\u0094\u0005\u001d"+
		"\u0000\u0000|\u008d\u0005\u001e\u0000\u0000}\u0086\u0005\u0011\u0000\u0000"+
		"~\u0083\u0003\u0002\u0001\u0000\u007f\u0080\u0005\u0017\u0000\u0000\u0080"+
		"\u0082\u0003\u0002\u0001\u0000\u0081\u007f\u0001\u0000\u0000\u0000\u0082"+
		"\u0085\u0001\u0000\u0000\u0000\u0083\u0081\u0001\u0000\u0000\u0000\u0083"+
		"\u0084\u0001\u0000\u0000\u0000\u0084\u0087\u0001\u0000\u0000\u0000\u0085"+
		"\u0083\u0001\u0000\u0000\u0000\u0086~\u0001\u0000\u0000\u0000\u0086\u0087"+
		"\u0001\u0000\u0000\u0000\u0087\u0088\u0001\u0000\u0000\u0000\u0088\u008e"+
		"\u0005\u0012\u0000\u0000\u0089\u008a\u0005\u0013\u0000\u0000\u008a\u008b"+
		"\u0003\u0002\u0001\u0000\u008b\u008c\u0005\u0014\u0000\u0000\u008c\u008e"+
		"\u0001\u0000\u0000\u0000\u008d}\u0001\u0000\u0000\u0000\u008d\u0089\u0001"+
		"\u0000\u0000\u0000\u008d\u008e\u0001\u0000\u0000\u0000\u008e\u0094\u0001"+
		"\u0000\u0000\u0000\u008f\u0090\u0005\u0011\u0000\u0000\u0090\u0091\u0003"+
		"\u0002\u0001\u0000\u0091\u0092\u0005\u0012\u0000\u0000\u0092\u0094\u0001"+
		"\u0000\u0000\u0000\u0093w\u0001\u0000\u0000\u0000\u0093x\u0001\u0000\u0000"+
		"\u0000\u0093y\u0001\u0000\u0000\u0000\u0093z\u0001\u0000\u0000\u0000\u0093"+
		"{\u0001\u0000\u0000\u0000\u0093|\u0001\u0000\u0000\u0000\u0093\u008f\u0001"+
		"\u0000\u0000\u0000\u0094!\u0001\u0000\u0000\u0000\r\'0:DNXblu\u0083\u0086"+
		"\u008d\u0093";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}