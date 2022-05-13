#include "BST_header.h"

typedef struct Tree {
    apontador *raiz;
} Tree;

void inicializaArvore(Tree *arvore);
void percorreArvoreORDEM(Tree *arvore);
void inserirNaArvore(Tree *arvore, int valor);