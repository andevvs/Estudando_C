#include <stdio.h>
#include <stdlib.h>
#define QTD_ALUNOS 2 //Constante
//Inclusão do modulo do arquivo com as funções utilizadas no código
#include "aluno.c"

int main(void){
    Aluno * aluno = (Aluno*) malloc(sizeof(aluno));
    if (aluno == NULL){
        exit(1);
    };
    preenche(aluno);
    imprime(aluno);
    return 0;
}