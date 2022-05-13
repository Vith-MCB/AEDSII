#include "BST_treeHeader.h"


int main(){
    Tree arvore;
    inicializaArvore(&arvore);
    inserirNaArvore(&arvore, 7);
    inserirNaArvore(&arvore, 5);
    inserirNaArvore(&arvore, 4);
    inserirNaArvore(&arvore, 11);
    inserirNaArvore(&arvore, 12);
    inserirNaArvore(&arvore, 8);
    inserirNaArvore(&arvore, 6);
    inserirNaArvore(&arvore, 17);

    percorreArvoreORDEM(&arvore);
}
