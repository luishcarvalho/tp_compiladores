#include "../ListaEncadeada/lista.h"

#ifndef SCOPE_CELL_SIZE

typedef struct ScopeCell{
    LinkedList inputList;
    struct ScopeCell *pProx;
    struct ScopeCell *pAnt;
}ScopeCell;

#define SCOPE_CELL_SIZE sizeof(ScopeCell)

#endif

typedef struct{
    struct ScopeCell *start, *end;
}LinkedTable;

LinkedTable *initializeTable();

void createEmptyTable(LinkedTable *table);

void insertScopeCell(LinkedTable *table);

ScopeCell *getCurrentScope(LinkedTable *table);

void removeScope(LinkedTable *table);

void removeScopeCell(LinkedTable *table);

void clearScopeEntryList(ScopeCell *scopeCell);

char getTipoID(char * id, LinkedTable table);