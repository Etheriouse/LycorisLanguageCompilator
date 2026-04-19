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
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, T__18=19, T__19=20, T__20=21, T__21=22, T__22=23, T__23=24, 
		T__24=25, T__25=26, T__26=27, T__27=28, T__28=29, T__29=30, T__30=31, 
		T__31=32, T__32=33, T__33=34, T__34=35, T__35=36, LP=37, RP=38, LC=39, 
		RC=40, LA=41, RA=42, COMMA=43, SEMICOLON=44, ASSIGN=45, NEWLINE=46, WS=47, 
		INT=48, FLOAT=49, BOOL=50, IDENT=51, CHAR=52, STRING=53;
	public static final int
		RULE_prog = 0, RULE_definition = 1, RULE_paramfunction = 2, RULE_paramun = 3, 
		RULE_mulparam = 4, RULE_instruction = 5, RULE_indexarr = 6, RULE_declaration = 7, 
		RULE_staticarr = 8, RULE_exprlist = 9, RULE_affectation = 10, RULE_type = 11, 
		RULE_expr = 12, RULE_or = 13, RULE_mor_ = 14, RULE_xor_ = 15, RULE_mxor_ = 16, 
		RULE_and_ = 17, RULE_mand_ = 18, RULE_equal = 19, RULE_mequal = 20, RULE_comparaison = 21, 
		RULE_mcomparaison = 22, RULE_addsub = 23, RULE_maddsub = 24, RULE_muldivmod = 25, 
		RULE_mmuldivmod = 26, RULE_unary = 27, RULE_atom = 28;
	private static String[] makeRuleNames() {
		return new String[] {
			"prog", "definition", "paramfunction", "paramun", "mulparam", "instruction", 
			"indexarr", "declaration", "staticarr", "exprlist", "affectation", "type", 
			"expr", "or", "mor_", "xor_", "mxor_", "and_", "mand_", "equal", "mequal", 
			"comparaison", "mcomparaison", "addsub", "maddsub", "muldivmod", "mmuldivmod", 
			"unary", "atom"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'if'", "'else'", "'while'", "'for'", "'return'", "'+='", "'-='", 
			"'*='", "'/='", "'&='", "'<>='", "'|='", "'int'", "'float'", "'string'", 
			"'char'", "'bool'", "'void'", "'*'", "'?'", "':'", "'||'", "'<>'", "'&&'", 
			"'=='", "'!='", "'<'", "'>'", "'<='", "'>='", "'+'", "'-'", "'/'", "'%'", 
			"'&'", "'!'", "'('", "')'", "'['", "']'", "'{'", "'}'", "','", "';'", 
			"'='"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, "LP", "RP", "LC", "RC", "LA", "RA", "COMMA", "SEMICOLON", "ASSIGN", 
			"NEWLINE", "WS", "INT", "FLOAT", "BOOL", "IDENT", "CHAR", "STRING"
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
		public List<DefinitionContext> definition() {
			return getRuleContexts(DefinitionContext.class);
		}
		public DefinitionContext definition(int i) {
			return getRuleContext(DefinitionContext.class,i);
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
			setState(61);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 516096L) != 0)) {
				{
				{
				setState(58);
				definition();
				}
				}
				setState(63);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(64);
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
	public static class DefinitionContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode IDENT() { return getToken(lycorisParser.IDENT, 0); }
		public TerminalNode LP() { return getToken(lycorisParser.LP, 0); }
		public ParamfunctionContext paramfunction() {
			return getRuleContext(ParamfunctionContext.class,0);
		}
		public TerminalNode RP() { return getToken(lycorisParser.RP, 0); }
		public InstructionContext instruction() {
			return getRuleContext(InstructionContext.class,0);
		}
		public DefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_definition; }
	}

	public final DefinitionContext definition() throws RecognitionException {
		DefinitionContext _localctx = new DefinitionContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_definition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(66);
			type();
			setState(67);
			match(IDENT);
			setState(68);
			match(LP);
			setState(69);
			paramfunction();
			setState(70);
			match(RP);
			setState(71);
			instruction();
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
	public static class ParamfunctionContext extends ParserRuleContext {
		public ParamunContext t1;
		public MulparamContext tn;
		public ParamunContext paramun() {
			return getRuleContext(ParamunContext.class,0);
		}
		public List<MulparamContext> mulparam() {
			return getRuleContexts(MulparamContext.class);
		}
		public MulparamContext mulparam(int i) {
			return getRuleContext(MulparamContext.class,i);
		}
		public ParamfunctionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_paramfunction; }
	}

	public final ParamfunctionContext paramfunction() throws RecognitionException {
		ParamfunctionContext _localctx = new ParamfunctionContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_paramfunction);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(80);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 516096L) != 0)) {
				{
				setState(73);
				((ParamfunctionContext)_localctx).t1 = paramun();
				setState(77);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(74);
					((ParamfunctionContext)_localctx).tn = mulparam();
					}
					}
					setState(79);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
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
	public static class ParamunContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode IDENT() { return getToken(lycorisParser.IDENT, 0); }
		public StaticarrContext staticarr() {
			return getRuleContext(StaticarrContext.class,0);
		}
		public ParamunContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_paramun; }
	}

	public final ParamunContext paramun() throws RecognitionException {
		ParamunContext _localctx = new ParamunContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_paramun);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(82);
			type();
			setState(83);
			match(IDENT);
			setState(84);
			staticarr();
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
	public static class MulparamContext extends ParserRuleContext {
		public ParamunContext tn;
		public TerminalNode COMMA() { return getToken(lycorisParser.COMMA, 0); }
		public ParamunContext paramun() {
			return getRuleContext(ParamunContext.class,0);
		}
		public MulparamContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mulparam; }
	}

	public final MulparamContext mulparam() throws RecognitionException {
		MulparamContext _localctx = new MulparamContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_mulparam);
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(86);
			match(COMMA);
			setState(87);
			((MulparamContext)_localctx).tn = paramun();
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
	public static class InstructionContext extends ParserRuleContext {
		public ExprContext ifcond;
		public InstructionContext ifblock;
		public InstructionContext elseblock;
		public ExprContext whilecond;
		public InstructionContext whileblock;
		public TypeContext tinit;
		public DeclarationContext dinit;
		public ExprContext forcond;
		public Token aftername;
		public AffectationContext after;
		public InstructionContext forblock;
		public ExprContext ret;
		public Token namec;
		public ExprlistContext parameter;
		public AffectationContext aff;
		public Token var;
		public StaticarrContext sarr;
		public ExprContext value;
		public InstructionContext block;
		public TerminalNode LP() { return getToken(lycorisParser.LP, 0); }
		public TerminalNode RP() { return getToken(lycorisParser.RP, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public List<InstructionContext> instruction() {
			return getRuleContexts(InstructionContext.class);
		}
		public InstructionContext instruction(int i) {
			return getRuleContext(InstructionContext.class,i);
		}
		public List<TerminalNode> SEMICOLON() { return getTokens(lycorisParser.SEMICOLON); }
		public TerminalNode SEMICOLON(int i) {
			return getToken(lycorisParser.SEMICOLON, i);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public List<DeclarationContext> declaration() {
			return getRuleContexts(DeclarationContext.class);
		}
		public DeclarationContext declaration(int i) {
			return getRuleContext(DeclarationContext.class,i);
		}
		public TerminalNode IDENT() { return getToken(lycorisParser.IDENT, 0); }
		public AffectationContext affectation() {
			return getRuleContext(AffectationContext.class,0);
		}
		public ExprlistContext exprlist() {
			return getRuleContext(ExprlistContext.class,0);
		}
		public List<IndexarrContext> indexarr() {
			return getRuleContexts(IndexarrContext.class);
		}
		public IndexarrContext indexarr(int i) {
			return getRuleContext(IndexarrContext.class,i);
		}
		public StaticarrContext staticarr() {
			return getRuleContext(StaticarrContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(lycorisParser.ASSIGN, 0); }
		public TerminalNode LA() { return getToken(lycorisParser.LA, 0); }
		public TerminalNode RA() { return getToken(lycorisParser.RA, 0); }
		public InstructionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_instruction; }
	}

	public final InstructionContext instruction() throws RecognitionException {
		InstructionContext _localctx = new InstructionContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_instruction);
		int _la;
		try {
			setState(165);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__0:
				enterOuterAlt(_localctx, 1);
				{
				setState(89);
				match(T__0);
				setState(90);
				match(LP);
				setState(91);
				((InstructionContext)_localctx).ifcond = expr();
				setState(92);
				match(RP);
				setState(93);
				((InstructionContext)_localctx).ifblock = instruction();
				setState(96);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
				case 1:
					{
					setState(94);
					match(T__1);
					setState(95);
					((InstructionContext)_localctx).elseblock = instruction();
					}
					break;
				}
				}
				break;
			case T__2:
				enterOuterAlt(_localctx, 2);
				{
				setState(98);
				match(T__2);
				setState(99);
				match(LP);
				setState(100);
				((InstructionContext)_localctx).whilecond = expr();
				setState(101);
				match(RP);
				setState(102);
				((InstructionContext)_localctx).whileblock = instruction();
				}
				break;
			case T__3:
				enterOuterAlt(_localctx, 3);
				{
				setState(104);
				match(T__3);
				setState(105);
				match(LP);
				setState(109);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 516096L) != 0)) {
					{
					setState(106);
					((InstructionContext)_localctx).tinit = type();
					setState(107);
					((InstructionContext)_localctx).dinit = declaration();
					}
				}

				setState(111);
				match(SEMICOLON);
				setState(113);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 17733168346431488L) != 0)) {
					{
					setState(112);
					((InstructionContext)_localctx).forcond = expr();
					}
				}

				setState(115);
				match(SEMICOLON);
				setState(118);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==IDENT) {
					{
					setState(116);
					((InstructionContext)_localctx).aftername = match(IDENT);
					setState(117);
					((InstructionContext)_localctx).after = affectation();
					}
				}

				setState(120);
				match(RP);
				setState(121);
				((InstructionContext)_localctx).forblock = instruction();
				}
				break;
			case T__4:
				enterOuterAlt(_localctx, 4);
				{
				setState(122);
				match(T__4);
				setState(123);
				((InstructionContext)_localctx).ret = expr();
				setState(124);
				match(SEMICOLON);
				}
				break;
			case IDENT:
				enterOuterAlt(_localctx, 5);
				{
				setState(126);
				((InstructionContext)_localctx).namec = match(IDENT);
				setState(138);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case LP:
					{
					setState(127);
					match(LP);
					setState(128);
					((InstructionContext)_localctx).parameter = exprlist();
					setState(129);
					match(RP);
					}
					break;
				case T__5:
				case T__6:
				case T__7:
				case T__8:
				case T__9:
				case T__10:
				case T__11:
				case LC:
				case ASSIGN:
					{
					setState(134);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==LC) {
						{
						{
						setState(131);
						indexarr();
						}
						}
						setState(136);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(137);
					((InstructionContext)_localctx).aff = affectation();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(140);
				match(SEMICOLON);
				}
				break;
			case T__12:
			case T__13:
			case T__14:
			case T__15:
			case T__16:
			case T__17:
				enterOuterAlt(_localctx, 6);
				{
				setState(142);
				type();
				setState(143);
				((InstructionContext)_localctx).var = match(IDENT);
				setState(144);
				((InstructionContext)_localctx).sarr = staticarr();
				setState(147);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ASSIGN) {
					{
					setState(145);
					match(ASSIGN);
					setState(146);
					((InstructionContext)_localctx).value = expr();
					}
				}

				setState(152);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(149);
					declaration();
					}
					}
					setState(154);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(155);
				match(SEMICOLON);
				}
				break;
			case LA:
				enterOuterAlt(_localctx, 7);
				{
				setState(157);
				match(LA);
				setState(161);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 2253998837456954L) != 0)) {
					{
					{
					setState(158);
					((InstructionContext)_localctx).block = instruction();
					}
					}
					setState(163);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(164);
				match(RA);
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
	public static class IndexarrContext extends ParserRuleContext {
		public TerminalNode LC() { return getToken(lycorisParser.LC, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode RC() { return getToken(lycorisParser.RC, 0); }
		public IndexarrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_indexarr; }
	}

	public final IndexarrContext indexarr() throws RecognitionException {
		IndexarrContext _localctx = new IndexarrContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_indexarr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(167);
			match(LC);
			setState(168);
			expr();
			setState(169);
			match(RC);
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
	public static class DeclarationContext extends ParserRuleContext {
		public Token var;
		public StaticarrContext sarr;
		public ExprContext value;
		public TerminalNode COMMA() { return getToken(lycorisParser.COMMA, 0); }
		public TerminalNode IDENT() { return getToken(lycorisParser.IDENT, 0); }
		public StaticarrContext staticarr() {
			return getRuleContext(StaticarrContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(lycorisParser.ASSIGN, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public DeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaration; }
	}

	public final DeclarationContext declaration() throws RecognitionException {
		DeclarationContext _localctx = new DeclarationContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_declaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(171);
			match(COMMA);
			setState(172);
			((DeclarationContext)_localctx).var = match(IDENT);
			setState(173);
			((DeclarationContext)_localctx).sarr = staticarr();
			setState(176);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ASSIGN) {
				{
				setState(174);
				match(ASSIGN);
				setState(175);
				((DeclarationContext)_localctx).value = expr();
				}
			}

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
	public static class StaticarrContext extends ParserRuleContext {
		public List<TerminalNode> LC() { return getTokens(lycorisParser.LC); }
		public TerminalNode LC(int i) {
			return getToken(lycorisParser.LC, i);
		}
		public List<TerminalNode> INT() { return getTokens(lycorisParser.INT); }
		public TerminalNode INT(int i) {
			return getToken(lycorisParser.INT, i);
		}
		public List<TerminalNode> RC() { return getTokens(lycorisParser.RC); }
		public TerminalNode RC(int i) {
			return getToken(lycorisParser.RC, i);
		}
		public StaticarrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_staticarr; }
	}

	public final StaticarrContext staticarr() throws RecognitionException {
		StaticarrContext _localctx = new StaticarrContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_staticarr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(183);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==LC) {
				{
				{
				setState(178);
				match(LC);
				setState(179);
				match(INT);
				setState(180);
				match(RC);
				}
				}
				setState(185);
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
	public static class ExprlistContext extends ParserRuleContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(lycorisParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(lycorisParser.COMMA, i);
		}
		public ExprlistContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_exprlist; }
	}

	public final ExprlistContext exprlist() throws RecognitionException {
		ExprlistContext _localctx = new ExprlistContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_exprlist);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(194);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 17733168346431488L) != 0)) {
				{
				setState(186);
				expr();
				setState(191);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(187);
					match(COMMA);
					setState(188);
					expr();
					}
					}
					setState(193);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
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
	public static class AffectationContext extends ParserRuleContext {
		public Token op;
		public ExprContext assign;
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(lycorisParser.ASSIGN, 0); }
		public AffectationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_affectation; }
	}

	public final AffectationContext affectation() throws RecognitionException {
		AffectationContext _localctx = new AffectationContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_affectation);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(196);
			((AffectationContext)_localctx).op = _input.LT(1);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 35184372096960L) != 0)) ) {
				((AffectationContext)_localctx).op = (Token)_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(197);
			((AffectationContext)_localctx).assign = expr();
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
		public Token raw;
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_type);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(199);
			((TypeContext)_localctx).raw = _input.LT(1);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 516096L) != 0)) ) {
				((TypeContext)_localctx).raw = (Token)_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(205);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__18) {
				{
				setState(201); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(200);
					match(T__18);
					}
					}
					setState(203); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( _la==T__18 );
				}
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
	public static class ExprContext extends ParserRuleContext {
		public OrContext a;
		public ExprContext b;
		public ExprContext c;
		public OrContext or() {
			return getRuleContext(OrContext.class,0);
		}
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	}

	public final ExprContext expr() throws RecognitionException {
		ExprContext _localctx = new ExprContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_expr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(207);
			((ExprContext)_localctx).a = or();
			setState(213);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__19) {
				{
				setState(208);
				match(T__19);
				setState(209);
				((ExprContext)_localctx).b = expr();
				setState(210);
				match(T__20);
				setState(211);
				((ExprContext)_localctx).c = expr();
				}
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
	public static class OrContext extends ParserRuleContext {
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
		public OrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_or; }
	}

	public final OrContext or() throws RecognitionException {
		OrContext _localctx = new OrContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_or);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(215);
			((OrContext)_localctx).a = xor_();
			setState(219);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__21) {
				{
				{
				setState(216);
				((OrContext)_localctx).b = mor_();
				}
				}
				setState(221);
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
		enterRule(_localctx, 28, RULE_mor_);
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(222);
			((Mor_Context)_localctx).op = match(T__21);
			setState(223);
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
		enterRule(_localctx, 30, RULE_xor_);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(225);
			((Xor_Context)_localctx).a = and_();
			setState(229);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__22) {
				{
				{
				setState(226);
				((Xor_Context)_localctx).b = mxor_();
				}
				}
				setState(231);
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
		enterRule(_localctx, 32, RULE_mxor_);
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(232);
			((Mxor_Context)_localctx).op = match(T__22);
			setState(233);
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
		enterRule(_localctx, 34, RULE_and_);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(235);
			((And_Context)_localctx).a = equal();
			setState(239);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__23) {
				{
				{
				setState(236);
				((And_Context)_localctx).b = mand_();
				}
				}
				setState(241);
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
		enterRule(_localctx, 36, RULE_mand_);
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(242);
			((Mand_Context)_localctx).op = match(T__23);
			setState(243);
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
		enterRule(_localctx, 38, RULE_equal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(245);
			((EqualContext)_localctx).a = comparaison();
			setState(249);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__24 || _la==T__25) {
				{
				{
				setState(246);
				((EqualContext)_localctx).b = mequal();
				}
				}
				setState(251);
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
		enterRule(_localctx, 40, RULE_mequal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(252);
			((MequalContext)_localctx).op = _input.LT(1);
			_la = _input.LA(1);
			if ( !(_la==T__24 || _la==T__25) ) {
				((MequalContext)_localctx).op = (Token)_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(253);
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
		enterRule(_localctx, 42, RULE_comparaison);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(255);
			((ComparaisonContext)_localctx).a = addsub();
			setState(259);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 2013265920L) != 0)) {
				{
				{
				setState(256);
				((ComparaisonContext)_localctx).b = mcomparaison();
				}
				}
				setState(261);
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
		enterRule(_localctx, 44, RULE_mcomparaison);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(262);
			((McomparaisonContext)_localctx).op = _input.LT(1);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 2013265920L) != 0)) ) {
				((McomparaisonContext)_localctx).op = (Token)_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(263);
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
		enterRule(_localctx, 46, RULE_addsub);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(265);
			((AddsubContext)_localctx).a = muldivmod();
			setState(269);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__30 || _la==T__31) {
				{
				{
				setState(266);
				((AddsubContext)_localctx).b = maddsub();
				}
				}
				setState(271);
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
		enterRule(_localctx, 48, RULE_maddsub);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(272);
			((MaddsubContext)_localctx).op = _input.LT(1);
			_la = _input.LA(1);
			if ( !(_la==T__30 || _la==T__31) ) {
				((MaddsubContext)_localctx).op = (Token)_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(273);
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
		enterRule(_localctx, 50, RULE_muldivmod);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(275);
			((MuldivmodContext)_localctx).a = unary();
			setState(279);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 25770328064L) != 0)) {
				{
				{
				setState(276);
				((MuldivmodContext)_localctx).b = mmuldivmod();
				}
				}
				setState(281);
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
		enterRule(_localctx, 52, RULE_mmuldivmod);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(282);
			((MmuldivmodContext)_localctx).op = _input.LT(1);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 25770328064L) != 0)) ) {
				((MmuldivmodContext)_localctx).op = (Token)_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(283);
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
		enterRule(_localctx, 54, RULE_unary);
		int _la;
		try {
			setState(288);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__18:
			case T__31:
			case T__34:
			case T__35:
				enterOuterAlt(_localctx, 1);
				{
				setState(285);
				((UnaryContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 107374706688L) != 0)) ) {
					((UnaryContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(286);
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
				setState(287);
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
		public ExprlistContext param;
		public IndexarrContext arr;
		public TerminalNode INT() { return getToken(lycorisParser.INT, 0); }
		public TerminalNode FLOAT() { return getToken(lycorisParser.FLOAT, 0); }
		public TerminalNode STRING() { return getToken(lycorisParser.STRING, 0); }
		public TerminalNode CHAR() { return getToken(lycorisParser.CHAR, 0); }
		public TerminalNode BOOL() { return getToken(lycorisParser.BOOL, 0); }
		public TerminalNode IDENT() { return getToken(lycorisParser.IDENT, 0); }
		public TerminalNode LP() { return getToken(lycorisParser.LP, 0); }
		public TerminalNode RP() { return getToken(lycorisParser.RP, 0); }
		public ExprlistContext exprlist() {
			return getRuleContext(ExprlistContext.class,0);
		}
		public List<IndexarrContext> indexarr() {
			return getRuleContexts(IndexarrContext.class);
		}
		public IndexarrContext indexarr(int i) {
			return getRuleContext(IndexarrContext.class,i);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public AtomContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_atom; }
	}

	public final AtomContext atom() throws RecognitionException {
		AtomContext _localctx = new AtomContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_atom);
		int _la;
		try {
			setState(311);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INT:
				enterOuterAlt(_localctx, 1);
				{
				setState(290);
				match(INT);
				}
				break;
			case FLOAT:
				enterOuterAlt(_localctx, 2);
				{
				setState(291);
				match(FLOAT);
				}
				break;
			case STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(292);
				match(STRING);
				}
				break;
			case CHAR:
				enterOuterAlt(_localctx, 4);
				{
				setState(293);
				match(CHAR);
				}
				break;
			case BOOL:
				enterOuterAlt(_localctx, 5);
				{
				setState(294);
				match(BOOL);
				}
				break;
			case IDENT:
				enterOuterAlt(_localctx, 6);
				{
				setState(295);
				match(IDENT);
				setState(305);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case LP:
					{
					setState(296);
					match(LP);
					setState(297);
					((AtomContext)_localctx).param = exprlist();
					setState(298);
					match(RP);
					}
					break;
				case LC:
					{
					setState(301); 
					_errHandler.sync(this);
					_la = _input.LA(1);
					do {
						{
						{
						setState(300);
						((AtomContext)_localctx).arr = indexarr();
						}
						}
						setState(303); 
						_errHandler.sync(this);
						_la = _input.LA(1);
					} while ( _la==LC );
					}
					break;
				case T__18:
				case T__19:
				case T__20:
				case T__21:
				case T__22:
				case T__23:
				case T__24:
				case T__25:
				case T__26:
				case T__27:
				case T__28:
				case T__29:
				case T__30:
				case T__31:
				case T__32:
				case T__33:
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
				setState(307);
				match(LP);
				setState(308);
				expr();
				setState(309);
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
		"\u0004\u00015\u013a\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007\u0015"+
		"\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017\u0002\u0018\u0007\u0018"+
		"\u0002\u0019\u0007\u0019\u0002\u001a\u0007\u001a\u0002\u001b\u0007\u001b"+
		"\u0002\u001c\u0007\u001c\u0001\u0000\u0005\u0000<\b\u0000\n\u0000\f\u0000"+
		"?\t\u0000\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002"+
		"\u0005\u0002L\b\u0002\n\u0002\f\u0002O\t\u0002\u0003\u0002Q\b\u0002\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001"+
		"\u0005\u0001\u0005\u0003\u0005a\b\u0005\u0001\u0005\u0001\u0005\u0001"+
		"\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001"+
		"\u0005\u0001\u0005\u0001\u0005\u0003\u0005n\b\u0005\u0001\u0005\u0001"+
		"\u0005\u0003\u0005r\b\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0003"+
		"\u0005w\b\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001"+
		"\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001"+
		"\u0005\u0001\u0005\u0005\u0005\u0085\b\u0005\n\u0005\f\u0005\u0088\t\u0005"+
		"\u0001\u0005\u0003\u0005\u008b\b\u0005\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0003\u0005\u0094\b\u0005"+
		"\u0001\u0005\u0005\u0005\u0097\b\u0005\n\u0005\f\u0005\u009a\t\u0005\u0001"+
		"\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0005\u0005\u00a0\b\u0005\n"+
		"\u0005\f\u0005\u00a3\t\u0005\u0001\u0005\u0003\u0005\u00a6\b\u0005\u0001"+
		"\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0007\u0001\u0007\u0001"+
		"\u0007\u0001\u0007\u0001\u0007\u0003\u0007\u00b1\b\u0007\u0001\b\u0001"+
		"\b\u0001\b\u0005\b\u00b6\b\b\n\b\f\b\u00b9\t\b\u0001\t\u0001\t\u0001\t"+
		"\u0005\t\u00be\b\t\n\t\f\t\u00c1\t\t\u0003\t\u00c3\b\t\u0001\n\u0001\n"+
		"\u0001\n\u0001\u000b\u0001\u000b\u0004\u000b\u00ca\b\u000b\u000b\u000b"+
		"\f\u000b\u00cb\u0003\u000b\u00ce\b\u000b\u0001\f\u0001\f\u0001\f\u0001"+
		"\f\u0001\f\u0001\f\u0003\f\u00d6\b\f\u0001\r\u0001\r\u0005\r\u00da\b\r"+
		"\n\r\f\r\u00dd\t\r\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000f\u0001"+
		"\u000f\u0005\u000f\u00e4\b\u000f\n\u000f\f\u000f\u00e7\t\u000f\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0001\u0011\u0001\u0011\u0005\u0011\u00ee\b\u0011"+
		"\n\u0011\f\u0011\u00f1\t\u0011\u0001\u0012\u0001\u0012\u0001\u0012\u0001"+
		"\u0013\u0001\u0013\u0005\u0013\u00f8\b\u0013\n\u0013\f\u0013\u00fb\t\u0013"+
		"\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0015\u0001\u0015\u0005\u0015"+
		"\u0102\b\u0015\n\u0015\f\u0015\u0105\t\u0015\u0001\u0016\u0001\u0016\u0001"+
		"\u0016\u0001\u0017\u0001\u0017\u0005\u0017\u010c\b\u0017\n\u0017\f\u0017"+
		"\u010f\t\u0017\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0019\u0001\u0019"+
		"\u0005\u0019\u0116\b\u0019\n\u0019\f\u0019\u0119\t\u0019\u0001\u001a\u0001"+
		"\u001a\u0001\u001a\u0001\u001b\u0001\u001b\u0001\u001b\u0003\u001b\u0121"+
		"\b\u001b\u0001\u001c\u0001\u001c\u0001\u001c\u0001\u001c\u0001\u001c\u0001"+
		"\u001c\u0001\u001c\u0001\u001c\u0001\u001c\u0001\u001c\u0001\u001c\u0004"+
		"\u001c\u012e\b\u001c\u000b\u001c\f\u001c\u012f\u0003\u001c\u0132\b\u001c"+
		"\u0001\u001c\u0001\u001c\u0001\u001c\u0001\u001c\u0003\u001c\u0138\b\u001c"+
		"\u0001\u001c\u0000\u0000\u001d\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010"+
		"\u0012\u0014\u0016\u0018\u001a\u001c\u001e \"$&(*,.02468\u0000\u0007\u0002"+
		"\u0000\u0006\f--\u0001\u0000\r\u0012\u0001\u0000\u0019\u001a\u0001\u0000"+
		"\u001b\u001e\u0001\u0000\u001f \u0002\u0000\u0013\u0013!\"\u0003\u0000"+
		"\u0013\u0013  #$\u0146\u0000=\u0001\u0000\u0000\u0000\u0002B\u0001\u0000"+
		"\u0000\u0000\u0004P\u0001\u0000\u0000\u0000\u0006R\u0001\u0000\u0000\u0000"+
		"\bV\u0001\u0000\u0000\u0000\n\u00a5\u0001\u0000\u0000\u0000\f\u00a7\u0001"+
		"\u0000\u0000\u0000\u000e\u00ab\u0001\u0000\u0000\u0000\u0010\u00b7\u0001"+
		"\u0000\u0000\u0000\u0012\u00c2\u0001\u0000\u0000\u0000\u0014\u00c4\u0001"+
		"\u0000\u0000\u0000\u0016\u00c7\u0001\u0000\u0000\u0000\u0018\u00cf\u0001"+
		"\u0000\u0000\u0000\u001a\u00d7\u0001\u0000\u0000\u0000\u001c\u00de\u0001"+
		"\u0000\u0000\u0000\u001e\u00e1\u0001\u0000\u0000\u0000 \u00e8\u0001\u0000"+
		"\u0000\u0000\"\u00eb\u0001\u0000\u0000\u0000$\u00f2\u0001\u0000\u0000"+
		"\u0000&\u00f5\u0001\u0000\u0000\u0000(\u00fc\u0001\u0000\u0000\u0000*"+
		"\u00ff\u0001\u0000\u0000\u0000,\u0106\u0001\u0000\u0000\u0000.\u0109\u0001"+
		"\u0000\u0000\u00000\u0110\u0001\u0000\u0000\u00002\u0113\u0001\u0000\u0000"+
		"\u00004\u011a\u0001\u0000\u0000\u00006\u0120\u0001\u0000\u0000\u00008"+
		"\u0137\u0001\u0000\u0000\u0000:<\u0003\u0002\u0001\u0000;:\u0001\u0000"+
		"\u0000\u0000<?\u0001\u0000\u0000\u0000=;\u0001\u0000\u0000\u0000=>\u0001"+
		"\u0000\u0000\u0000>@\u0001\u0000\u0000\u0000?=\u0001\u0000\u0000\u0000"+
		"@A\u0005\u0000\u0000\u0001A\u0001\u0001\u0000\u0000\u0000BC\u0003\u0016"+
		"\u000b\u0000CD\u00053\u0000\u0000DE\u0005%\u0000\u0000EF\u0003\u0004\u0002"+
		"\u0000FG\u0005&\u0000\u0000GH\u0003\n\u0005\u0000H\u0003\u0001\u0000\u0000"+
		"\u0000IM\u0003\u0006\u0003\u0000JL\u0003\b\u0004\u0000KJ\u0001\u0000\u0000"+
		"\u0000LO\u0001\u0000\u0000\u0000MK\u0001\u0000\u0000\u0000MN\u0001\u0000"+
		"\u0000\u0000NQ\u0001\u0000\u0000\u0000OM\u0001\u0000\u0000\u0000PI\u0001"+
		"\u0000\u0000\u0000PQ\u0001\u0000\u0000\u0000Q\u0005\u0001\u0000\u0000"+
		"\u0000RS\u0003\u0016\u000b\u0000ST\u00053\u0000\u0000TU\u0003\u0010\b"+
		"\u0000U\u0007\u0001\u0000\u0000\u0000VW\u0005+\u0000\u0000WX\u0003\u0006"+
		"\u0003\u0000X\t\u0001\u0000\u0000\u0000YZ\u0005\u0001\u0000\u0000Z[\u0005"+
		"%\u0000\u0000[\\\u0003\u0018\f\u0000\\]\u0005&\u0000\u0000]`\u0003\n\u0005"+
		"\u0000^_\u0005\u0002\u0000\u0000_a\u0003\n\u0005\u0000`^\u0001\u0000\u0000"+
		"\u0000`a\u0001\u0000\u0000\u0000a\u00a6\u0001\u0000\u0000\u0000bc\u0005"+
		"\u0003\u0000\u0000cd\u0005%\u0000\u0000de\u0003\u0018\f\u0000ef\u0005"+
		"&\u0000\u0000fg\u0003\n\u0005\u0000g\u00a6\u0001\u0000\u0000\u0000hi\u0005"+
		"\u0004\u0000\u0000im\u0005%\u0000\u0000jk\u0003\u0016\u000b\u0000kl\u0003"+
		"\u000e\u0007\u0000ln\u0001\u0000\u0000\u0000mj\u0001\u0000\u0000\u0000"+
		"mn\u0001\u0000\u0000\u0000no\u0001\u0000\u0000\u0000oq\u0005,\u0000\u0000"+
		"pr\u0003\u0018\f\u0000qp\u0001\u0000\u0000\u0000qr\u0001\u0000\u0000\u0000"+
		"rs\u0001\u0000\u0000\u0000sv\u0005,\u0000\u0000tu\u00053\u0000\u0000u"+
		"w\u0003\u0014\n\u0000vt\u0001\u0000\u0000\u0000vw\u0001\u0000\u0000\u0000"+
		"wx\u0001\u0000\u0000\u0000xy\u0005&\u0000\u0000y\u00a6\u0003\n\u0005\u0000"+
		"z{\u0005\u0005\u0000\u0000{|\u0003\u0018\f\u0000|}\u0005,\u0000\u0000"+
		"}\u00a6\u0001\u0000\u0000\u0000~\u008a\u00053\u0000\u0000\u007f\u0080"+
		"\u0005%\u0000\u0000\u0080\u0081\u0003\u0012\t\u0000\u0081\u0082\u0005"+
		"&\u0000\u0000\u0082\u008b\u0001\u0000\u0000\u0000\u0083\u0085\u0003\f"+
		"\u0006\u0000\u0084\u0083\u0001\u0000\u0000\u0000\u0085\u0088\u0001\u0000"+
		"\u0000\u0000\u0086\u0084\u0001\u0000\u0000\u0000\u0086\u0087\u0001\u0000"+
		"\u0000\u0000\u0087\u0089\u0001\u0000\u0000\u0000\u0088\u0086\u0001\u0000"+
		"\u0000\u0000\u0089\u008b\u0003\u0014\n\u0000\u008a\u007f\u0001\u0000\u0000"+
		"\u0000\u008a\u0086\u0001\u0000\u0000\u0000\u008b\u008c\u0001\u0000\u0000"+
		"\u0000\u008c\u008d\u0005,\u0000\u0000\u008d\u00a6\u0001\u0000\u0000\u0000"+
		"\u008e\u008f\u0003\u0016\u000b\u0000\u008f\u0090\u00053\u0000\u0000\u0090"+
		"\u0093\u0003\u0010\b\u0000\u0091\u0092\u0005-\u0000\u0000\u0092\u0094"+
		"\u0003\u0018\f\u0000\u0093\u0091\u0001\u0000\u0000\u0000\u0093\u0094\u0001"+
		"\u0000\u0000\u0000\u0094\u0098\u0001\u0000\u0000\u0000\u0095\u0097\u0003"+
		"\u000e\u0007\u0000\u0096\u0095\u0001\u0000\u0000\u0000\u0097\u009a\u0001"+
		"\u0000\u0000\u0000\u0098\u0096\u0001\u0000\u0000\u0000\u0098\u0099\u0001"+
		"\u0000\u0000\u0000\u0099\u009b\u0001\u0000\u0000\u0000\u009a\u0098\u0001"+
		"\u0000\u0000\u0000\u009b\u009c\u0005,\u0000\u0000\u009c\u00a6\u0001\u0000"+
		"\u0000\u0000\u009d\u00a1\u0005)\u0000\u0000\u009e\u00a0\u0003\n\u0005"+
		"\u0000\u009f\u009e\u0001\u0000\u0000\u0000\u00a0\u00a3\u0001\u0000\u0000"+
		"\u0000\u00a1\u009f\u0001\u0000\u0000\u0000\u00a1\u00a2\u0001\u0000\u0000"+
		"\u0000\u00a2\u00a4\u0001\u0000\u0000\u0000\u00a3\u00a1\u0001\u0000\u0000"+
		"\u0000\u00a4\u00a6\u0005*\u0000\u0000\u00a5Y\u0001\u0000\u0000\u0000\u00a5"+
		"b\u0001\u0000\u0000\u0000\u00a5h\u0001\u0000\u0000\u0000\u00a5z\u0001"+
		"\u0000\u0000\u0000\u00a5~\u0001\u0000\u0000\u0000\u00a5\u008e\u0001\u0000"+
		"\u0000\u0000\u00a5\u009d\u0001\u0000\u0000\u0000\u00a6\u000b\u0001\u0000"+
		"\u0000\u0000\u00a7\u00a8\u0005\'\u0000\u0000\u00a8\u00a9\u0003\u0018\f"+
		"\u0000\u00a9\u00aa\u0005(\u0000\u0000\u00aa\r\u0001\u0000\u0000\u0000"+
		"\u00ab\u00ac\u0005+\u0000\u0000\u00ac\u00ad\u00053\u0000\u0000\u00ad\u00b0"+
		"\u0003\u0010\b\u0000\u00ae\u00af\u0005-\u0000\u0000\u00af\u00b1\u0003"+
		"\u0018\f\u0000\u00b0\u00ae\u0001\u0000\u0000\u0000\u00b0\u00b1\u0001\u0000"+
		"\u0000\u0000\u00b1\u000f\u0001\u0000\u0000\u0000\u00b2\u00b3\u0005\'\u0000"+
		"\u0000\u00b3\u00b4\u00050\u0000\u0000\u00b4\u00b6\u0005(\u0000\u0000\u00b5"+
		"\u00b2\u0001\u0000\u0000\u0000\u00b6\u00b9\u0001\u0000\u0000\u0000\u00b7"+
		"\u00b5\u0001\u0000\u0000\u0000\u00b7\u00b8\u0001\u0000\u0000\u0000\u00b8"+
		"\u0011\u0001\u0000\u0000\u0000\u00b9\u00b7\u0001\u0000\u0000\u0000\u00ba"+
		"\u00bf\u0003\u0018\f\u0000\u00bb\u00bc\u0005+\u0000\u0000\u00bc\u00be"+
		"\u0003\u0018\f\u0000\u00bd\u00bb\u0001\u0000\u0000\u0000\u00be\u00c1\u0001"+
		"\u0000\u0000\u0000\u00bf\u00bd\u0001\u0000\u0000\u0000\u00bf\u00c0\u0001"+
		"\u0000\u0000\u0000\u00c0\u00c3\u0001\u0000\u0000\u0000\u00c1\u00bf\u0001"+
		"\u0000\u0000\u0000\u00c2\u00ba\u0001\u0000\u0000\u0000\u00c2\u00c3\u0001"+
		"\u0000\u0000\u0000\u00c3\u0013\u0001\u0000\u0000\u0000\u00c4\u00c5\u0007"+
		"\u0000\u0000\u0000\u00c5\u00c6\u0003\u0018\f\u0000\u00c6\u0015\u0001\u0000"+
		"\u0000\u0000\u00c7\u00cd\u0007\u0001\u0000\u0000\u00c8\u00ca\u0005\u0013"+
		"\u0000\u0000\u00c9\u00c8\u0001\u0000\u0000\u0000\u00ca\u00cb\u0001\u0000"+
		"\u0000\u0000\u00cb\u00c9\u0001\u0000\u0000\u0000\u00cb\u00cc\u0001\u0000"+
		"\u0000\u0000\u00cc\u00ce\u0001\u0000\u0000\u0000\u00cd\u00c9\u0001\u0000"+
		"\u0000\u0000\u00cd\u00ce\u0001\u0000\u0000\u0000\u00ce\u0017\u0001\u0000"+
		"\u0000\u0000\u00cf\u00d5\u0003\u001a\r\u0000\u00d0\u00d1\u0005\u0014\u0000"+
		"\u0000\u00d1\u00d2\u0003\u0018\f\u0000\u00d2\u00d3\u0005\u0015\u0000\u0000"+
		"\u00d3\u00d4\u0003\u0018\f\u0000\u00d4\u00d6\u0001\u0000\u0000\u0000\u00d5"+
		"\u00d0\u0001\u0000\u0000\u0000\u00d5\u00d6\u0001\u0000\u0000\u0000\u00d6"+
		"\u0019\u0001\u0000\u0000\u0000\u00d7\u00db\u0003\u001e\u000f\u0000\u00d8"+
		"\u00da\u0003\u001c\u000e\u0000\u00d9\u00d8\u0001\u0000\u0000\u0000\u00da"+
		"\u00dd\u0001\u0000\u0000\u0000\u00db\u00d9\u0001\u0000\u0000\u0000\u00db"+
		"\u00dc\u0001\u0000\u0000\u0000\u00dc\u001b\u0001\u0000\u0000\u0000\u00dd"+
		"\u00db\u0001\u0000\u0000\u0000\u00de\u00df\u0005\u0016\u0000\u0000\u00df"+
		"\u00e0\u0003\u001e\u000f\u0000\u00e0\u001d\u0001\u0000\u0000\u0000\u00e1"+
		"\u00e5\u0003\"\u0011\u0000\u00e2\u00e4\u0003 \u0010\u0000\u00e3\u00e2"+
		"\u0001\u0000\u0000\u0000\u00e4\u00e7\u0001\u0000\u0000\u0000\u00e5\u00e3"+
		"\u0001\u0000\u0000\u0000\u00e5\u00e6\u0001\u0000\u0000\u0000\u00e6\u001f"+
		"\u0001\u0000\u0000\u0000\u00e7\u00e5\u0001\u0000\u0000\u0000\u00e8\u00e9"+
		"\u0005\u0017\u0000\u0000\u00e9\u00ea\u0003\"\u0011\u0000\u00ea!\u0001"+
		"\u0000\u0000\u0000\u00eb\u00ef\u0003&\u0013\u0000\u00ec\u00ee\u0003$\u0012"+
		"\u0000\u00ed\u00ec\u0001\u0000\u0000\u0000\u00ee\u00f1\u0001\u0000\u0000"+
		"\u0000\u00ef\u00ed\u0001\u0000\u0000\u0000\u00ef\u00f0\u0001\u0000\u0000"+
		"\u0000\u00f0#\u0001\u0000\u0000\u0000\u00f1\u00ef\u0001\u0000\u0000\u0000"+
		"\u00f2\u00f3\u0005\u0018\u0000\u0000\u00f3\u00f4\u0003&\u0013\u0000\u00f4"+
		"%\u0001\u0000\u0000\u0000\u00f5\u00f9\u0003*\u0015\u0000\u00f6\u00f8\u0003"+
		"(\u0014\u0000\u00f7\u00f6\u0001\u0000\u0000\u0000\u00f8\u00fb\u0001\u0000"+
		"\u0000\u0000\u00f9\u00f7\u0001\u0000\u0000\u0000\u00f9\u00fa\u0001\u0000"+
		"\u0000\u0000\u00fa\'\u0001\u0000\u0000\u0000\u00fb\u00f9\u0001\u0000\u0000"+
		"\u0000\u00fc\u00fd\u0007\u0002\u0000\u0000\u00fd\u00fe\u0003*\u0015\u0000"+
		"\u00fe)\u0001\u0000\u0000\u0000\u00ff\u0103\u0003.\u0017\u0000\u0100\u0102"+
		"\u0003,\u0016\u0000\u0101\u0100\u0001\u0000\u0000\u0000\u0102\u0105\u0001"+
		"\u0000\u0000\u0000\u0103\u0101\u0001\u0000\u0000\u0000\u0103\u0104\u0001"+
		"\u0000\u0000\u0000\u0104+\u0001\u0000\u0000\u0000\u0105\u0103\u0001\u0000"+
		"\u0000\u0000\u0106\u0107\u0007\u0003\u0000\u0000\u0107\u0108\u0003.\u0017"+
		"\u0000\u0108-\u0001\u0000\u0000\u0000\u0109\u010d\u00032\u0019\u0000\u010a"+
		"\u010c\u00030\u0018\u0000\u010b\u010a\u0001\u0000\u0000\u0000\u010c\u010f"+
		"\u0001\u0000\u0000\u0000\u010d\u010b\u0001\u0000\u0000\u0000\u010d\u010e"+
		"\u0001\u0000\u0000\u0000\u010e/\u0001\u0000\u0000\u0000\u010f\u010d\u0001"+
		"\u0000\u0000\u0000\u0110\u0111\u0007\u0004\u0000\u0000\u0111\u0112\u0003"+
		"2\u0019\u0000\u01121\u0001\u0000\u0000\u0000\u0113\u0117\u00036\u001b"+
		"\u0000\u0114\u0116\u00034\u001a\u0000\u0115\u0114\u0001\u0000\u0000\u0000"+
		"\u0116\u0119\u0001\u0000\u0000\u0000\u0117\u0115\u0001\u0000\u0000\u0000"+
		"\u0117\u0118\u0001\u0000\u0000\u0000\u01183\u0001\u0000\u0000\u0000\u0119"+
		"\u0117\u0001\u0000\u0000\u0000\u011a\u011b\u0007\u0005\u0000\u0000\u011b"+
		"\u011c\u00036\u001b\u0000\u011c5\u0001\u0000\u0000\u0000\u011d\u011e\u0007"+
		"\u0006\u0000\u0000\u011e\u0121\u00036\u001b\u0000\u011f\u0121\u00038\u001c"+
		"\u0000\u0120\u011d\u0001\u0000\u0000\u0000\u0120\u011f\u0001\u0000\u0000"+
		"\u0000\u01217\u0001\u0000\u0000\u0000\u0122\u0138\u00050\u0000\u0000\u0123"+
		"\u0138\u00051\u0000\u0000\u0124\u0138\u00055\u0000\u0000\u0125\u0138\u0005"+
		"4\u0000\u0000\u0126\u0138\u00052\u0000\u0000\u0127\u0131\u00053\u0000"+
		"\u0000\u0128\u0129\u0005%\u0000\u0000\u0129\u012a\u0003\u0012\t\u0000"+
		"\u012a\u012b\u0005&\u0000\u0000\u012b\u0132\u0001\u0000\u0000\u0000\u012c"+
		"\u012e\u0003\f\u0006\u0000\u012d\u012c\u0001\u0000\u0000\u0000\u012e\u012f"+
		"\u0001\u0000\u0000\u0000\u012f\u012d\u0001\u0000\u0000\u0000\u012f\u0130"+
		"\u0001\u0000\u0000\u0000\u0130\u0132\u0001\u0000\u0000\u0000\u0131\u0128"+
		"\u0001\u0000\u0000\u0000\u0131\u012d\u0001\u0000\u0000\u0000\u0131\u0132"+
		"\u0001\u0000\u0000\u0000\u0132\u0138\u0001\u0000\u0000\u0000\u0133\u0134"+
		"\u0005%\u0000\u0000\u0134\u0135\u0003\u0018\f\u0000\u0135\u0136\u0005"+
		"&\u0000\u0000\u0136\u0138\u0001\u0000\u0000\u0000\u0137\u0122\u0001\u0000"+
		"\u0000\u0000\u0137\u0123\u0001\u0000\u0000\u0000\u0137\u0124\u0001\u0000"+
		"\u0000\u0000\u0137\u0125\u0001\u0000\u0000\u0000\u0137\u0126\u0001\u0000"+
		"\u0000\u0000\u0137\u0127\u0001\u0000\u0000\u0000\u0137\u0133\u0001\u0000"+
		"\u0000\u0000\u01389\u0001\u0000\u0000\u0000\u001f=MP`mqv\u0086\u008a\u0093"+
		"\u0098\u00a1\u00a5\u00b0\u00b7\u00bf\u00c2\u00cb\u00cd\u00d5\u00db\u00e5"+
		"\u00ef\u00f9\u0103\u010d\u0117\u0120\u012f\u0131\u0137";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}