#include <stdio.h>
#include <stdlib.h>

//Creating Pointers struct to use at the tree

typedef struct no *apontador;

typedef struct no{
    int valor;
    apontador  esq, dir;
} no;


/*
 * Defining the function that initialize the tree
 */
int insereNodeArvore(int valor, apontador *no);
void percorreNoORDEM(apontador *no);