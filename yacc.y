%{
#include <stdio.h>
#include <stdlib.h>
#include "TabelaSimbolos/tabela.h"

LinkedTable *table;
void yyerror(char *);
int yylex(void);
void reduce_print(char *);
extern int linha;
int erro = 0;
int CODE_PRINT = 1;
extern char * yytext;
extern char last_id[4];
char last_id_atr[4];
extern void print_linha();
ScopeCell *scopeCell;
char tipo[20];
int is_declr=0;

%}

%token ESPACO

%token PRINTF SCANF IF ELSE FOR WHILE FUNCTION SWITCH NULLT DEFAULT

%token FIMBLOCO

%token INT FLOAT CHAR STR LIST

%token PLUS MINUS MULT EXP DIV DIVINTEIRA DIVRESTO
%left PLUS MINUS MULT EXP DIV DIVINTEIRA DIVRESTO


%token GRTTHAN GRTEQ LSSTHAN LSSEQ EQ
%left GRTTHAN GRTEQ LSSTHAN LSSEQ EQ

%token ATR MINATR PLSATR

%token BREAK RETURN CONTINUE

%token ID NINTEIRO NDECIMAL STRING CHARACTER 

%%

stmts : stmt '\n' stmts {reduce_print("reduced by stmts -> stmt \\n stmts\n");}
	|	stmt {reduce_print("reduced by stmts -> stmt\n");}

stmt : atr {reduce_print("reduced by stmt -> atr\n");}
	| for_stmt {reduce_print("reduced by stmt -> for_stmta\n");}
	| if_smt {reduce_print("reduced by stmt -> if_smt\n");}
	| while_stmt  {reduce_print("reduced by stmt ->  while_stmt\n");}
	| fn_stmt  {reduce_print("reduced by stmt ->  fn_stmt\n");}
	| case_stmt  {reduce_print("reduced by stmt ->  case_stmt\n");}
	| PRINTF '(' return_stmts ')' {reduce_print("reduced by stmt ->  PRINTF '(' return_stmts ')'\n");}
	| desvio
	| RETURN ESPACO return_stmts
	| {reduce_print("reduced by stmt -> palavra vazia\n"); }; 
	| acess '(' ')' {reduce_print("reduced by stmt -> acess '(' ')'\n");}
	| acess '(' return_stmts ')' {reduce_print("reduced by stmt -> acess '(' return_stmts ')'\n");}

atr : acess GET_ID atr_op return_stmts {reduce_print("reduced by atr -> acess GET_ID atr_op return_stmt\n");if(is_declr)insertCell(&scopeCell->inputList,last_id_atr, "variavel", tipo, linha-1);is_declr=false;} ; 

GET_ID : {reduce_print("reduced by GET_ID -> palavra vazia\n"); strcpy(last_id_atr,last_id);};

acess : ID {reduce_print("reduced by acess -> ID\n"); is_declr=true;}
	| ID '{' return_stmts '}' {reduce_print("reduced by acess -> ID '{' return_stmts '}'\n");};

return_stmts : acess C '(' return_stmts ')' {reduce_print("reduced by return_stmts -> acess C '(' return_stmts ')'\n"); strcpy(tipo,"Unk");}
	| acess C '(' ')' {reduce_print("reduced by return_stmts -> acess C '(' ')'\n"); strcpy(tipo,"Unk");}
	| '(' return_stmts ')'  {reduce_print("reduced by return_stmts -> '(' return_stmts ')' \n"); strcpy(tipo,"Unk");}
	| return_stmts op return_stmts {reduce_print("reduced by return_stmts -> return_stmts op return_stmts \n"); strcpy(tipo,"Unk");}
	| return_stmt {reduce_print("reduced by return_stmts -> return_stmt \n");}
	| SCANF '(' return_stmts ')' {reduce_print("reduced by return_stmts -> SCANF '(' return_stmts ')'\n"); strcpy(tipo,"str");}
	| SCANF '(' ')' {reduce_print("reduced by return_stmts -> SCANF '(' ')'\n"); strcpy(tipo,"str");}
	| op_uni return_stmts {reduce_print("reduced by return_stmts -> op_uni return_stmts\n");strcpy(tipo,"int");} ;
	| INT '(' return_stmts ')' {reduce_print("reduced by return_stmts -> INT '(' return_stmts ')'\n"); strcpy(tipo,"int");}
	| FLOAT '(' return_stmts ')' {reduce_print("reduced by return_stmts -> FLOAT '(' return_stmts ')'\n"); strcpy(tipo,"float");}
	| STR '(' return_stmts ')' {reduce_print("reduced by return_stmts -> STR '(' return_stmts ')'\n"); strcpy(tipo,"str");}
	| CHAR '(' return_stmts ')' {reduce_print("reduced by return_stmts -> CHAR '(' return_stmts ')'\n"); strcpy(tipo,"char");};

