lexer grammar hawkLexer;

// type specifiers
KBOOL : 'bool';
KINT : 'int';
KCHAR : 'char';
KVOID : 'void';

// Arithmetic / logic tokens
KADD : '+';
KSUB : '-';
KMUL : '*';
KDIV : '/';
KMOD : '%';
KBAND : '&';
KBOR : '|';
KBNOT : '~';
KNOT : '!';
KXOR : '^';
KOR : '||';
KAND : '&&';
KSHL : '<<';
KSHR : '>>';

// Braces, brackets, parentheses
LPAREN : '(';
RPAREN : ')';
LBRACKET : '[';
RBRACKET : ']';
LBRACE : '{';
RBRACE : '}';

// Assignment tokens
KASSIGN : '=';
KADDASSIGN : '+=';
KSUBASSIGN : '-=';
KMULASSIGN : '*=';
KDIVASSIGN : '/=';
KMODASSIGN : '%=';
KANDASSIGN : '&=';
KORASSIGN : '|=';
KXORASSIGN : '^=';
KSHLASSIGN : '<<=';
KSHRASSIGN : '>>=';

KQUESTION : '?';
KCOLON : ':';

// Conditional tokens
KEQ : '==';
KNE : '!=';
KG : '>';
KL : '<';
KGE : '>=';
KLE : '<=';

KINC : '++';
KDEC : '--';

KSTATIC : 'static';
KCONST : 'const';

KSTRUCT : 'struct';

KIF : 'if';
KELSE : 'else';

KWHILE : 'while';
KDO : 'do';

KFOR : 'for';

KTRUE : 'true';
KFALSE : 'false';

COMMA : ',';
SEMICOLON : ';';
DOT : '.';
ARROW : '->';

ID : [a-zA-Z_][a-zA-Z0-9_]*;
CHAR : ['][\\]?(.)['] ;
INT : [0-9]+;
HEX : '0x'[0-9A-Fa-f]+;
BIN : '0b'[01]+;

COMMENT : '//' ~[\n\r]* -> skip ;
BLOCKCOMMENT : '/*'(.|WS)*?'*/' -> skip;
WS: [ \t\n\r\f]+ -> skip ;