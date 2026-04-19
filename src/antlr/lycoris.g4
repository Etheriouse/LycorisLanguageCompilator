grammar lycoris;

prog: ( expr SEMICOLON )* EOF;

// instruction: 
//     'if' |
//     'while' |
//     'for' |
//     ;

expr: a=xor_ b=mor_*;

mor_: (op='||' b=xor_);

xor_: a=and_ b=mxor_*;

mxor_: (op='<>' b=and_);

and_: a=equal b=mand_*;

mand_: (op='&&' b=equal);

equal: a=comparaison b=mequal*;

mequal: (op=('==' | '!=') b=comparaison);

comparaison: a=addsub b=mcomparaison*;

mcomparaison: (op=('<' | '>' | '<=' | '>=') b=addsub);

addsub: a=muldivmod b=maddsub*;

maddsub: (op=( '+' | '-' ) b=muldivmod);

muldivmod: a=unary b=mmuldivmod*;

mmuldivmod: (op=('*' | '/' | '%') b=unary);

unary: op=( '*' | '&' | '-' | '!') unary | a=atom;


atom:
	INT
	| FLOAT
	| STRING
	| CHAR
	| BOOL
	| IDENT ( LP (expr (COMMA expr)*)? RP | LC expr RC)?
    | LP expr RP
    ;

LP: '(';
RP: ')';

LC: '[';
RC: ']';

LA: '{';
RA: '}';

COMMA: ',';
SEMICOLON: ';';

NEWLINE: [\r\n]+ -> skip;
WS: [ \t]+ -> skip;
INT: [0-9]+;
FLOAT: [0-9]* '.' [0-9]+;
BOOL: 'true' | 'false';
IDENT: [a-zA-Z_][a-zA-Z0-9_]*;
CHAR: '\'' ( ~['\\] | '\\' .) '\'';
STRING: '"' (~["\\] | '\\' .)* '"';