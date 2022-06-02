#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Creating Pointers struct to use at the tree

typedef struct no *apontador;

typedef struct no {
    int valor;
    apontador  esq, dir;
} no;


/*
 * Defining the function that initialize the tree
 */
void insereNodeArvore(apontador *no, int valor);
void percorreNoORDEM(apontador no);
void percorreNoPOSORDEM(apontador no);
void percorreNoPREORDEM(apontador no);
bool procuraATno(apontador no, int numeroPesquisar);