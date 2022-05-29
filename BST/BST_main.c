#include "BST_tree.h"


int main(){
    Tree arvore;
    inicializaArvore(&arvore);
    inserirNaArvore(&arvore, 8);
    inserirNaArvore(&arvore, 5);
    inserirNaArvore(&arvore, 9);
    inserirNaArvore(&arvore, 3);
    inserirNaArvore(&arvore, 7);

    printf("Percorre arvore na ordem: \n");
    percorreArvoreORDEM(&arvore);

    printf("\n\nPercorre arvore na pos-ordem: \n");
    percorreArvorePOSORDEM(&arvore);

    printf("\n\nPercorre arvore na pre-ordem: \n");
    percorreArvorePREORDEM(&arvore);
}
