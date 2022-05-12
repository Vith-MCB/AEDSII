#include "BST_header.h"

void inicializaArvore(apontador *no){
    *no = NULL;
}

/*
 * Insert value at the tree (it checks if the node is = null)
 */
int insereNaArvore(int valor, apontador *no){
    if(*no == NULL){
        *no = (apontador) malloc(sizeof(apontador));
        (*no)->valor = valor;
        (*no)->esq = NULL;
        (*no)->dir = NULL;
    }
    else{
        if(valor > *no){
            insereNaArvore(valor, &(*no)->dir);
        }
        else{
            insereNaArvore(valor, &(*no)->esq);
        }
    }
};

/*
 * This function is used to go through the nodes of the tree
 */
//void percorreArvore(apontador)
