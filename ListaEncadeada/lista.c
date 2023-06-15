#include "lista.h"

LinkedList *initialize(){
    LinkedList *list = (LinkedList*)malloc(sizeof(LinkedList));
    if(list != NULL){
        return list;
    }
    else{
        printf("ERRO NO MALLOC!\n");
        //TODO - ver como tratar
    }
}

void createEmptyList(LinkedList *list){
    list->start = (struct Cell*)malloc(CELL_SIZE); //TEM QUE VER SE FUNCIONA
    list->end = list->start;
    list->start->pProx = NULL;
}

void insertCell(LinkedList *list, char *symbol, char *symbolType, char *type, int line){
    Input newInput;
    setInputValues(&newInput, symbol, symbolType, type, line);

    if (verificaConflito(newInput, list) == 0)
    {
        Cell *cell = (Cell*)malloc(CELL_SIZE);
        cell->input = newInput;
        cell->pProx = NULL;
        list->end->pProx = cell;
        list->end = cell;
    }

    /*
    list->end->pProx = (Cell*)malloc(CELL_SIZE); //TEM QUE VER SE FUNCIONA
    list->end = list->end->pProx;
    list->end->input = newInput;
    list->end->pProx = NULL;
    */
}

