grammar pascal;

start     : 'program' ID SEMI 'var' decl_list main_code EOF ;

decl_list : decl | decl decl_list ;
decl      : var_list COLON 'integer' SEMI ;
var_list  : ID | ID COMMA var_list ;

main_code : code_block DOT ;
code_block: 'begin' st_list 'end' ;
st_list   : statement | statement SEMI st_list ;
          
statement : sopen | sclose ;
sclose    : |assign | closebranch | code_block | in | out | loop ;
sopen     : openbranch;

expr      : arith_expr | bool_expr | STRING ;

arith_expr: sum ;
sum       : prod | prod (PLUS | MINUS) sum ;
prod      : sign | sign (TIMES | DIVISION | MOD) prod ;
sign      : value | (PLUS | MINUS) sign ;
value     : NUMBER | ID | LPAREN arith_expr RPAREN ;

bool_expr : or_oper ;
or_oper   : and_oper | and_oper 'or' or_oper ;
and_oper  : not_oper | not_oper 'and' and_oper ;
not_oper  : bvalue | 'not' bvalue ;
bvalue: relation | LPAREN bool_expr RPAREN ;
relation  : arith_expr LT arith_expr | arith_expr LEQ arith_expr | arith_expr EQ arith_expr | arith_expr NEQ arith_expr | arith_expr GEQ arith_expr | arith_expr GT arith_expr ;


assign    : ID ASSIGN expr ;
in        : 'readln' LPAREN ID RPAREN;
out       : 'writeln' LPAREN expr RPAREN ;
branch    : 'if' bool_expr 'then' code_block ;
openbranch: 'if' bool_expr 'then' sopen | 'if' bool_expr 'then' sclose 'else' sopen ;
closebranch: 'if' bool_expr 'then' sclose | 'if' bool_expr 'then' sclose 'else' sclose ;
loop      : 'repeat' st_list 'until' bool_expr ;


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
ID        : [a-z]+ ;
NUMBER    : [0-9]+ ;
STRING    : '\'' ~[']* '\'' ;

R_COMMENT : LPARENCOM .*? RPARENCOM -> skip ;     // .*? matches anything until the first *)
C_COMMENT : LCURLY .*? RCURLY -> skip ;       // .*? matches anything until the first }
LINE_COMMENT : '//' ~[\r\n]* -> skip ;  // ~[\r\n]* matches anything but \r and \n
WS        : [ \n\t\r]+ -> skip;
ErrorChar : DOT ;
