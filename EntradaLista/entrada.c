#include "entrada.h"

void setInputValues(Entry *entry, char *symbol, char *symbolType, char *type, int line){
    strcpy(entry->symbol, "   ");
    strcpy(entry->symbol, symbol);
    strcpy(entry->symbolType, symbolType);
    strcpy(entry->type, type);
    entry->line = line;
}

void printInput(Entry entry){ //vai printar tudo cagado
    printf("|%c%c%c\t|%s\t|%s\t|%d\t|\n",entry.symbol[0],entry.symbol[1],entry.symbol[2], entry.symbolType, entry.type, entry.line);
}


char * getSymbol(Entry entry){
    char * symbol = (char*)malloc(sizeof(char)*3);
    strcpy(symbol, entry.symbol);
    return symbol;
}