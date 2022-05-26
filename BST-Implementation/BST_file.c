#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "BST_functionsImp.h"

#define FILE_PATH "..//BST-Implementation//"
#define NULL_TERMINATOR 1

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