#include "BST_tree.h"


int main(){
    int pesquisar;

    Tree arvore;
    inicializaArvore(&arvore);
    inserirNaArvore(&arvore, 5);
    inserirNaArvore(&arvore, 3);
    inserirNaArvore(&arvore, 7);
    inserirNaArvore(&arvore, 2);
    inserirNaArvore(&arvore, 4);
    inserirNaArvore(&arvore, 1);
    inserirNaArvore(&arvore, 6);

    printf("Percorre arvore na ordem: \n");
    percorreArvoreORDEM(&arvore);

    printf("\n\nPercorre arvore na pos-ordem: \n");
    percorreArvorePOSORDEM(&arvore);

    printf("\n\nPercorre arvore na pre-ordem: \n");
    percorreArvorePREORDEM(&arvore);

    encontraMaiorNaArvore(&arvore);

    printf("\nQual numero pesquisar? \n");
    scanf("%d",&pesquisar);

    if(naArvore(&arvore, pesquisar) == 1 ){
        printf("\nO elemento %d esta na arvore!\n", pesquisar);
    }
    else {
        printf("\nO elemento %d não se encontra na arvore!\n",pesquisar);
    }


}
