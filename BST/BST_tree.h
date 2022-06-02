#include "BST_functions.h"

typedef struct Tree {
    apontador raiz;
} Tree;

void inicializaArvore(Tree *arvore);

void percorreArvoreORDEM(Tree *arvore);

void percorreArvorePOSORDEM(Tree *arvore);

void percorreArvorePREORDEM(Tree *arvore);

void inserirNaArvore(Tree *arvore, int valor);

bool naArvore(Tree *arvore, int numero);