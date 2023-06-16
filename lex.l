%{ 

/*codigo colocado aqui aparece no arquivo gerado pelo flex*/ 


%} 

/* This tells flex to read only one input file */ 
%option noyywrap 

/* definicoes regulares */ 

delim		[ \t\n]
ws		{delim}+  
letra		[a-z]
digitos		[0-9]
ascii		[(-~ !#$%&]
char		\'{ascii}
string		\"{ascii}+
virgula		[","]
inteiro		"-"?{digitos}+
float		({inteiro}\.{digitos}+)|({inteiro}(\.{digitos}+)?"e"{inteiro})
list		(({inteiro}|{float}|{char}|{string}|{identificador}){virgula})+({inteiro}|{float}|{char}|{string}|{identificador})
identificador	{letra}[0-9a-z]{0,2} 

%% 

{ws}  {/*nenhuma acao e nenhum retorno*/} 
/*???*/ ws {return(DELIM);}  

"pt" {return(PRINTF);}
"sc" {return(SCANF);}
"if" {return(IF);}
"el" {return(ELSE);}
"fr" {return(FOR);}
"wh" {return(WHILE);}
"fn" {return(FUNCTION);}
"swc" {return(SWITCH);}
"cs" {return(CASE);}
"nil" {return(NULL);}
"df" {return(DEFAULT);}

"]" {return(FIMBLOCO);}  
"i" {return(INT);}
"f" {return(FLOAT);}
"c" {return(CHAR);}
"s" {return(STRING);}
"l" {return(LIST);}

"+" {return(PLUS);}
"-" {return(MINUS);}
"*" {return(MULT);}
"**" {return(EXP);}
"/" {return(DIV);}
"//" {return(DIVINTEIRA);}
"%" {return(DIVRESTO);} 

">" {return(GRTTHAN);}
">=" {return(GRTEQ);}
"<" {return(LSSTHAN);}
"<=" {return(LSSEQ);}
"==" {return(EQ);}

"=" {return(ATR);}
"-=" {return(MINATR);}
"+=" {return(PLSATR);} 

/*???*/ "~" {return();} 

"&" {return(AND);}
"|" {return(OR);}
"@" {return(XOR);}
"!" {return(NOT);}

"br" {return(BREAK);}
"rt" {return(RETURN);}
"ct" {return(CONTINUE);}

[-]*[0-9]+ {return(INT);} 

[-]*[0-9]+[.][0-9]+ {return(DEC);} 

"," {return(',');}
";" {return(';');}
":" {return(':');}
"{" {return('{');}
"}" {return('}');}
"(" {return('(');}
")" {return(')');}
" ' " {return(' ' ');}

{identificador} {return(ID);}
{float} {return(NDECIMAL);}
{inteiro} {return(NINTEIRO);}
{string} {return(STRING);}
{char} {return(CARACTERE);}



%% 


/*codigo em C. Foi criado o main, mas podem ser criadas outras funcoes aqui.*/ 

int main(void) 
{ 
    /* Call the lexer, then quit. */ 
    yylex(); 
    return 0; 
}

