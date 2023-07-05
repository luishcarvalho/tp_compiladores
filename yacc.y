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
extern char last_op[4];
extern char last_number[100];
char last_id_atr[4];
extern void print_linha();
ScopeCell *scopeCell;
bool is_declr=0;
bool erro_seman = 0;
char str_count[100];
char temporary[100];
int linha_erro;

int contador = 0;

void check_error (char tipo1, char tipo2);
typedef struct type{
	char type;
	char vl[100];
	char op[4];
}type;

FILE *arquivoEnderecos;

char codigo3[100];

#define YYSTYPE type


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
	| PRINTF '(' return_stmts ')' {reduce_print("reduced by stmt ->  PRINTF '(' return_stmts ')'\n"); check_error('l', $3.type);}
	| desvio
	| RETURN ESPACO return_stmts
	| {reduce_print("reduced by stmt -> palavra vazia\n"); }; 
	| acess '(' ')' {reduce_print("reduced by stmt -> acess '(' ')'\n");check_error($1.type, $1.type);}
	| acess '(' return_stmts ')' {reduce_print("reduced by stmt -> acess '(' return_stmts ')'\n"); check_error($1.type, $1.type);}

atr : acess GET_ID atr_op return_stmts {reduce_print("reduced by atr -> acess GET_ID atr_op return_stmt\n");
										if(is_declr)insertCell(&scopeCell->inputList,last_id_atr, "variavel", $4.type, linha-1);
										else check_error($1.type, $4.type);
										is_declr=false;
										if(!strcmp($3.op, "+=")){fprintf(arquivoEnderecos, "%s=%s+%s\n", $1.vl, $1.vl, $4.vl);}
										else if(!strcmp($3.op, "-=")){fprintf(arquivoEnderecos, "%s=%s-%s\n", $1.vl, $1.vl, $4.vl);}
										else{fprintf(arquivoEnderecos, "%s=%s\n", $1.vl, $4.vl);} } ; 

GET_ID : {reduce_print("reduced by GET_ID -> palavra vazia\n"); strcpy(last_id_atr,last_id);};

acess : ID {reduce_print("reduced by acess -> ID\n"); is_declr=true;$$.type=getTipoID(last_id,*table); strcpy($$.vl, last_id);}
	| ID '{' return_stmts '}' {reduce_print("reduced by acess -> ID '{' return_stmts '}'\n");$$.type='u';};

return_stmts : acess C '(' return_stmts ')' {reduce_print("reduced by return_stmts -> acess C '(' return_stmts ')'\n"); $$.type='u';}
	| acess C '(' ')' {reduce_print("reduced by return_stmts -> acess C '(' ')'\n"); $$.type='u';}
	| '(' return_stmts ')'  {reduce_print("reduced by return_stmts -> '(' return_stmts ')' \n"); $$.type=$2.type; strcpy($$.vl,$2.vl);}
	| return_stmts op return_stmts {reduce_print("reduced by return_stmts -> return_stmts op return_stmts \n"); check_error($1.type, $3.type); $$.type=$1.type; 
									contador++; sprintf(str_count,"%d", contador);
									strcpy(temporary, "t"); strcat(temporary, str_count);strcpy($$.vl, temporary);
									fprintf(arquivoEnderecos, "%s = %s %s %s\n", $$.vl, $1.vl, $2.op, $3.vl);}
	| return_stmt {reduce_print("reduced by return_stmts -> return_stmt \n"); $$.type=$1.type;strcpy($$.vl , $1.vl);}
	| SCANF '(' return_stmts ')' {reduce_print("reduced by return_stmts -> SCANF '(' return_stmts ')'\n"); $$.type='l'; check_error('l', $3.type);}
	| SCANF '(' ')' {reduce_print("reduced by return_stmts -> SCANF '(' ')'\n"); $$.type='l';}
	| op_uni return_stmts {reduce_print("reduced by return_stmts -> op_uni return_stmts\n"); $$.type='n';check_error($2.type,'n');} ;
	| INT '(' return_stmts ')' {reduce_print("reduced by return_stmts -> INT '(' return_stmts ')'\n"); $$.type='n';}
	| FLOAT '(' return_stmts ')' {reduce_print("reduced by return_stmts -> FLOAT '(' return_stmts ')'\n"); $$.type='n';}
	| STR '(' return_stmts ')' {reduce_print("reduced by return_stmts -> STR '(' return_stmts ')'\n"); $$.type='l';}
	| CHAR '(' return_stmts ')' {reduce_print("reduced by return_stmts -> CHAR '(' return_stmts ')'\n"); $$.type='l';};

C : {reduce_print("reduced by C -> palavra vazia\n");if(strcmp(last_id,last_id_atr) == 0) is_declr=false;};

return_stmt : acess C {reduce_print("reduced by return_stmt -> acess\n"); $$.type=$1.type; strcpy($$.vl, $1.vl);} 
	| literal {reduce_print("reduced by return_stmt -> literal\n");$$.type=$1.type; strcpy($$.vl, $1.vl); };

op : op_rel {reduce_print("reduced by op -> op_rel\n");strcpy($$.op, $1.op);} 
	| op_mat {reduce_print("reduced by op -> op_mat\n");strcpy($$.op, $1.op);}
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

head : FUNCTION ESPACO ID ESPACO {reduce_print("reduced by head -> FUNCTION ESPACO ID ESPACO\n"); insertCell(&scopeCell->inputList,last_id, "Function", 'u', linha-1);};

