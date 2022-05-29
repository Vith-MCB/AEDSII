#include "tree.h"
#include <stdio.h>


void inicializaArvore(Tree *arvore) {
    arvore->raiz = NULL;
}

void inserirNaArvore(Tree *arvore, apontador *no) {
    insereNodeArvore(&arvore->raiz, &(*no)->student);
}

void percorreArvoreORDEM(Tree *arvore) {
    percorreNoORDEM(arvore->raiz);
}

void percorreArvorePOSORDEM(Tree *arvore) {
    percorreNoPOSORDEM(arvore->raiz);
}

void percorreArvorePREORDEM(Tree *arvore) {
    percorreNoPREORDEM(arvore->raiz);
}
