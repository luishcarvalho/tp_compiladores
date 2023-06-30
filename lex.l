%{ 

/*codigo colocado aqui aparece no arquivo gerado pelo flex*/ 
#include "y.tab.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void print_codigo (char *);
void print_linha ();
extern int CODE_PRINT;
int linha = 0;
char last_id[4];

%} 

/* This tells flex to read only one input file */ 
%option noyywrap 

/* definicoes regulares */ 

delim		[\t] 
ws		{delim}+ 

inteiro		"-"?{digitos}+
digitos		[0-9]

%% 

{ws}		{print_codigo(yytext);} 

"\n" {print_linha(); return('\n'); linha++;}
" " {print_codigo(yytext); return(ESPACO);}

"pt" {print_codigo(yytext); return(PRINTF);}
"sc" {print_codigo(yytext); return(SCANF);}
"if" {print_codigo(yytext); return(IF);}
"el" {print_codigo(yytext); return(ELSE);}
"fr" {print_codigo(yytext); return(FOR);}
"wh" {print_codigo(yytext); return(WHILE);}
"fn" {print_codigo(yytext); return(FUNCTION);}
"swc" {print_codigo(yytext); return(SWITCH);}
"nil" {print_codigo(yytext); return(NULLT);}
"df" {print_codigo(yytext); return(DEFAULT);}

"]" {print_codigo(yytext); return(FIMBLOCO);} 

"i" { print_codigo(yytext); return(INT);}
"f" { print_codigo(yytext); return(FLOAT);}
"c" { print_codigo(yytext); return(CHAR);}
"s" { print_codigo(yytext); return(STR);}
"l" { print_codigo(yytext); return(LIST);}

"+" { print_codigo(yytext); return(PLUS);}
"-" {print_codigo(yytext); return(MINUS);}
"*" {print_codigo(yytext); return(MULT);}
"**" {print_codigo(yytext); return(EXP);}
"/" {print_codigo(yytext); return(DIV);}
"//" {print_codigo(yytext); return(DIVINTEIRA);}
"%" {print_codigo(yytext); return(DIVRESTO);}  

">" {print_codigo(yytext); return(GRTTHAN);}
">=" {print_codigo(yytext); return(GRTEQ);}
"<" {print_codigo(yytext); return(LSSTHAN);}
"<=" {print_codigo(yytext); return(LSSEQ);}
"==" {print_codigo(yytext); return(EQ);}

"=" {print_codigo(yytext); return(ATR);}
"-=" {print_codigo(yytext); return(MINATR);}
"+=" {print_codigo(yytext); return(PLSATR);} 

"~" {print_codigo(yytext); return('~');} 
"&" {print_codigo(yytext); return('&');}
"|" {print_codigo(yytext); return('|');}
"@" {print_codigo(yytext); return('@');}
"!" {print_codigo(yytext); return('!');}

"br" {print_codigo(yytext); return(BREAK);}
"rt" {print_codigo(yytext); return(RETURN);}
"ct" {print_codigo(yytext); return(CONTINUE);}

[a-z][a-z0-9]?[a-z0-9]?  {print_codigo(yytext); strcpy(last_id, "   "); strcpy(last_id, yytext); return(ID);} 
[-]?[0-9]+  { print_codigo(yytext); return(NINTEIRO);} 
({inteiro}\.{digitos}+)|({inteiro}(\.{digitos}+)?"e"{inteiro})  {print_codigo(yytext); return(NDECIMAL);}
\"([^\"]+)\" { print_codigo(yytext); return(STRING);}  
\'([^\']) {print_codigo(yytext); return(CHARACTER);} 

"," {print_codigo(yytext); return(',');}
";" {print_codigo(yytext); return(';');}
":" {print_codigo(yytext); return(':');}
"{" {print_codigo(yytext); return('{');}
"}" {print_codigo(yytext); return('}');}
"(" {print_codigo(yytext); return('(');}
")" {print_codigo(yytext); return(')');}
"\'" {print_codigo(yytext); return('\'');}

%% 

/*codigo em C. Foi criado o main, mas podem ser criadas outras funcoes aqui.*/ 

void print_linha (){
    if (CODE_PRINT)
        printf("\n%d ", linha);
    linha++;
}

void print_codigo (char *s){
    if (CODE_PRINT)
        printf("%s", s);
}

/*int main() */
/*{ */
    /* Call the lexer, then quit. */ 
/*    yylex(); */
/*    return 0; */
/*}*/
