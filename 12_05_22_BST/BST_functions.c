#include "BST_header.h"
#include <stdio.h>
#include <stdlib.h>


/*
 * Insert value at the tree (it checks if the node is = null)
 */
void insereNodeArvore(int valor, apontador *no){
    if(*no == NULL){
        *no = (apontador) malloc(sizeof(apontador));
        (*no)->valor = valor;
        (*no)->esq = NULL;
        (*no)->dir = NULL;
        return;
    }
    else{
        if(valor > (*no)->valor){
            insereNodeArvore(valor, &(*no)->dir);
            return;
        }
        else{
            insereNodeArvore(valor, &(*no)->esq);
            return;
        }
    }
}

/*
 * This function is used to go through the nodes of the tree
 */
void percorreNoORDEM(apontador *no){
    if((*no)->esq != NULL){
        percorreNoORDEM((*no)->esq);
    }
    printf("{%d}", (*no)->valor);
    if((*no)->dir != NULL){
        percorreNoORDEM((*no)->dir);
    }
}
