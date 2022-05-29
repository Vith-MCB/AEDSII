#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "tree.h"

#define FILE_PATH "..//BST-Implementation//"
#define ERROR_FILE "\nError during file read"
#define NULL_TERMINATOR 1


bool lerArquivo(Tree *tree, char *filename);

int main() {
    Tree tree;

    inicializaArvore(&tree);

    if (!lerArquivo(&tree, "alunosNotas")) {
        printf(ERROR_FILE);
    }


    printf("In-Order Traversal\n");
    percorreArvoreORDEM(&tree);

    printf("\n\nPre Order Traversal\n");
    percorreArvorePREORDEM(&tree);

    printf("\n\nPost Order Traversal\n");
    percorreArvorePOSORDEM(&tree);

    printf("\n");
}

bool lerArquivo(Tree *tree, char *filename) {
    char caminhoArquivo[strlen(FILE_PATH) + strlen(filename) + NULL_TERMINATOR];

    strcpy(caminhoArquivo, FILE_PATH);
    strcpy(caminhoArquivo, filename);

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