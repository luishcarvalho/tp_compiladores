%{ 

/*codigo colocado aqui aparece no arquivo gerado pelo flex*/ 


%} 

/* This tells flex to read only one input file */ 
%option noyywrap 

/* definicoes regulares */ 

delim		[ \t\n] 
ws		{delim}+ 

%% 

{ws}  {/*nenhuma acao e nenhum retorno*/} 
/*???*/ ws {return(DELIM);}  

"pt" {return(PRINTF);}
"sc" {return(SCANF);}
"if" {return(IF);}
"el" {return(ELSE);}
"fr" {return(FOR);}
"wh" {return(WHILE);}
/*???*/ "fn" {return(FUNCTION);}
"swc" {return(SWITCH);}
"cs" {return(CASE);}
"nil" {return(NULL);}
"df" {return(DEFAULT);}

"]" {return(INICIOBLOCO);}  
"[" {return(FIMBLOCO);}  
"i" {return(INT);}
"f" {return(FLOAT);}
"c" {return(CHAR);}
/*????*/ "s" {return(STRING);}
/*????*/ "l" {return(LIST);}

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

[a-z][a-z0-9]?[a-z0-9]? {return(ID);} 

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

/*???*/ \"([^\"]+)\" {printf("\nFoi encontrado uma sequencia de caracteres. LEXEMA: %s\n",yytext);}  


%% 


/*codigo em C. Foi criado o main, mas podem ser criadas outras funcoes aqui.*/ 

int main(void) 
{ 
    /* Call the lexer, then quit. */ 
    yylex(); 
    return 0; 
}

