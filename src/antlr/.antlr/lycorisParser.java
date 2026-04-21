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
		RULE_mulparam = 4, RULE_instruction = 5, RULE_indexarr = 6, RULE_fordeclaration = 7, 
		RULE_declaration = 8, RULE_staticarr = 9, RULE_exprlist = 10, RULE_affectation = 11, 
		RULE_type = 12, RULE_expr = 13, RULE_or = 14, RULE_mor_ = 15, RULE_xor_ = 16, 
		RULE_mxor_ = 17, RULE_and_ = 18, RULE_mand_ = 19, RULE_equal = 20, RULE_mequal = 21, 
		RULE_comparaison = 22, RULE_mcomparaison = 23, RULE_addsub = 24, RULE_maddsub = 25, 
		RULE_muldivmod = 26, RULE_mmuldivmod = 27, RULE_unary = 28, RULE_atom = 29;
	private static String[] makeRuleNames() {
		return new String[] {
			"prog", "definition", "paramfunction", "paramun", "mulparam", "instruction", 
			"indexarr", "fordeclaration", "declaration", "staticarr", "exprlist", 
			"affectation", "type", "expr", "or", "mor_", "xor_", "mxor_", "and_", 
			"mand_", "equal", "mequal", "comparaison", "mcomparaison", "addsub", 
			"maddsub", "muldivmod", "mmuldivmod", "unary", "atom"
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
			setState(63);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 516096L) != 0)) {
				{
				{
				setState(60);
				definition();
				}
				}
				setState(65);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(66);
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
			setState(68);
			type();
			setState(69);
			match(IDENT);
			setState(70);
			match(LP);
			setState(71);
			paramfunction();
			setState(72);
			match(RP);
			setState(73);
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
			setState(82);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 516096L) != 0)) {
				{
				setState(75);
				((ParamfunctionContext)_localctx).t1 = paramun();
				setState(79);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(76);
					((ParamfunctionContext)_localctx).tn = mulparam();
					}
					}
					setState(81);
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
			setState(84);
			type();
			setState(85);
			match(IDENT);
			setState(86);
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
			setState(88);
			match(COMMA);
			setState(89);
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
		public FordeclarationContext dinit;
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
		public FordeclarationContext fordeclaration() {
			return getRuleContext(FordeclarationContext.class,0);
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
		public List<DeclarationContext> declaration() {
			return getRuleContexts(DeclarationContext.class);
		}
		public DeclarationContext declaration(int i) {
			return getRuleContext(DeclarationContext.class,i);
		}
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
			setState(167);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__0:
				enterOuterAlt(_localctx, 1);
				{
				setState(91);
				match(T__0);
				setState(92);
				match(LP);
				setState(93);
				((InstructionContext)_localctx).ifcond = expr();
				setState(94);
				match(RP);
				setState(95);
				((InstructionContext)_localctx).ifblock = instruction();
				setState(98);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
				case 1:
					{
					setState(96);
					match(T__1);
					setState(97);
					((InstructionContext)_localctx).elseblock = instruction();
					}
					break;
				}
				}
				break;
			case T__2:
				enterOuterAlt(_localctx, 2);
				{
				setState(100);
				match(T__2);
				setState(101);
				match(LP);
				setState(102);
				((InstructionContext)_localctx).whilecond = expr();
				setState(103);
				match(RP);
				setState(104);
				((InstructionContext)_localctx).whileblock = instruction();
				}
				break;
			case T__3:
				enterOuterAlt(_localctx, 3);
				{
				setState(106);
				match(T__3);
				setState(107);
				match(LP);
				setState(111);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 516096L) != 0)) {
					{
					setState(108);
					((InstructionContext)_localctx).tinit = type();
					setState(109);
					((InstructionContext)_localctx).dinit = fordeclaration();
					}
				}

				setState(113);
				match(SEMICOLON);
				setState(115);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 17733168346431488L) != 0)) {
					{
					setState(114);
					((InstructionContext)_localctx).forcond = expr();
					}
				}

				setState(117);
				match(SEMICOLON);
				setState(120);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==IDENT) {
					{
					setState(118);
					((InstructionContext)_localctx).aftername = match(IDENT);
					setState(119);
					((InstructionContext)_localctx).after = affectation();
					}
				}

				setState(122);
				match(RP);
				setState(123);
				((InstructionContext)_localctx).forblock = instruction();
				}
				break;
			case T__4:
				enterOuterAlt(_localctx, 4);
				{
				setState(124);
				match(T__4);
				setState(125);
				((InstructionContext)_localctx).ret = expr();
				setState(126);
				match(SEMICOLON);
				}
				break;
			case IDENT:
				enterOuterAlt(_localctx, 5);
				{
				setState(128);
				((InstructionContext)_localctx).namec = match(IDENT);
				setState(140);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case LP:
					{
					setState(129);
					match(LP);
					setState(130);
					((InstructionContext)_localctx).parameter = exprlist();
					setState(131);
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
					setState(136);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==LC) {
						{
						{
						setState(133);
						indexarr();
						}
						}
						setState(138);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(139);
					((InstructionContext)_localctx).aff = affectation();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(142);
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
				setState(144);
				type();
				setState(145);
				((InstructionContext)_localctx).var = match(IDENT);
				setState(146);
				((InstructionContext)_localctx).sarr = staticarr();
				setState(149);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ASSIGN) {
					{
					setState(147);
					match(ASSIGN);
					setState(148);
					((InstructionContext)_localctx).value = expr();
					}
				}

				setState(154);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(151);
					declaration();
					}
					}
					setState(156);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(157);
				match(SEMICOLON);
				}
				break;
			case LA:
				enterOuterAlt(_localctx, 7);
				{
				setState(159);
				match(LA);
				setState(163);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 2253998837456954L) != 0)) {
					{
					{
					setState(160);
					((InstructionContext)_localctx).block = instruction();
					}
					}
					setState(165);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(166);
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
			setState(169);
			match(LC);
			setState(170);
			expr();
			setState(171);
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
	public static class FordeclarationContext extends ParserRuleContext {
		public Token var;
		public StaticarrContext sarr;
		public ExprContext value;
		public TerminalNode ASSIGN() { return getToken(lycorisParser.ASSIGN, 0); }
		public TerminalNode IDENT() { return getToken(lycorisParser.IDENT, 0); }
		public StaticarrContext staticarr() {
			return getRuleContext(StaticarrContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public FordeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fordeclaration; }
	}

	public final FordeclarationContext fordeclaration() throws RecognitionException {
		FordeclarationContext _localctx = new FordeclarationContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_fordeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(173);
			((FordeclarationContext)_localctx).var = match(IDENT);
			setState(174);
			((FordeclarationContext)_localctx).sarr = staticarr();
			setState(175);
			match(ASSIGN);
			setState(176);
			((FordeclarationContext)_localctx).value = expr();
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
		enterRule(_localctx, 16, RULE_declaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(178);
			match(COMMA);
			setState(179);
			((DeclarationContext)_localctx).var = match(IDENT);
			setState(180);
			((DeclarationContext)_localctx).sarr = staticarr();
			setState(183);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ASSIGN) {
				{
				setState(181);
				match(ASSIGN);
				setState(182);
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
		enterRule(_localctx, 18, RULE_staticarr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(190);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==LC) {
				{
				{
				setState(185);
				match(LC);
				setState(186);
				match(INT);
				setState(187);
				match(RC);
				}
				}
				setState(192);
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
		enterRule(_localctx, 20, RULE_exprlist);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(201);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 17733168346431488L) != 0)) {
				{
				setState(193);
				expr();
				setState(198);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(194);
					match(COMMA);
					setState(195);
					expr();
					}
					}
					setState(200);
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
		enterRule(_localctx, 22, RULE_affectation);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(203);
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
			setState(204);
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
		enterRule(_localctx, 24, RULE_type);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(206);
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
			setState(212);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__18) {
				{
				setState(208); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(207);
					match(T__18);
					}
					}
					setState(210); 
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
		enterRule(_localctx, 26, RULE_expr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(214);
			((ExprContext)_localctx).a = or();
			setState(220);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__19) {
				{
				setState(215);
				match(T__19);
				setState(216);
				((ExprContext)_localctx).b = expr();
				setState(217);
				match(T__20);
				setState(218);
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
		enterRule(_localctx, 28, RULE_or);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(222);
			((OrContext)_localctx).a = xor_();
			setState(226);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__21) {
				{
				{
				setState(223);
				((OrContext)_localctx).b = mor_();
				}
				}
				setState(228);
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
		enterRule(_localctx, 30, RULE_mor_);
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(229);
			((Mor_Context)_localctx).op = match(T__21);
			setState(230);
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
		enterRule(_localctx, 32, RULE_xor_);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(232);
			((Xor_Context)_localctx).a = and_();
			setState(236);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__22) {
				{
				{
				setState(233);
				((Xor_Context)_localctx).b = mxor_();
				}
				}
				setState(238);
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
		enterRule(_localctx, 34, RULE_mxor_);
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(239);
			((Mxor_Context)_localctx).op = match(T__22);
			setState(240);
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
		enterRule(_localctx, 36, RULE_and_);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(242);
			((And_Context)_localctx).a = equal();
			setState(246);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__23) {
				{
				{
				setState(243);
				((And_Context)_localctx).b = mand_();
				}
				}
				setState(248);
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
		enterRule(_localctx, 38, RULE_mand_);
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(249);
			((Mand_Context)_localctx).op = match(T__23);
			setState(250);
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
		enterRule(_localctx, 40, RULE_equal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(252);
			((EqualContext)_localctx).a = comparaison();
			setState(256);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__24 || _la==T__25) {
				{
				{
				setState(253);
				((EqualContext)_localctx).b = mequal();
				}
				}
				setState(258);
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
		enterRule(_localctx, 42, RULE_mequal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(259);
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
			setState(260);
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
		enterRule(_localctx, 44, RULE_comparaison);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(262);
			((ComparaisonContext)_localctx).a = addsub();
			setState(266);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 2013265920L) != 0)) {
				{
				{
				setState(263);
				((ComparaisonContext)_localctx).b = mcomparaison();
				}
				}
				setState(268);
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
		enterRule(_localctx, 46, RULE_mcomparaison);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(269);
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
			setState(270);
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
		enterRule(_localctx, 48, RULE_addsub);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(272);
			((AddsubContext)_localctx).a = muldivmod();
			setState(276);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__30 || _la==T__31) {
				{
				{
				setState(273);
				((AddsubContext)_localctx).b = maddsub();
				}
				}
				setState(278);
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
		enterRule(_localctx, 50, RULE_maddsub);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(279);
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
			setState(280);
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
		enterRule(_localctx, 52, RULE_muldivmod);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(282);
			((MuldivmodContext)_localctx).a = unary();
			setState(286);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 25770328064L) != 0)) {
				{
				{
				setState(283);
				((MuldivmodContext)_localctx).b = mmuldivmod();
				}
				}
				setState(288);
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
		enterRule(_localctx, 54, RULE_mmuldivmod);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(289);
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
			setState(290);
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
		enterRule(_localctx, 56, RULE_unary);
		int _la;
		try {
			setState(295);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__18:
			case T__31:
			case T__34:
			case T__35:
				enterOuterAlt(_localctx, 1);
				{
				setState(292);
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
				setState(293);
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
				setState(294);
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
		enterRule(_localctx, 58, RULE_atom);
		int _la;
		try {
			setState(318);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INT:
				enterOuterAlt(_localctx, 1);
				{
				setState(297);
				match(INT);
				}
				break;
			case FLOAT:
				enterOuterAlt(_localctx, 2);
				{
				setState(298);
				match(FLOAT);
				}
				break;
			case STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(299);
				match(STRING);
				}
				break;
			case CHAR:
				enterOuterAlt(_localctx, 4);
				{
				setState(300);
				match(CHAR);
				}
				break;
			case BOOL:
				enterOuterAlt(_localctx, 5);
				{
				setState(301);
				match(BOOL);
				}
				break;
			case IDENT:
				enterOuterAlt(_localctx, 6);
				{
				setState(302);
				match(IDENT);
				setState(312);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case LP:
					{
					setState(303);
					match(LP);
					setState(304);
					((AtomContext)_localctx).param = exprlist();
					setState(305);
					match(RP);
					}
					break;
				case LC:
					{
					setState(308); 
					_errHandler.sync(this);
					_la = _input.LA(1);
					do {
						{
						{
						setState(307);
						((AtomContext)_localctx).arr = indexarr();
						}
						}
						setState(310); 
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
				setState(314);
				match(LP);
				setState(315);
				expr();
				setState(316);
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
		"\u0004\u00015\u0141\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007\u0015"+
		"\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017\u0002\u0018\u0007\u0018"+
		"\u0002\u0019\u0007\u0019\u0002\u001a\u0007\u001a\u0002\u001b\u0007\u001b"+
		"\u0002\u001c\u0007\u001c\u0002\u001d\u0007\u001d\u0001\u0000\u0005\u0000"+
		">\b\u0000\n\u0000\f\u0000A\t\u0000\u0001\u0000\u0001\u0000\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0002\u0001\u0002\u0005\u0002N\b\u0002\n\u0002\f\u0002Q\t\u0002"+
		"\u0003\u0002S\b\u0002\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0003\u0005c\b\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0003\u0005"+
		"p\b\u0005\u0001\u0005\u0001\u0005\u0003\u0005t\b\u0005\u0001\u0005\u0001"+
		"\u0005\u0001\u0005\u0003\u0005y\b\u0005\u0001\u0005\u0001\u0005\u0001"+
		"\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001"+
		"\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0005\u0005\u0087\b\u0005\n"+
		"\u0005\f\u0005\u008a\t\u0005\u0001\u0005\u0003\u0005\u008d\b\u0005\u0001"+
		"\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001"+
		"\u0005\u0003\u0005\u0096\b\u0005\u0001\u0005\u0005\u0005\u0099\b\u0005"+
		"\n\u0005\f\u0005\u009c\t\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001"+
		"\u0005\u0005\u0005\u00a2\b\u0005\n\u0005\f\u0005\u00a5\t\u0005\u0001\u0005"+
		"\u0003\u0005\u00a8\b\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006"+
		"\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\b\u0001"+
		"\b\u0001\b\u0001\b\u0001\b\u0003\b\u00b8\b\b\u0001\t\u0001\t\u0001\t\u0005"+
		"\t\u00bd\b\t\n\t\f\t\u00c0\t\t\u0001\n\u0001\n\u0001\n\u0005\n\u00c5\b"+
		"\n\n\n\f\n\u00c8\t\n\u0003\n\u00ca\b\n\u0001\u000b\u0001\u000b\u0001\u000b"+
		"\u0001\f\u0001\f\u0004\f\u00d1\b\f\u000b\f\f\f\u00d2\u0003\f\u00d5\b\f"+
		"\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0003\r\u00dd\b\r\u0001"+
		"\u000e\u0001\u000e\u0005\u000e\u00e1\b\u000e\n\u000e\f\u000e\u00e4\t\u000e"+
		"\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u0010\u0001\u0010\u0005\u0010"+
		"\u00eb\b\u0010\n\u0010\f\u0010\u00ee\t\u0010\u0001\u0011\u0001\u0011\u0001"+
		"\u0011\u0001\u0012\u0001\u0012\u0005\u0012\u00f5\b\u0012\n\u0012\f\u0012"+
		"\u00f8\t\u0012\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0014\u0001\u0014"+
		"\u0005\u0014\u00ff\b\u0014\n\u0014\f\u0014\u0102\t\u0014\u0001\u0015\u0001"+
		"\u0015\u0001\u0015\u0001\u0016\u0001\u0016\u0005\u0016\u0109\b\u0016\n"+
		"\u0016\f\u0016\u010c\t\u0016\u0001\u0017\u0001\u0017\u0001\u0017\u0001"+
		"\u0018\u0001\u0018\u0005\u0018\u0113\b\u0018\n\u0018\f\u0018\u0116\t\u0018"+
		"\u0001\u0019\u0001\u0019\u0001\u0019\u0001\u001a\u0001\u001a\u0005\u001a"+
		"\u011d\b\u001a\n\u001a\f\u001a\u0120\t\u001a\u0001\u001b\u0001\u001b\u0001"+
		"\u001b\u0001\u001c\u0001\u001c\u0001\u001c\u0003\u001c\u0128\b\u001c\u0001"+
		"\u001d\u0001\u001d\u0001\u001d\u0001\u001d\u0001\u001d\u0001\u001d\u0001"+
		"\u001d\u0001\u001d\u0001\u001d\u0001\u001d\u0001\u001d\u0004\u001d\u0135"+
		"\b\u001d\u000b\u001d\f\u001d\u0136\u0003\u001d\u0139\b\u001d\u0001\u001d"+
		"\u0001\u001d\u0001\u001d\u0001\u001d\u0003\u001d\u013f\b\u001d\u0001\u001d"+
		"\u0000\u0000\u001e\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010\u0012\u0014"+
		"\u0016\u0018\u001a\u001c\u001e \"$&(*,.02468:\u0000\u0007\u0002\u0000"+
		"\u0006\f--\u0001\u0000\r\u0012\u0001\u0000\u0019\u001a\u0001\u0000\u001b"+
		"\u001e\u0001\u0000\u001f \u0002\u0000\u0013\u0013!\"\u0003\u0000\u0013"+
		"\u0013  #$\u014c\u0000?\u0001\u0000\u0000\u0000\u0002D\u0001\u0000\u0000"+
		"\u0000\u0004R\u0001\u0000\u0000\u0000\u0006T\u0001\u0000\u0000\u0000\b"+
		"X\u0001\u0000\u0000\u0000\n\u00a7\u0001\u0000\u0000\u0000\f\u00a9\u0001"+
		"\u0000\u0000\u0000\u000e\u00ad\u0001\u0000\u0000\u0000\u0010\u00b2\u0001"+
		"\u0000\u0000\u0000\u0012\u00be\u0001\u0000\u0000\u0000\u0014\u00c9\u0001"+
		"\u0000\u0000\u0000\u0016\u00cb\u0001\u0000\u0000\u0000\u0018\u00ce\u0001"+
		"\u0000\u0000\u0000\u001a\u00d6\u0001\u0000\u0000\u0000\u001c\u00de\u0001"+
		"\u0000\u0000\u0000\u001e\u00e5\u0001\u0000\u0000\u0000 \u00e8\u0001\u0000"+
		"\u0000\u0000\"\u00ef\u0001\u0000\u0000\u0000$\u00f2\u0001\u0000\u0000"+
		"\u0000&\u00f9\u0001\u0000\u0000\u0000(\u00fc\u0001\u0000\u0000\u0000*"+
		"\u0103\u0001\u0000\u0000\u0000,\u0106\u0001\u0000\u0000\u0000.\u010d\u0001"+
		"\u0000\u0000\u00000\u0110\u0001\u0000\u0000\u00002\u0117\u0001\u0000\u0000"+
		"\u00004\u011a\u0001\u0000\u0000\u00006\u0121\u0001\u0000\u0000\u00008"+
		"\u0127\u0001\u0000\u0000\u0000:\u013e\u0001\u0000\u0000\u0000<>\u0003"+
		"\u0002\u0001\u0000=<\u0001\u0000\u0000\u0000>A\u0001\u0000\u0000\u0000"+
		"?=\u0001\u0000\u0000\u0000?@\u0001\u0000\u0000\u0000@B\u0001\u0000\u0000"+
		"\u0000A?\u0001\u0000\u0000\u0000BC\u0005\u0000\u0000\u0001C\u0001\u0001"+
		"\u0000\u0000\u0000DE\u0003\u0018\f\u0000EF\u00053\u0000\u0000FG\u0005"+
		"%\u0000\u0000GH\u0003\u0004\u0002\u0000HI\u0005&\u0000\u0000IJ\u0003\n"+
		"\u0005\u0000J\u0003\u0001\u0000\u0000\u0000KO\u0003\u0006\u0003\u0000"+
		"LN\u0003\b\u0004\u0000ML\u0001\u0000\u0000\u0000NQ\u0001\u0000\u0000\u0000"+
		"OM\u0001\u0000\u0000\u0000OP\u0001\u0000\u0000\u0000PS\u0001\u0000\u0000"+
		"\u0000QO\u0001\u0000\u0000\u0000RK\u0001\u0000\u0000\u0000RS\u0001\u0000"+
		"\u0000\u0000S\u0005\u0001\u0000\u0000\u0000TU\u0003\u0018\f\u0000UV\u0005"+
		"3\u0000\u0000VW\u0003\u0012\t\u0000W\u0007\u0001\u0000\u0000\u0000XY\u0005"+
		"+\u0000\u0000YZ\u0003\u0006\u0003\u0000Z\t\u0001\u0000\u0000\u0000[\\"+
		"\u0005\u0001\u0000\u0000\\]\u0005%\u0000\u0000]^\u0003\u001a\r\u0000^"+
		"_\u0005&\u0000\u0000_b\u0003\n\u0005\u0000`a\u0005\u0002\u0000\u0000a"+
		"c\u0003\n\u0005\u0000b`\u0001\u0000\u0000\u0000bc\u0001\u0000\u0000\u0000"+
		"c\u00a8\u0001\u0000\u0000\u0000de\u0005\u0003\u0000\u0000ef\u0005%\u0000"+
		"\u0000fg\u0003\u001a\r\u0000gh\u0005&\u0000\u0000hi\u0003\n\u0005\u0000"+
		"i\u00a8\u0001\u0000\u0000\u0000jk\u0005\u0004\u0000\u0000ko\u0005%\u0000"+
		"\u0000lm\u0003\u0018\f\u0000mn\u0003\u000e\u0007\u0000np\u0001\u0000\u0000"+
		"\u0000ol\u0001\u0000\u0000\u0000op\u0001\u0000\u0000\u0000pq\u0001\u0000"+
		"\u0000\u0000qs\u0005,\u0000\u0000rt\u0003\u001a\r\u0000sr\u0001\u0000"+
		"\u0000\u0000st\u0001\u0000\u0000\u0000tu\u0001\u0000\u0000\u0000ux\u0005"+
		",\u0000\u0000vw\u00053\u0000\u0000wy\u0003\u0016\u000b\u0000xv\u0001\u0000"+
		"\u0000\u0000xy\u0001\u0000\u0000\u0000yz\u0001\u0000\u0000\u0000z{\u0005"+
		"&\u0000\u0000{\u00a8\u0003\n\u0005\u0000|}\u0005\u0005\u0000\u0000}~\u0003"+
		"\u001a\r\u0000~\u007f\u0005,\u0000\u0000\u007f\u00a8\u0001\u0000\u0000"+
		"\u0000\u0080\u008c\u00053\u0000\u0000\u0081\u0082\u0005%\u0000\u0000\u0082"+
		"\u0083\u0003\u0014\n\u0000\u0083\u0084\u0005&\u0000\u0000\u0084\u008d"+
		"\u0001\u0000\u0000\u0000\u0085\u0087\u0003\f\u0006\u0000\u0086\u0085\u0001"+
		"\u0000\u0000\u0000\u0087\u008a\u0001\u0000\u0000\u0000\u0088\u0086\u0001"+
		"\u0000\u0000\u0000\u0088\u0089\u0001\u0000\u0000\u0000\u0089\u008b\u0001"+
		"\u0000\u0000\u0000\u008a\u0088\u0001\u0000\u0000\u0000\u008b\u008d\u0003"+
		"\u0016\u000b\u0000\u008c\u0081\u0001\u0000\u0000\u0000\u008c\u0088\u0001"+
		"\u0000\u0000\u0000\u008d\u008e\u0001\u0000\u0000\u0000\u008e\u008f\u0005"+
		",\u0000\u0000\u008f\u00a8\u0001\u0000\u0000\u0000\u0090\u0091\u0003\u0018"+
		"\f\u0000\u0091\u0092\u00053\u0000\u0000\u0092\u0095\u0003\u0012\t\u0000"+
		"\u0093\u0094\u0005-\u0000\u0000\u0094\u0096\u0003\u001a\r\u0000\u0095"+
		"\u0093\u0001\u0000\u0000\u0000\u0095\u0096\u0001\u0000\u0000\u0000\u0096"+
		"\u009a\u0001\u0000\u0000\u0000\u0097\u0099\u0003\u0010\b\u0000\u0098\u0097"+
		"\u0001\u0000\u0000\u0000\u0099\u009c\u0001\u0000\u0000\u0000\u009a\u0098"+
		"\u0001\u0000\u0000\u0000\u009a\u009b\u0001\u0000\u0000\u0000\u009b\u009d"+
		"\u0001\u0000\u0000\u0000\u009c\u009a\u0001\u0000\u0000\u0000\u009d\u009e"+
		"\u0005,\u0000\u0000\u009e\u00a8\u0001\u0000\u0000\u0000\u009f\u00a3\u0005"+
		")\u0000\u0000\u00a0\u00a2\u0003\n\u0005\u0000\u00a1\u00a0\u0001\u0000"+
		"\u0000\u0000\u00a2\u00a5\u0001\u0000\u0000\u0000\u00a3\u00a1\u0001\u0000"+
		"\u0000\u0000\u00a3\u00a4\u0001\u0000\u0000\u0000\u00a4\u00a6\u0001\u0000"+
		"\u0000\u0000\u00a5\u00a3\u0001\u0000\u0000\u0000\u00a6\u00a8\u0005*\u0000"+
		"\u0000\u00a7[\u0001\u0000\u0000\u0000\u00a7d\u0001\u0000\u0000\u0000\u00a7"+
		"j\u0001\u0000\u0000\u0000\u00a7|\u0001\u0000\u0000\u0000\u00a7\u0080\u0001"+
		"\u0000\u0000\u0000\u00a7\u0090\u0001\u0000\u0000\u0000\u00a7\u009f\u0001"+
		"\u0000\u0000\u0000\u00a8\u000b\u0001\u0000\u0000\u0000\u00a9\u00aa\u0005"+
		"\'\u0000\u0000\u00aa\u00ab\u0003\u001a\r\u0000\u00ab\u00ac\u0005(\u0000"+
		"\u0000\u00ac\r\u0001\u0000\u0000\u0000\u00ad\u00ae\u00053\u0000\u0000"+
		"\u00ae\u00af\u0003\u0012\t\u0000\u00af\u00b0\u0005-\u0000\u0000\u00b0"+
		"\u00b1\u0003\u001a\r\u0000\u00b1\u000f\u0001\u0000\u0000\u0000\u00b2\u00b3"+
		"\u0005+\u0000\u0000\u00b3\u00b4\u00053\u0000\u0000\u00b4\u00b7\u0003\u0012"+
		"\t\u0000\u00b5\u00b6\u0005-\u0000\u0000\u00b6\u00b8\u0003\u001a\r\u0000"+
		"\u00b7\u00b5\u0001\u0000\u0000\u0000\u00b7\u00b8\u0001\u0000\u0000\u0000"+
		"\u00b8\u0011\u0001\u0000\u0000\u0000\u00b9\u00ba\u0005\'\u0000\u0000\u00ba"+
		"\u00bb\u00050\u0000\u0000\u00bb\u00bd\u0005(\u0000\u0000\u00bc\u00b9\u0001"+
		"\u0000\u0000\u0000\u00bd\u00c0\u0001\u0000\u0000\u0000\u00be\u00bc\u0001"+
		"\u0000\u0000\u0000\u00be\u00bf\u0001\u0000\u0000\u0000\u00bf\u0013\u0001"+
		"\u0000\u0000\u0000\u00c0\u00be\u0001\u0000\u0000\u0000\u00c1\u00c6\u0003"+
		"\u001a\r\u0000\u00c2\u00c3\u0005+\u0000\u0000\u00c3\u00c5\u0003\u001a"+
		"\r\u0000\u00c4\u00c2\u0001\u0000\u0000\u0000\u00c5\u00c8\u0001\u0000\u0000"+
		"\u0000\u00c6\u00c4\u0001\u0000\u0000\u0000\u00c6\u00c7\u0001\u0000\u0000"+
		"\u0000\u00c7\u00ca\u0001\u0000\u0000\u0000\u00c8\u00c6\u0001\u0000\u0000"+
		"\u0000\u00c9\u00c1\u0001\u0000\u0000\u0000\u00c9\u00ca\u0001\u0000\u0000"+
		"\u0000\u00ca\u0015\u0001\u0000\u0000\u0000\u00cb\u00cc\u0007\u0000\u0000"+
		"\u0000\u00cc\u00cd\u0003\u001a\r\u0000\u00cd\u0017\u0001\u0000\u0000\u0000"+
		"\u00ce\u00d4\u0007\u0001\u0000\u0000\u00cf\u00d1\u0005\u0013\u0000\u0000"+
		"\u00d0\u00cf\u0001\u0000\u0000\u0000\u00d1\u00d2\u0001\u0000\u0000\u0000"+
		"\u00d2\u00d0\u0001\u0000\u0000\u0000\u00d2\u00d3\u0001\u0000\u0000\u0000"+
		"\u00d3\u00d5\u0001\u0000\u0000\u0000\u00d4\u00d0\u0001\u0000\u0000\u0000"+
		"\u00d4\u00d5\u0001\u0000\u0000\u0000\u00d5\u0019\u0001\u0000\u0000\u0000"+
		"\u00d6\u00dc\u0003\u001c\u000e\u0000\u00d7\u00d8\u0005\u0014\u0000\u0000"+
		"\u00d8\u00d9\u0003\u001a\r\u0000\u00d9\u00da\u0005\u0015\u0000\u0000\u00da"+
		"\u00db\u0003\u001a\r\u0000\u00db\u00dd\u0001\u0000\u0000\u0000\u00dc\u00d7"+
		"\u0001\u0000\u0000\u0000\u00dc\u00dd\u0001\u0000\u0000\u0000\u00dd\u001b"+
		"\u0001\u0000\u0000\u0000\u00de\u00e2\u0003 \u0010\u0000\u00df\u00e1\u0003"+
		"\u001e\u000f\u0000\u00e0\u00df\u0001\u0000\u0000\u0000\u00e1\u00e4\u0001"+
		"\u0000\u0000\u0000\u00e2\u00e0\u0001\u0000\u0000\u0000\u00e2\u00e3\u0001"+
		"\u0000\u0000\u0000\u00e3\u001d\u0001\u0000\u0000\u0000\u00e4\u00e2\u0001"+
		"\u0000\u0000\u0000\u00e5\u00e6\u0005\u0016\u0000\u0000\u00e6\u00e7\u0003"+
		" \u0010\u0000\u00e7\u001f\u0001\u0000\u0000\u0000\u00e8\u00ec\u0003$\u0012"+
		"\u0000\u00e9\u00eb\u0003\"\u0011\u0000\u00ea\u00e9\u0001\u0000\u0000\u0000"+
		"\u00eb\u00ee\u0001\u0000\u0000\u0000\u00ec\u00ea\u0001\u0000\u0000\u0000"+
		"\u00ec\u00ed\u0001\u0000\u0000\u0000\u00ed!\u0001\u0000\u0000\u0000\u00ee"+
		"\u00ec\u0001\u0000\u0000\u0000\u00ef\u00f0\u0005\u0017\u0000\u0000\u00f0"+
		"\u00f1\u0003$\u0012\u0000\u00f1#\u0001\u0000\u0000\u0000\u00f2\u00f6\u0003"+
		"(\u0014\u0000\u00f3\u00f5\u0003&\u0013\u0000\u00f4\u00f3\u0001\u0000\u0000"+
		"\u0000\u00f5\u00f8\u0001\u0000\u0000\u0000\u00f6\u00f4\u0001\u0000\u0000"+
		"\u0000\u00f6\u00f7\u0001\u0000\u0000\u0000\u00f7%\u0001\u0000\u0000\u0000"+
		"\u00f8\u00f6\u0001\u0000\u0000\u0000\u00f9\u00fa\u0005\u0018\u0000\u0000"+
		"\u00fa\u00fb\u0003(\u0014\u0000\u00fb\'\u0001\u0000\u0000\u0000\u00fc"+
		"\u0100\u0003,\u0016\u0000\u00fd\u00ff\u0003*\u0015\u0000\u00fe\u00fd\u0001"+
		"\u0000\u0000\u0000\u00ff\u0102\u0001\u0000\u0000\u0000\u0100\u00fe\u0001"+
		"\u0000\u0000\u0000\u0100\u0101\u0001\u0000\u0000\u0000\u0101)\u0001\u0000"+
		"\u0000\u0000\u0102\u0100\u0001\u0000\u0000\u0000\u0103\u0104\u0007\u0002"+
		"\u0000\u0000\u0104\u0105\u0003,\u0016\u0000\u0105+\u0001\u0000\u0000\u0000"+
		"\u0106\u010a\u00030\u0018\u0000\u0107\u0109\u0003.\u0017\u0000\u0108\u0107"+
		"\u0001\u0000\u0000\u0000\u0109\u010c\u0001\u0000\u0000\u0000\u010a\u0108"+
		"\u0001\u0000\u0000\u0000\u010a\u010b\u0001\u0000\u0000\u0000\u010b-\u0001"+
		"\u0000\u0000\u0000\u010c\u010a\u0001\u0000\u0000\u0000\u010d\u010e\u0007"+
		"\u0003\u0000\u0000\u010e\u010f\u00030\u0018\u0000\u010f/\u0001\u0000\u0000"+
		"\u0000\u0110\u0114\u00034\u001a\u0000\u0111\u0113\u00032\u0019\u0000\u0112"+
		"\u0111\u0001\u0000\u0000\u0000\u0113\u0116\u0001\u0000\u0000\u0000\u0114"+
		"\u0112\u0001\u0000\u0000\u0000\u0114\u0115\u0001\u0000\u0000\u0000\u0115"+
		"1\u0001\u0000\u0000\u0000\u0116\u0114\u0001\u0000\u0000\u0000\u0117\u0118"+
		"\u0007\u0004\u0000\u0000\u0118\u0119\u00034\u001a\u0000\u01193\u0001\u0000"+
		"\u0000\u0000\u011a\u011e\u00038\u001c\u0000\u011b\u011d\u00036\u001b\u0000"+
		"\u011c\u011b\u0001\u0000\u0000\u0000\u011d\u0120\u0001\u0000\u0000\u0000"+
		"\u011e\u011c\u0001\u0000\u0000\u0000\u011e\u011f\u0001\u0000\u0000\u0000"+
		"\u011f5\u0001\u0000\u0000\u0000\u0120\u011e\u0001\u0000\u0000\u0000\u0121"+
		"\u0122\u0007\u0005\u0000\u0000\u0122\u0123\u00038\u001c\u0000\u01237\u0001"+
		"\u0000\u0000\u0000\u0124\u0125\u0007\u0006\u0000\u0000\u0125\u0128\u0003"+
		"8\u001c\u0000\u0126\u0128\u0003:\u001d\u0000\u0127\u0124\u0001\u0000\u0000"+
		"\u0000\u0127\u0126\u0001\u0000\u0000\u0000\u01289\u0001\u0000\u0000\u0000"+
		"\u0129\u013f\u00050\u0000\u0000\u012a\u013f\u00051\u0000\u0000\u012b\u013f"+
		"\u00055\u0000\u0000\u012c\u013f\u00054\u0000\u0000\u012d\u013f\u00052"+
		"\u0000\u0000\u012e\u0138\u00053\u0000\u0000\u012f\u0130\u0005%\u0000\u0000"+
		"\u0130\u0131\u0003\u0014\n\u0000\u0131\u0132\u0005&\u0000\u0000\u0132"+
		"\u0139\u0001\u0000\u0000\u0000\u0133\u0135\u0003\f\u0006\u0000\u0134\u0133"+
		"\u0001\u0000\u0000\u0000\u0135\u0136\u0001\u0000\u0000\u0000\u0136\u0134"+
		"\u0001\u0000\u0000\u0000\u0136\u0137\u0001\u0000\u0000\u0000\u0137\u0139"+
		"\u0001\u0000\u0000\u0000\u0138\u012f\u0001\u0000\u0000\u0000\u0138\u0134"+
		"\u0001\u0000\u0000\u0000\u0138\u0139\u0001\u0000\u0000\u0000\u0139\u013f"+
		"\u0001\u0000\u0000\u0000\u013a\u013b\u0005%\u0000\u0000\u013b\u013c\u0003"+
		"\u001a\r\u0000\u013c\u013d\u0005&\u0000\u0000\u013d\u013f\u0001\u0000"+
		"\u0000\u0000\u013e\u0129\u0001\u0000\u0000\u0000\u013e\u012a\u0001\u0000"+
		"\u0000\u0000\u013e\u012b\u0001\u0000\u0000\u0000\u013e\u012c\u0001\u0000"+
		"\u0000\u0000\u013e\u012d\u0001\u0000\u0000\u0000\u013e\u012e\u0001\u0000"+
		"\u0000\u0000\u013e\u013a\u0001\u0000\u0000\u0000\u013f;\u0001\u0000\u0000"+
		"\u0000\u001f?ORbosx\u0088\u008c\u0095\u009a\u00a3\u00a7\u00b7\u00be\u00c6"+
		"\u00c9\u00d2\u00d4\u00dc\u00e2\u00ec\u00f6\u0100\u010a\u0114\u011e\u0127"+
		"\u0136\u0138\u013e";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}