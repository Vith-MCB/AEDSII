#include <limits.h>

typedef struct no *apontador;

typedef struct aluno {
    char nome[CHAR_MAX];
    int matricula;
    double nota;
} aluno;

typedef struct no {
    aluno student;
    apontador esq, dir;
} no;


void insereNodeArvore(apontador *no, aluno *valor);

void percorreNoORDEM(apontador no);

void percorreNoPOSORDEM(apontador no);

void percorreNoPREORDEM(apontador no);
