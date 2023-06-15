#include "../ListaEncadeada/lista.h"

#ifndef SCOPE_CELL_SIZE

typedef struct ScopeCell{
    LinkedList inputList;
    struct ScopeCell *pProx;
}ScopeCell;

#define SCOPE_CELL_SIZE sizeof(ScopeCell)

#endif

typedef struct{
    struct ScopeCell *start, *end;
}LinkedTable;

LinkedTable *initializeTable();

void createEmptyTable(LinkedTable *table);

void insertScopeCell(LinkedTable *table);
