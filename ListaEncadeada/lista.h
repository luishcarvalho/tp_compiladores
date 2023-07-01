#include "../EntradaLista/entrada.h"

#ifndef CELL_SIZE

//estrutura da celula
typedef struct Cell{
    Entry entry;
    struct Cell *pProx;
}Cell;
#define CELL_SIZE sizeof(Cell)

#endif

//estrutura da lista
typedef struct{
    struct Cell *start, *end;
}LinkedList;

void initialize(LinkedList *list);

void createEmptyList(LinkedList *list);

void insertCell(LinkedList *list, char *symbol, char *symbolType, char type, int line);

void imprimeLista(LinkedList list);

bool verifyConflict(Entry entry, LinkedList *list);

char findType(char * identificador, LinkedList list);