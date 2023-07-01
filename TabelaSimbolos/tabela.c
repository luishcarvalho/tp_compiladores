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
    table->start->pAnt = NULL; 
    table->start->inputList = initialEntryList;
}

void insertScopeCell(LinkedTable *table){
    LinkedList newEntryList;
    initialize(&newEntryList);
    createEmptyList(&newEntryList);


    ScopeCell *scopeCell = (ScopeCell*)malloc(SCOPE_CELL_SIZE);
    scopeCell->inputList = newEntryList;
    scopeCell->pProx = NULL;
    scopeCell->pAnt = table->end;
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

void clearScopeEntryList(ScopeCell *scopeCell) {
    if (scopeCell == NULL) {
        return;
    }

    createEmptyList(&scopeCell->inputList);
}

void removeScopeCell(LinkedTable *table){
    ScopeCell* secondLast = table->end->pAnt;

    secondLast->pProx = NULL;
    table->end = secondLast;

}

ScopeCell *getCurrentScope(LinkedTable *table){
    if (table->end == NULL) { //Para verificar se tem no mínimo um escopo válido
        return NULL;
    }

    ScopeCell *currentScope = table->end;

    return currentScope;
}

void removeScope(LinkedTable *table) {
    ScopeCell *currentScope = getCurrentScope(table);
    if(currentScope!=NULL){
        clearScopeEntryList(currentScope); //Limpa a lista de símbolos. Serve apenas para liberar memória
        removeScopeCell(table); //Simplesmente deleta a última célula da tabela.
    }
}

char getTipoID(char * id, LinkedTable table){
    ScopeCell * aux =  table.end;

    char tipo;
    do
    {
        tipo = findType(id,aux->inputList);

        aux = aux->pAnt;
        if (tipo != 'I')
            return tipo;
        if (aux == NULL)
            return 'I';
    } while (true);

}

