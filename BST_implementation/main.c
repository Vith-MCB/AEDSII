#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "tree.h"

#define FILE_PATH "..//AEDSII//BST_implementation//"
#define ERROR_FILE "\nError during file read\n"
#define NULL_TERMINATOR 1


bool lerArquivo(Tree *tree, char *filename);

int main() {
    Tree tree;

    inicializaArvore(&tree);

    if (!lerArquivo(&tree, "alunosNotas.txt")) {
        printf(ERROR_FILE);
        return 0;
    }


    printf("Percorre na ordem: \n");
    percorreArvoreORDEM(&tree);

    printf("\n\nPercorre pre-ordem: \n");
    percorreArvorePREORDEM(&tree);

    printf("\n\nPercorre pos-ordem: \n");
    percorreArvorePOSORDEM(&tree);

    printf("\n");
}

bool lerArquivo(Tree *tree, char *filename) {
    char caminhoArquivo[strlen(FILE_PATH) + strlen(filename) + NULL_TERMINATOR];

    strcpy(caminhoArquivo, FILE_PATH);
    strcat(caminhoArquivo, filename);

    FILE *pFile = fopen(caminhoArquivo, "r");

    if (!pFile) {
        return false;
    }

    while (!feof(pFile)) {
        aluno *student = (aluno *) malloc(sizeof(aluno));

        fscanf(pFile, "%s %d %lf", student->nome, &student->matricula, &student->nota);
        inserirNaArvore(tree, student);
    }

    pFile = NULL;

    return true;
}