#include "tabela.h"

LinkedTable *initializeTable(){
    LinkedTable *table = (LinkedTable*)malloc(sizeof(LinkedTable));
    if(table != NULL){
        return table;
    }
    else{
        printf("ERRO NO MALLOC!\n");
        //TODO - ver como tratar
    }
}

void createEmptyTable(LinkedTable *table){
    LinkedList initialEntryList;
    initialize(&initialEntryList);
    createEmptyList(&initialEntryList);

    table->start = (struct ScopeCell*)malloc(SCOPE_CELL_SIZE); //TEM QUE VER SE FUNCIONA
    table->end = table->start;
    table->start->pProx = NULL;
    table->start->inputList = initialEntryList;
}

void insertScopeCell(LinkedTable *table){
    LinkedList newEntryList;
    initialize(&newEntryList);
    createEmptyList(&newEntryList);


    ScopeCell *scopeCell = (ScopeCell*)malloc(SCOPE_CELL_SIZE);
    scopeCell->inputList = newEntryList;
    scopeCell->pProx = NULL;
    table->end->pProx = scopeCell;
    table->end = scopeCell;
    /*Entry newInput;
    setInputValues(&newInput, symbol, symbolType, type, line);

    if (verifyConflict(newInput, list) == 0){
        Cell *cell = (Cell*)malloc(CELL_SIZE);
        cell->entry = newInput;
        cell->pProx = NULL;
        list->end->pProx = cell;
        list->end = cell;
    }*/
}