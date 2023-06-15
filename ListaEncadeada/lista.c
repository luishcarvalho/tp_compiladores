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
    }}



int VerificaConflito(Input input, LinkedList *list)
{
    Cell* ponteiroauxiliar;
    ponteiroauxiliar = list->start;
    // 0 = false / 1 = true
    int digitoverificador = 0;
    //varre a lista
    while (ponteiroauxiliar != NULL){
        //verifica se o simbolo passado bate com algum da lista
        if (getSymbol(ponteiroauxiliar->input) == getSymbol(input)){
            digitoverificador = 1;
            break;}
        ponteiroauxiliar = ponteiroauxiliar->pProx;}
    
    return digitoverificador;
}

