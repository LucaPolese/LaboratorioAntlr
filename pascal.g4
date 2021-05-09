grammar pascal;

start     : 'program' ID SEMI 'var' decl_list main_code EOF ;

decl_list : decl | decl decl_list ;
decl      : id_list COLON 'integer' SEMI ;
id_list   : ID | ID COMMA id_list ;

main_code : 'begin' st_list 'end' DOT ;
code_block: 'begin' st_list 'end' | statement ;
st_list   : statement SEMI | statement SEMI st_list ;
          
statement : assign | branch | in | out | loop ;

expr      : NUMBER | ID | expr (PLUS|MINUS|TIMES|DIVISION|MOD) expr | LPAREN expr RPAREN;

relation  : expr LT expr | expr LEQ expr | expr EQ expr | expr NEQ expr | expr GEQ expr | expr GT expr | LPAREN expr RPAREN ;

guard     : relation | NOT guard | guard AND guard | guard OR guard | LPAREN guard RPAREN ;

assign    : ID ASSIGN expr ;
in        : 'readln' LPAREN ID RPAREN;
out       : 'writeln' LPAREN expr RPAREN | 'writeln' LPAREN STRING RPAREN;
branch    : 'if' relation 'then' code_block | 'if' relation 'then' code_block 'else' code_block;
loop      : 'repeat' st_list 'until' relation ;

PLUS      : '+' ;
MINUS     : '-' ;
TIMES     : '*' ;
DIVISION  : '/' ;
MOD       : '%' ;
ASSIGN    : ':=' ;
COMMA     : ',' ;
SEMI      : ';' ;
COLON     : ':' ;
EQ        : '=' ;
LT        : '<' ;
LEQ       : '<=' ;
GT        : '>' ;
GEQ       : '>=' ;
NEQ       : '<>' ;
LPAREN    : '(' ;
RPAREN    : ')' ;
LPARENCOM : '(*' ;
RPARENCOM : '*)' ;
LBRACK    : '[' ;
RBRACK    : ']' ;
DOT       : '.' ;
LCURLY    : '{' ;
RCURLY    : '}' ;
AND       : 'and' ;
OR        : 'or' ;
NOT       : 'not' ;
ID        : [a-z]+ ;
NUMBER    : [0-9]+ ;
STRING    : '\'' .*? '\'' ;

R_COMMENT : LPARENCOM .*? RPARENCOM -> skip ;     // .*? matches anything until the first *)
C_COMMENT : LCURLY .*? RCURLY -> skip ;       // .*? matches anything until the first }
LINE_COMMENT : '//' ~[\r\n]* -> skip ;  // ~[\r\n]* matches anything but \r and \n
WS        : [ \n\t\r]+ -> skip;
ErrorChar : DOT ;
