grammar pascal;

start     : 'program' ID SEMI 'var' decl_list main_code EOF ;

decl_list : decl | decl decl_list ;
decl      : var_list COLON 'integer' SEMI ;
var_list  : ID | ID COMMA var_list ;

main_code : code_block DOT ;
code_block: statement | 'begin' st_list 'end' ;
st_list   : statement SEMI | statement SEMI st_list ;
          
statement : assign | branch | in | out | loop;

assign    : ID ASSIGN expr ;
in        : 'readln' LPAREN expr RPAREN;
out       : 'writeln' LPAREN expr RPAREN ;
branch    : 'if' relation 'then' code_block ;
expr      : NUMBER | ID | STRING ;
loop      : 'repeat' expr 'until' relation ;
relation  : expr LT expr | expr LEQ expr | expr EQ expr 
          | expr NEQ expr | expr GEQ expr | expr GT expr | expr NEQ expr ;


PLUS      : '+' ;
MINUS     : '-' ;
STAR      : '*' ;
SLASH     : '/' ;
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
ID        : [a-z]+ ;
NUMBER    : [0-9]+ ;
STRING    : '\'' ~[']* '\'' ;

R_COMMENT : LPARENCOM .*? RPARENCOM -> skip ;     // .*? matches anything until the first */
C_COMMENT : LCURLY .*? RCURLY -> skip ;       // .*? matches anything until the first }
LINE_COMMENT : '//' ~[\r\n]* -> skip ;  // ~[\r\n]* matches anything but \r and \n
WS        : [ \n\t\r]+ -> skip;
ErrorChar : DOT ;
