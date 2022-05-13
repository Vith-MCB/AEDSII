#include "BST_header.h"
#include "BST_treeHeader.h"
#include <stdio.h>


void inicializaArvore(Tree *arvore){
    arvore->raiz = NULL;
}

void inserirNaArvore(Tree *arvore, int valor){
    insereNodeArvore(&arvore->raiz, valor);
}

void percorreArvoreORDEM(Tree *arvore){
    percorreNoORDEM(arvore->raiz);
}

