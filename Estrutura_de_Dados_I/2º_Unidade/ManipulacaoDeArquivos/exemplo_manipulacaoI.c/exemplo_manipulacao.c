#include <stdio.h>
#include <stdlib.h>
#define QTD_ALUNOS 2 //Constante
//Inclusão do modulo do arquivo com as funções utilizadas no código
#include "aluno.c"
#include "aluno.h"

int main(void){
    Aluno * aluno = aloca_aluno();
    preenche(aluno);
    imprime(aluno);
    free(aluno);
    return 0;
}