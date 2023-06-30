#include "entrada.h"

void setInputValues(Entry *entry, char *symbol, char *symbolType, char *type, int line){
    strcpy(entry->symbol, "   ");
    strcpy(entry->symbol, symbol);
    strcpy(entry->symbolType, symbolType);
    strcpy(entry->type, type);
    entry->line = line;
}

void printInput(Entry entry){
    printf("|%s\t|%s\t|%s\t|%d\t|\n",entry.symbol, entry.symbolType, entry.type, entry.line);
}


char * getSymbol(Entry entry){
    char * symbol = (char*)malloc(sizeof(char)*4);
    strcpy(symbol, entry.symbol);
    symbol[3] = '\0';
    return symbol;
}