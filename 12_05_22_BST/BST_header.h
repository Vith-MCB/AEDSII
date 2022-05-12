#include <stdio.h>
#include <stdlib.h>

//Creating Pointers struct to use at the tree

typedef struct no *apontador;

typedef struct no {
    int valor;
    apontador  esq, dir;
} no ;

typedef struct tree{
    apontador raiz;
} tree;


/*
 * Defining the function that initialize the tree
 */
void inicializaArvore(apontador *no);
int insereNodeArvore(int valor, apontador *no);