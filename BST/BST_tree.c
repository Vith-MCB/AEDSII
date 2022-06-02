#include "BST_tree.h"
#include <stdio.h>


void inicializaArvore(Tree *arvore){
    arvore->raiz = NULL;
}

void inserirNaArvore(Tree *arvore, int valor){
    insereNodeArvore(&arvore->raiz, valor);
}

bool naArvore(Tree *arvore, int numero){
    procuraATno(arvore->raiz, numero);
}

int encontraMaiorNaArvore(Tree *arvore){
    encontraMaiorNo(arvore->raiz);
}

void percorreArvoreORDEM(Tree *arvore){
    percorreNoORDEM(arvore->raiz);
}

void percorreArvorePOSORDEM(Tree *arvore){
    percorreNoPOSORDEM(arvore->raiz);
}

void percorreArvorePREORDEM(Tree *arvore){
    percorreNoPREORDEM(arvore->raiz);
}

