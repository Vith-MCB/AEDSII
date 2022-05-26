#include <stdio.h>

#include "BST_treeImp.h"

int main() {
    Tree arvore;
    inicializaArvore(&arvore);
    int impressao;
    char nomeArquivo;


    scanf("%s",&nomeArquivo);


    printf("Qual ordem devera ser impressa?");
    printf("Ordem [0] || Pos [1] || Pre [2]\n");

    if (!scanf("%d", &impressao)) {
        printf("Percorre arvore na ordem: \n");
        percorreArvoreORDEM(&arvore);

        printf("\n\nPercorre arvore na pos-ordem: \n");
        percorreArvorePOSORDEM(&arvore);

        printf("\n\nPercorre arvore na pre-ordem: \n");
        percorreArvorePREORDEM(&arvore);
    }
}