body : params '\n' stmts FIMBLOCO {reduce_print("reduced by body -> ESPACO params '\\n' stmts FIMBLOCO\n");};

params : param ';' params {reduce_print("reduced by params -> param ';' params\n");}
		| param {reduce_print("reduced by params -> param\n");}
		| {reduce_print("reduced by params -> palavra vazia\n");};

param : ID atr_op return_stmt {reduce_print("reduced by param -> ID atr_op return_stmt\n");}
		| ID {reduce_print("reduced by param -> ID\n");};

literal : NDECIMAL {reduce_print("reduced by literal -> NDECIMAL\n"); $$.type='n'; strcpy($$.vl, last_number);}
		| NINTEIRO {reduce_print("reduced by literal -> NINTEIRO\n"); $$.type='n'; strcpy($$.vl, last_number);}
		| NULLT {reduce_print("reduced by literal -> NULLT\n"); $$.type='u';}
		| CHARACTER {reduce_print("reduced by literal -> CHARACTER\n"); $$.type='l'; strcpy($$.vl, last_number);}
		| STRING {reduce_print("reduced by literal -> STRING\n"); $$.type='l'; strcpy($$.vl, last_number);}
		| lista {reduce_print("reduced by literal -> lista\n"); $$.type='I';};

lista : '{' return_stmts return_stmts_list '}' {reduce_print("reduced by lista -> '{' return_stmts return_stmts_list '}'\n");};

return_stmts_list : ',' return_stmts_list  {reduce_print("reduced by return_stmts_list -> ',' return_stmts_list\n");}
					| {reduce_print("reduced by return_stmts_list -> palavra vazia\n");};

opt_log : '&' {reduce_print("reduced by opt_log -> '&'\n");}
		| '|' {reduce_print("reduced by opt_log -> '|'\n");}
		| '@' {reduce_print("reduced by opt_log -> '@'\n");};
atr_op : ATR {reduce_print("reduced by atr_op -> ATR\n");}
		| MINATR {reduce_print("reduced by atr_op -> MINATR\n"); is_declr=false; strcpy($$.op, last_op);}
		| PLSATR{reduce_print("reduced by atr_op -> PLSATR\n"); is_declr=false; strcpy($$.op, last_op);};
op_uni : '~' {reduce_print("reduced by op_uni -> '~'\n");};
op_mat : PLUS {reduce_print("reduced by op_mat -> PLUS\n"); strcpy($$.op, last_op);}
		| MINUS {reduce_print("reduced by op_mat -> MINUS\n"); strcpy($$.op, last_op);}
		| MULT {reduce_print("reduced by op_mat -> MULT\n"); strcpy($$.op, last_op);}
		| EXP {reduce_print("reduced by op_mat -> EXP\n"); strcpy($$.op, last_op);}
		| DIV {reduce_print("reduced by op_mat -> DIV\n"); strcpy($$.op, last_op);}
		| DIVINTEIRA {reduce_print("reduced by op_mat -> DIVINTEIRA\n"); strcpy($$.op, last_op);}
		| DIVRESTO {reduce_print("reduced by op_mat -> DIVRESTO\n"); strcpy($$.op, last_op);};
op_rel : GRTTHAN {reduce_print("reduced by op_rel -> GRTTHAN\n");strcpy($$.op, last_op);}
		| LSSTHAN {reduce_print("reduced by op_rel -> LSSTHAN\n");strcpy($$.op, last_op);}
		| GRTEQ {reduce_print("reduced by op_rel -> GRTEQ\n");strcpy($$.op, last_op);}
		| LSSEQ {reduce_print("reduced by op_rel -> LSSEQ\n");strcpy($$.op, last_op);}
		| EQ {reduce_print("reduced by op_rel -> EQ\n");strcpy($$.op, last_op);}
		| '!' {reduce_print("reduced by op_rel -> '!'\n");};


%%	

void reduce_print(char *s){
	if (!CODE_PRINT)
		printf(s);
}

void yyerror(char *s) {
	printf("\nPrograma sintaticamente incorreto\n");
	printf("Erro proximo da linha: %d\n", linha);
	erro = 1;
}

void check_error (char tipo1, char tipo2){
	if (tipo1 == 'I' || tipo2 == 'I'){
		if (!erro_seman) linha_erro = linha;
		erro_seman = true;
	}
	if (tipo1 == 'u' || tipo2 == 'u')
		return;
	if (tipo1 == tipo2)
		return;
	else{
		if (!erro_seman) linha_erro = linha;
		erro_seman = true;
	}
}

int main(int argc, char **argv){
	if (argc == 2){
		if (strcmp(argv[1], "0"))
			CODE_PRINT = 0;
		else
			CODE_PRINT = 1;
	}
	arquivoEnderecos = fopen("tresEndereco.txt","w");
	print_linha();
	table = initializeTable();
	createEmptyTable(table);
	insertScopeCell(table);
	scopeCell = table->end;
	yyparse();
	imprimeLista(scopeCell->inputList);
	if (!erro){
		printf("Programa sintaticamente correto\n");
		if (erro_seman){
			printf("Programa semanticamente incorreto\nOperacoes com tipos incompativeis ou variavel usada antes de ser inicializada\n");
			printf("Erro proximo da linha: %d\n", linha_erro);
		}
		else
			printf("Programa semanticamente correto");
	}
	fclose(arquivoEnderecos);
	return 0;
}


