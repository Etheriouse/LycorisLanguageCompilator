grammar lycoris;

prog: definition* EOF;

definition: type IDENT LP paramfunction RP instruction;

paramfunction: (t1=paramun tn=mulparam*)?;

paramun: type IDENT staticarr;

mulparam: (COMMA tn=paramun);

instruction:
	'if' LP ifcond = expr RP ifblock = instruction (
		'else' elseblock = instruction
	)?
	| 'while' LP whilecond = expr RP whileblock = instruction
	| 'for' LP (tinit = type dinit = declaration)? SEMICOLON (
		forcond = expr
	)? SEMICOLON (aftername = IDENT after = affectation)? RP forblock = instruction
	| 'return' ret = expr SEMICOLON
	| namec = IDENT (
		LP parameter = exprlist RP
		| indexarr* aff = affectation
	) SEMICOLON
	| type var = IDENT sarr = staticarr (ASSIGN value = expr)? declaration* SEMICOLON
	| LA block = instruction* RA;

indexarr: (LC expr RC);

declaration: (
		COMMA var = IDENT sarr = staticarr (ASSIGN value = expr)?
	);

staticarr: (LC INT RC)*;

exprlist: (expr (COMMA expr)*)?;

affectation: op=( ASSIGN | '+=' | '-=' | '*=' | '/=' | '&=' | '<>=' | '|=') assign = expr;

type:
	raw = ('int' | 'float' | 'string' | 'char' | 'bool' | 'void') (
		('*')+
	)?;

expr: a=or ('?' b=expr ':' c=expr)?;

or: a = xor_ b = mor_*;

mor_: (op = '||' b = xor_);

xor_: a = and_ b = mxor_*;

mxor_: (op = '<>' b = and_);

and_: a = equal b = mand_*;

mand_: (op = '&&' b = equal);

equal: a = comparaison b = mequal*;

mequal: (op = ('==' | '!=') b = comparaison);

comparaison: a = addsub b = mcomparaison*;

mcomparaison: (op = ('<' | '>' | '<=' | '>=') b = addsub);

addsub: a = muldivmod b = maddsub*;

maddsub: (op = ( '+' | '-') b = muldivmod);

muldivmod: a = unary b = mmuldivmod*;

mmuldivmod: (op = ('*' | '/' | '%') b = unary);

unary: op = ( '*' | '&' | '-' | '!') unary | a = atom;

atom:
	INT
	| FLOAT
	| STRING
	| CHAR
	| BOOL
	| IDENT ( LP param=exprlist RP | arr=indexarr+)?
	| LP expr RP;

LP: '(';
RP: ')';

LC: '[';
RC: ']';

LA: '{';
RA: '}';

COMMA: ',';
SEMICOLON: ';';

ASSIGN: '=';

NEWLINE: [\r\n]+ -> skip;
WS: [ \t]+ -> skip;
INT: [0-9]+;
FLOAT: [0-9]* '.' [0-9]+;
BOOL: 'true' | 'false';
IDENT: [a-zA-Z_][a-zA-Z0-9_]*;
CHAR: '\'' ( ~['\\] | '\\' .) '\'';
STRING: '"' (~["\\] | '\\' .)* '"';