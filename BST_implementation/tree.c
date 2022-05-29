#include "tree.h"
#include <stdio.h>


void inicializaArvore(Tree *arvore) {
    arvore->raiz = NULL;
}

void inserirNaArvore(Tree *arvore, aluno *valor) {
    insereNodeArvore(&arvore->raiz, valor);
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
