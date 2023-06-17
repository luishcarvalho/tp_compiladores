%{ 

/*codigo colocado aqui aparece no arquivo gerado pelo flex*/ 


%} 

/* This tells flex to read only one input file */ 
%option noyywrap 

/* definicoes regulares */ 

delim		[\t] 
ws		{delim}+ 

inteiro		"-"?{digitos}+
digitos		[0-9]

%% 

{ws}		{/*nenhuma acao e nenhum retorno*/} 

"\n" {printf("%s", yytext); return('\n');}
" " {printf("%s", yytext); return(ESPACO);}

"pt" {printf("%s", yytext); return(PRINTF);}
"sc" {printf("%s", yytext); return(SCANF);}
"if" {printf("%s", yytext); return(IF);}
"el" {printf("%s", yytext); return(ELSE);}
"fr" {printf("%s", yytext); return(FOR);}
"wh" {printf("%s", yytext); return(WHILE);}
"fn" {printf("%s", yytext); return(FUNCTION);}
"swc" {printf("%s", yytext); return(SWITCH);}
"cs" {printf("%s", yytext); return(CASE);}
"nil" {printf("%s", yytext); return(NULL);}
"df" {printf("%s", yytext); return(DEFAULT);}

"]" {printf("%s", yytext); return(FIMBLOCO);} 

"i" {printf("%s", yytext); printf("%s", yytext); return(INT);}//OK
"f" {printf("%s", yytext); printf("%s", yytext); return(FLOAT);}
"c" {printf("%s", yytext); printf("%s", yytext); return(CHAR);}
"s" {printf("%s", yytext); printf("%s", yytext); return(STRING);}
"l" {printf("%s", yytext); printf("%s", yytext); return(LIST);}

"+" {printf("%s", yytext); printf("%s", yytext); return(PLUS);}
"-" {printf("%s", yytext); printf("%s", yytext); return(MINUS);}
"*" {printf("%s", yytext); printf("%s", yytext); return(MULT);}
"**" {printf("%s", yytext); printf("%s", yytext); return(EXP);}
"/" {printf("%s", yytext); printf("%s", yytext); return(DIV);}
"//" {printf("%s", yytext); printf("%s", yytext); return(DIVINTEIRA);}
"%" {printf("%s", yytext); printf("%s", yytext); return(DIVRESTO);}  

">" {printf("%s", yytext); return(GRTTHAN);}
">=" {printf("%s", yytext); return(GRTEQ);}
"<" {printf("%s", yytext); return(LSSTHAN);}
"<=" {printf("%s", yytext); return(LSSEQ);}
"==" {printf("%s", yytext); return(EQ);}

"=" {printf("%s", yytext); return(ATR);}
"-=" {printf("%s", yytext); return(MINATR);}
"+=" {printf("%s", yytext); return(PLSATR);} 

"~" {printf("%s", yytext); return('~');} 
"&" {printf("%s", yytext); return('&');}
"|" {printf("%s", yytext); return('|');}
"@" {printf("%s", yytext); return('@');}
"!" {printf("%s", yytext); return('!');}

"br" {printf("%s", yytext); return(BREAK);}
"rt" {printf("%s", yytext); return(RETURN);}
"ct" {printf("%s", yytext); return(CONTINUE);}

[a-z][a-z0-9]?[a-z0-9]?  {printf("%s", yytext); return(ID);} 
[-]?[0-9]+  {printf("%s", yytext); return(NINTEIRO);} 
({inteiro}\.{digitos}+)|({inteiro}(\.{digitos}+)?"e"{inteiro})  {printf("%s", yytext); return(NDECIMAL);}
\"([^\"]+)\" {printf("%s", yytext); return(STRING)}  

"," {printf("%s", yytext); return(',');}
";" {printf("%s", yytext); return(';');}
":" {printf("%s", yytext); return(':');}
"{" {printf("%s", yytext); return('{');}
"}" {printf("%s", yytext); return('}');}
"(" {printf("%s", yytext); return('(');}
")" {printf("%s", yytext); return(')');}
"'" {printf("%s", yytext); return(''');}

%% 


/*codigo em C. Foi criado o main, mas podem ser criadas outras funcoes aqui.*/ 

int main(void) 
{ 
    /* Call the lexer, then quit. */ 
    yylex(); 
    printf("%s", yytext); return 0; 
}

