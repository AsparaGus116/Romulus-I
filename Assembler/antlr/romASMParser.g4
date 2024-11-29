parser grammar romASMParser;
options { tokenVocab=romASMLexer; }

program
    : expr* EOF
    ;
    
expr
    : MOV REG ','? REG
    | MOV LABELID ','? REG
    | MOV IMM ','? REG
	| MOV CHAR ','? REG
    | MOV HEX ','? REG
    | STR REG ','? REG
    | LDA REG ','? REG
    | OR REG ','? REG (','? REG)?
    | INV REG (','? REG)?
    | AND REG ','? REG (','? REG)?
    | XOR REG ','? REG (','? REG)?
    | ADD REG ','? REG (','? REG)?
    | SUB REG ','? REG (','? REG)?
    | NOT REG (','? REG)?
    | SHR REG (','? REG)?
    | SHL REG (','? REG)?
    | PUSH REG
    | CALL REG
    | POP REG
    | RET
    | JMP REG
    | JEZ REG ','? REG
    | JNZ REG ','? REG
    | JGZ REG ','? REG
    | JLZ REG ','? REG
    | COMMENT
    | LABEL
	| NOP
    ;