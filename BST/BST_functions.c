#include "BST_functions.h"
#include <stdio.h>
#include <stdlib.h>


/*
 * Insert value at the tree (it checks if the node is = null)
 */
void insereNodeArvore(apontador *no, int valor){
    if(*no == NULL){
        *no = (apontador) malloc(sizeof(apontador));
        (*no)->valor = valor;
        (*no)->esq = NULL;
        (*no)->dir = NULL;
    }
    else{
        if(valor > (*no)->valor){
            insereNodeArvore(&(*no)->dir, valor);
        }
        else{
            insereNodeArvore(&(*no)->esq, valor);
        }
    }
}

bool procuraATno(apontador no, int numeroPesquisar){
    if(numeroPesquisar > (*no).valor){
        if((*no).dir == NULL) {
            return false;
        }
        else{
            procuraATno((*no).dir,numeroPesquisar);
        }
    }
    else {
        if ((*no).valor == numeroPesquisar){
            return true;
        }
        if((*no).esq == NULL){
            return false;
        }
        else{
            procuraATno((*no).esq, numeroPesquisar);
        }
    }
}

int encontraMaiorNo(apontador no){
    if((*no).dir != NULL){
        encontraMaiorNo((*no).dir);
    }
    else{
        printf("\nMaior numero: %d\n", (*no).valor);
    }

}

/*
 * This function is used to go through the nodes of the tree
 */
void percorreNoORDEM(apontador no){
    if((*no).esq != NULL){
        percorreNoORDEM((*no).esq);
    }
    printf("{%d}", (*no).valor);
    if((*no).dir != NULL){
        percorreNoORDEM((*no).dir);
    }
}

void percorreNoPOSORDEM(apontador no){
    if((*no).esq != NULL){
        percorreNoPOSORDEM((*no).esq);
    }
    if((*no).dir != NULL){
        percorreNoPOSORDEM((*no).dir);
    }
    printf("{%d}", (*no).valor);
}

void percorreNoPREORDEM(apontador no){
    printf("{%d}", (*no).valor);
    if((*no).esq != NULL){
        percorreNoPOSORDEM((*no).esq);
    }
    if((*no).dir != NULL){
        percorreNoPOSORDEM((*no).dir);
    }
}