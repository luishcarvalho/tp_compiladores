#include "tabela.h"

LinkedTable *table;

void leCodigo(ScopeCell *scopeCell){
    while(true){
        if(entrada == "["){
            insertScopeCell(table);
            leCodigo(table->end);
        }
        else if(entrada == "]"){
            break;
        }
        else{
            insertCell(&scopeCell->inputList, "simbolo que foi lido", "tipo do simbolo que foi lido", "tipo", 1);
        }

    }
}


void main(){
    table = initializeTable();
    createEmptyTable(table);
    leCodigo(table->start);

}