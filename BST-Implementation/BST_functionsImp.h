#include <stdbool.h>
#include "BST_file.h"

//Creating Pointers struct to use at the tree

typedef struct no *apontador;

typedef struct no {
    aluno student;
    apontador esq, dir;
} no;

typedef struct Tree {
    apontador raiz;
} Tree;

/*
 * Defining the function that initialize the tree
 */

void inicializaArvore(Tree *arvore);

void percorreArvoreORDEM(Tree *arvore);

void percorreArvorePOSORDEM(Tree *arvore);

void percorreArvorePREORDEM(Tree *arvore);

void inserirNaArvore(Tree *arvore, aluno *student);

bool lerArquivo(Tree *tree, char *filename);