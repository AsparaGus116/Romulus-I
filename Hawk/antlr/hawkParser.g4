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
    : '(' expr ')' # parenExpr
    | name=expr op=('++'|'--') #postfixExpr
    | name=ID '(' (ID (',' ID)*)? ')' #funcCallExpr
    | left=expr '['num=number']' #subscriptExpr
    | expr '.' ID #accessExpr
    | expr '->' ID #ptrAccessExpr // END PRECEDENCE 1
    | <assoc=right> op=('++'|'--') name=expr #prefixExpr
    | <assoc=right> op=('+'|'-') name=expr #unaryExpr
    | <assoc=right> left=expr op=('!'|'~') right=expr #notExpr
    | <assoc=right> '&' expr #addrExpr 
    | <assoc=right> '*'expr #derefExpr // END PRECEDENCE 2
    | left=expr op=('*'|'/'|'%') right=expr #mulDivExpr // END PRECEDENCE 3
    | left=expr op=('+'|'-') right=expr #addSubExpr // END PRECEDENCE 4
    | left=expr op=('<<'|'>>') right=expr #shiftExpr // END PRECEDENCE 5
    | left=expr op=('<'|'<='|'>'|'>=') right=expr #relExpr // END PRECEDENCE 6
    | left=expr op=('=='|'!=') right=expr #eqExpr // END PRECEDENCE 7
    | left=expr op='&' right=expr #bitAndExpr // END PRECEDENCE 8
    | left=expr op='^' right=expr #xorExpr // END PRECEDENCE 9
    | left=expr op='|' right=expr #bitOrExpr // END PRECEDENCE 10
    | left=expr op='&&' right=expr #lAndExpr // END PRECEDENCE 11
    | left=expr op='||' right=expr #lOrExpr // END PRECEDENCE 12
    | <assoc=right> expr '?' expr ':' expr #ternaryExpr // END PRECEDENCE 13
    | <assoc=right> expr cond expr #relationalExpr // END PRECEDENCE 14
    | type? ID('[' number? ']')? #varExpr
    | '{' (expr (',' expr)*)? '}' #braceExpr
    | number #numExpr
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
