#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_TYPE_LEN    100

typedef struct{
    char symbol[3];
    char symbolType[MAX_TYPE_LEN];
    char type[MAX_TYPE_LEN];
    int line;
}Input; //Entrada na tabela de símbolos

void setInputValues(Input *input, char *symbol, char *symbolType, char *type, int line);

void printInput(Input *input);

char getSymbol(Input *input);