#include <stddef.h>

#include "BST_treeImp.h"

void inicializaArvore(Tree *arvore){
    arvore->raiz = NULL;
}

void inserirNaArvore(Tree *arvore, aluno *student){
    insereNodeArvore(&arvore->raiz, student);
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

