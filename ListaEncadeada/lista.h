#include "../EntradaLista/entrada.h"

#ifndef CELL_SIZE

//estrutura da celula
typedef struct Cell{
    Input input;
    struct Cell *pProx;
}Cell;
#define CELL_SIZE sizeof(Cell)

#endif

//estrutura da lista
typedef struct{
    struct Cell *start, *end;
}LinkedList;

LinkedList *initialize();

void createEmptyList(LinkedList *list);

void insertCell(LinkedList *list, char *symbol, char *symbolType, char *type, int line);

void printList(LinkedList *list);