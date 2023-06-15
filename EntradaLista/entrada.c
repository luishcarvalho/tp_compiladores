#include "entrada.h"

void setInputValues(Entry *entry, char *symbol, char *symbolType, char *type, int line){
    strcpy(entry->symbol, symbol);
    strcpy(entry->symbolType, symbolType);
    strcpy(entry->type, type);
    entry->line = line;
}

void printInput(Entry entry){ //vai printar tudo cagado
    printf("|%s|%s|%s|%d|\n",entry.symbol, entry.symbolType, entry.type, entry.line);
}

char getSymbol(Entry entry){
    return entry.symbol;
}