C : {reduce_print("reduced by C -> palavra vazia\n");if(strcmp(last_id,last_id_atr)) is_declr=false;};

return_stmt : acess {reduce_print("reduced by return_stmt -> acess\n"); strcpy(tipo,"Unk");} | literal {reduce_print("reduced by return_stmt -> literal\n");};

op : op_rel {reduce_print("reduced by op -> op_rel\n");} 
	| op_mat {reduce_print("reduced by op -> op_mat\n");}
	| opt_log {reduce_print("reduced by op -> opt_log\n");};

I : {insertScopeCell(table);scopeCell = getCurrentScope(table);};
E : {imprimeLista(scopeCell->inputList);removeScopeCell(table);scopeCell = getCurrentScope(table);};

case_stmt : SWITCH ESPACO return_stmt '\n' cases df_stmt FIMBLOCO {reduce_print("reduced by case_stmt -> SWITCH ESPACO return_stmt '\\n' cases df_stmt FIMBLOCO\n");};

df_stmt : DEFAULT ':' '\n' stmts {reduce_print("reduced by df_stmt -> DEFAULT ':' '\\n' stmts '\n");}
		| {reduce_print("reduced by df_stmt -> palavra vazia\n");};

cases : case cases {reduce_print("reduced by cases -> case cases\n");}
		| case {reduce_print("reduced by cases -> case\n");};

case : literal ':' '\n' stmts {reduce_print("reduced by case -> literal ':' '\\n' stmts '\\n'\n");};

for_stmt : FOR ESPACO I atr ';' return_stmts ';' atr '\n' stmts FIMBLOCO E {reduce_print("reduced by for_stmt -> FOR ESPACO atr ';' return_stmts ';' atr '\\n' stmts FIMBLOCO\n");};

while_stmt : WHILE I ESPACO return_stmts '\n' stmts FIMBLOCO E {reduce_print("reduced by while_stmt -> WHILE ESPACO return_stmts '\\n' stmts FIMBLOCO\n");};

desvio : BREAK {reduce_print("reduced by desvio -> BREAK \n");}
	| CONTINUE {reduce_print("reduced by desvio -> CONTINUE \n");};

if_smt : IF I ESPACO return_stmts '\n' stmts FIMBLOCO E {reduce_print("reduced by if_smt -> IF ESPACO return_stmts '\\n' stmts FIMBLOCO\n");}
		| IF I ESPACO return_stmts '\n' stmts ELSE E I '\n' stmts FIMBLOCO E {reduce_print("reduced by if_smt -> IF ESPACO return_stmts '\\n' stmts ELSE '\\n' stmts FIMBLOCO\n");};

fn_stmt : head I body E {reduce_print("reduced by fn_stmt -> head body\n");};

head : FUNCTION ESPACO ID ESPACO {reduce_print("reduced by head -> FUNCTION ESPACO ID ESPACO\n"); insertCell(&scopeCell->inputList,last_id, "Function", "Unk", linha-1);};

body : params '\n' stmts FIMBLOCO {reduce_print("reduced by body -> ESPACO params '\\n' stmts FIMBLOCO\n");};

