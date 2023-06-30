#include "lista.h"

void initialize(LinkedList *list){
    list = (LinkedList*)malloc(sizeof(LinkedList));
    if(list == NULL){
        printf("ERRO NO MALLOC!\n");
    }

}

void createEmptyList(LinkedList *list){
    list->start = (struct Cell*)malloc(CELL_SIZE); //TEM QUE VER SE FUNCIONA
    list->end = list->start;
    list->start->pProx = NULL;
}

void insertCell(LinkedList *list, char *symbol, char *symbolType, char *type, int line){
    Entry newInput;
    setInputValues(&newInput, symbol, symbolType, type, line);


    if (verifyConflict(newInput, list) == false){
        Cell *cell = (Cell*)malloc(CELL_SIZE);
        cell->entry = newInput;
        cell->pProx = NULL;
        list->end->pProx = cell;
        list->end = cell;
    }
}

void imprimeLista(LinkedList list){
    printf("\n|simbolo|tipo do simbolo|tipo\t|linha\t|\n");
    Cell* ponteiroauxiliar;
    ponteiroauxiliar = list.start->pProx;
    // 0 = false / 1 = true
    //varre a lista
    while (ponteiroauxiliar != NULL){
        //verifica se o simbolo passado bate com algum da lista
        printInput(ponteiroauxiliar->entry);
        ponteiroauxiliar = ponteiroauxiliar->pProx;
    }
}


bool verifyConflict(Entry entry, LinkedList *list){
    Cell* ponteiroauxiliar;
    ponteiroauxiliar = list->start->pProx;
    // 0 = false / 1 = true
    //varre a lista
    while (ponteiroauxiliar != NULL){
        //verifica se o simbolo passado bate com algum da lista
        char* a = getSymbol(ponteiroauxiliar->entry);
        char* b = getSymbol(entry);

        if (strcmp(a, b) == 0){
            return true;
        }
        ponteiroauxiliar = ponteiroauxiliar->pProx;
    }
    
    
    return false;
}
