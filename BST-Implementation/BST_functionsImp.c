#include <stdio.h>
#include <stdlib.h>

#include "BST_functionsImp.h"

/*
 * Insert value at the tree (it checks if the node is = null)
 */
void insereNodeArvore(apontador *no, aluno *valor) {
    if (*no == NULL) {
        *no = (apontador) malloc(sizeof(apontador));

        (*no)->student.nota = (*valor).nota;
        (*no)->esq = NULL;
        (*no)->dir = NULL;
    } else {
        if ((*valor).nota > (*no)->student.nota) {
            insereNodeArvore(&(*no)->dir, valor);
        } else {
            insereNodeArvore(&(*no)->esq, valor);
        }
    }
}

/*
 * This function is used to go through the nodes of the tree
 */
void percorreNoORDEM(apontador no) {
    if ((*no).esq != NULL) {
        percorreNoORDEM((*no).esq);
    }
    printf("{%d}", (*no).student.nota);
    if ((*no).dir != NULL) {
        percorreNoORDEM((*no).dir);
    }
}

void percorreNoPOSORDEM(apontador no) {
    if ((*no).esq != NULL) {
        percorreNoPOSORDEM((*no).esq);
    }
    if ((*no).dir != NULL) {
        percorreNoPOSORDEM((*no).dir);
    }
    printf("{%d}", (*no).student.nota);
}

void percorreNoPREORDEM(apontador no) {
    printf("{%d}", (*no).student.nota);
    if ((*no).esq != NULL) {
        percorreNoPOSORDEM((*no).esq);
    }
    if ((*no).dir != NULL) {
        percorreNoPOSORDEM((*no).dir);
    }
}