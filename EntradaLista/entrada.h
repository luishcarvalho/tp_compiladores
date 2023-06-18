#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_TYPE_LEN    20

typedef struct{
    char symbol[3];
    char symbolType[MAX_TYPE_LEN];
    char type[MAX_TYPE_LEN];
    int line;
}Entry; //Entrada na tabela de símbolos

void setInputValues(Entry *entry, char *symbol, char *symbolType, char *type, int line);

void printInput(Entry entry);

char * getSymbol(Entry entry);