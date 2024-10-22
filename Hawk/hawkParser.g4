parser grammar hawkParser;
options { tokenVocab=hawkLexer; }

program
    : stmt+ EOF
    ;

type
    : KBOOL '*'*
    | KINT '*'*
    | KCHAR '*'*
    | KVOID '*'*
    ;

op
    :  KADD
    |  KSUB
    |  KMUL
    |  KDIV
    |  KMOD
    |  KBAND
    |  KBOR
    |  KBNOT
    |  KNOT
    |  KXOR
    |  KOR
    |  KAND
    |  KSHL
    |  KSHR
    ;

assignOp
    : KASSIGN
    | KADDASSIGN
    | KSUBASSIGN
    | KMULASSIGN
    | KDIVASSIGN
    | KMODASSIGN
    | KANDASSIGN
    | KORASSIGN
    | KNOTASSIGN
    | KXORASSIGN
    | KSHLASSIGN
    | KSHRASSIGN
    ;

number
    : INT
    | HEX
    | BIN
    ;

cond
    : KEQ
    | KNE
    | KG
    | KL
    | KGE
    | KLE
    ;

stmt
    : functionStmt
    | ifStmt
    | whileStmt
    | doWhileStmt
    | forRangeStmt
    | forEachStmt
    | struct
    | trueStmt ';'
    ;

trueStmt
    : KSTATIC? KCONST? expr assignOp expr
    | ID (KINC | KDEC)
    | KCONST? type ret=ID '(' (KCONST? type ID (',' KCONST? type ID)*)? ')'
    | (KINC | KDEC) ID
    | expr
    ;

expr
    : expr op expr #arithmeticExpr
    | expr cond expr #relationalExpr
    | expr '?' expr ':' expr #ternaryExpr
    | '*'expr #derefExpr
    | '(' expr ')' # parenExpr
    | type? ID('[' number? ']')? #varExpr
    | number #numExpr
    | '&' expr #addrExpr
    | expr '.' ID #accessExpr
    | expr '->' ID #ptrAccessExpr
    | '{' (expr (',' expr)*)? '}' #braceExpr
    ;

functionStmt
    : KCONST? type ret=ID '(' (KCONST? type ID (',' KCONST? type ID)*)? ')'
    '{' stmt* '}'
    ;

ifStmt
    : ifBlock elifBlock* elseBlock?
    ;

ifBlock
    : KIF '(' expr ')' '{' stmt* '}'
    | KIF '(' expr ')' stmt
    ;

elifBlock
    : KELSE KIF '(' expr ')' '{' stmt* '}'
    | KELSE KIF '(' expr ')' stmt
    ;

elseBlock
    : KELSE '{' stmt* '}'
    | KELSE stmt
    ;

whileStmt
    : KWHILE '(' expr ')' '{' stmt* '}'
    ;

forRangeStmt
    : KFOR '(' init=trueStmt ';' test=expr ';' inc=trueStmt ')'
    '{' stmt* '}'
    ;

forEachStmt
    : KFOR '(' KCONST? type it=ID ':' var=expr ')' 
    '{' stmt* '}'
    ;

doWhileStmt
    : KDO '{' stmt* '}' KWHILE '(' expr ')' ';'
    ;

struct
    : KSTRUCT ID '{' stmt* '}' ';'
    ;
