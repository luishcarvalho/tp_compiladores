#include "entrada.h"

void setInputValues(Input *input, char *symbol, char *symbolType, char *type, int line){
    strcpy(input->symbol, symbol);
    strcpy(input->symbolType, symbolType);
    strcpy(input->type, type);
    input->line = line;
}

void printInput(Input *input){ //vai printar tudo cagado
    printf("|%s|%s|%s|%d|\n",input->symbol, input->symbolType, input->type, input->line);
}