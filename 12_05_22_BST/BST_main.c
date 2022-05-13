#include "BST_tree.h"


int main(){
    Tree arvore;
    inicializaArvore(&arvore);
    inserirNaArvore(&arvore, 13);
    inserirNaArvore(&arvore, 8);
    inserirNaArvore(&arvore, 12);
    inserirNaArvore(&arvore, 5);
    inserirNaArvore(&arvore, 18);
    inserirNaArvore(&arvore, 8);
    inserirNaArvore(&arvore, 6);
    inserirNaArvore(&arvore, 17);

    printf("Percorre arvore na ordem: \n");
    percorreArvoreORDEM(&arvore);

    printf("\n\nPercorre arvore na pos-ordem: \n");
    percorreArvorePOSORDEM(&arvore);

    printf("\n\nPercorre arvore na pre-ordem: \n");
    percorreArvorePREORDEM(&arvore);
}