params : param ';' params {reduce_print("reduced by params -> param ';' params\n");}
		| param {reduce_print("reduced by params -> param\n");}
		| {reduce_print("reduced by params -> palavra vazia\n");};

param : ID atr_op return_stmt {reduce_print("reduced by param -> ID atr_op return_stmt\n");}
		| ID {reduce_print("reduced by param -> ID\n");};

literal : NDECIMAL {reduce_print("reduced by literal -> NDECIMAL\n"); strcpy(tipo,"float");}
		| NINTEIRO {reduce_print("reduced by literal -> NINTEIRO\n"); strcpy(tipo,"int");}
		| NULLT {reduce_print("reduced by literal -> NULLT\n"); strcpy(tipo,"null");}
		| CHARACTER {reduce_print("reduced by literal -> CHARACTER\n"); strcpy(tipo,"char");}
		| STRING {reduce_print("reduced by literal -> STRING\n"); strcpy(tipo,"str");}
		| lista {reduce_print("reduced by literal -> lista\n"); strcpy(tipo,"list");};

lista : '{' return_stmts return_stmts_list '}' {reduce_print("reduced by lista -> '{' return_stmts return_stmts_list '}'\n");};

return_stmts_list : ',' return_stmts_list  {reduce_print("reduced by return_stmts_list -> ',' return_stmts_list\n");}
					| {reduce_print("reduced by return_stmts_list -> palavra vazia\n");};

opt_log : '&' {reduce_print("reduced by opt_log -> '&'\n");}
		| '|' {reduce_print("reduced by opt_log -> '|'\n");}
		| '@' {reduce_print("reduced by opt_log -> '@'\n");};
atr_op : ATR {reduce_print("reduced by atr_op -> ATR\n");}
		| MINATR {reduce_print("reduced by atr_op -> MINATR\n"); is_declr=false;}
		| PLSATR{reduce_print("reduced by atr_op -> PLSATR\n"); is_declr=false;};
op_uni : '~' {reduce_print("reduced by op_uni -> '~'\n");};
op_mat : PLUS {reduce_print("reduced by op_mat -> PLUS\n");}
		| MINUS {reduce_print("reduced by op_mat -> MINUS\n");}
		| MULT {reduce_print("reduced by op_mat -> MULT\n");}
		| EXP {reduce_print("reduced by op_mat -> EXP\n");}
		| DIV {reduce_print("reduced by op_mat -> DIV\n");}
		| DIVINTEIRA {reduce_print("reduced by op_mat -> DIVINTEIRA\n");}
		| DIVRESTO {reduce_print("reduced by op_mat -> DIVRESTO\n");};
op_rel : GRTTHAN {reduce_print("reduced by op_rel -> GRTTHAN\n");}
		| LSSTHAN {reduce_print("reduced by op_rel -> LSSTHAN\n");}
		| GRTEQ {reduce_print("reduced by op_rel -> GRTEQ\n");}
		| LSSEQ {reduce_print("reduced by op_rel -> LSSEQ\n");}
		| EQ {reduce_print("reduced by op_rel -> EQ\n");}
		| '!' {reduce_print("reduced by op_rel -> '!'\n");};


%%	

void reduce_print(char *s){
	if (!CODE_PRINT)
		printf(s);
}

void yyerror(char *s) {
	printf("Programa sintaticamente incorreto\n");
	printf("Erro proximo da linha: %d\n", linha);
	erro = 1;
}

int main(int argc, char **argv){
	if (argc == 2){
		if (strcmp(argv[1], "0"))
			CODE_PRINT = 0;
		else
			CODE_PRINT = 1;
	}
	print_linha();
	table = initializeTable();
	createEmptyTable(table);
	insertScopeCell(table);
	scopeCell = table->end;
	yyparse();
	imprimeLista(scopeCell->inputList);
	if (!erro)
		printf("Programa sintaticamente correto\n");
	return 0;
}


