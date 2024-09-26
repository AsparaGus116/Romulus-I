// DELETE THIS CONTENT IF YOU PUT COMBINED GRAMMAR IN Parser TAB
lexer grammar romASMLexer;

MOV : 'mov'|'MOV' ;
STR : 'str' | 'STR' ;
LDA : 'lda' | 'LDA' ;
OR : 'or' | 'OR' ;
INV : 'inv' | 'INV' ;
AND : 'and' | 'AND' ;
XOR : 'xor' | 'XOR' ;
ADD : 'add' | 'ADD' ;
SUB : 'sub' | 'SUB' ;
NOT : 'not' | 'NOT' ;
SHR : 'shr' | 'SHR' ;
SHL : 'shl' | 'SHL' ;
PUSH : 'push' | 'PUSH' ;
CALL : 'call' | 'CALL' ;
POP : 'pop' | 'POP' ;
RET : 'ret' | 'RET' ;
JMP : 'jmp' | 'JMP' ;
JEZ : 'jez' | 'JEZ' ;
JNZ : 'jnz' | 'JNZ' ;
JGZ : 'jgz' | 'JGZ' ;
JLZ : 'jlz' | 'JLZ' ;

COMMA : ',' ;

COMMENT : ('//'|'#')(.)*?('\n'|EOF) -> skip;

IMM : [0-9]+ ;
HEX : '0x'[0-9a-fA-F]+ ;
REG : ('r'|'R')([0-9]+) ;
WS: [ \t\n\r\f]+ -> skip ;