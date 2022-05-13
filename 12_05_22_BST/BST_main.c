#include "BST_treeHeader.h"


int main(){
    Tree arvore;
    inicializaArvore(&arvore);
    inserirNaArvore(&arvore, 7);
    inserirNaArvore(&arvore, 5);
    inserirNaArvore(&arvore, 4);
    inserirNaArvore(&arvore, 11);

    percorreArvoreORDEM(&arvore);
}
