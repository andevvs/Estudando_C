#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

typedef struct aluno{
    int matricula;
    int idade;
    char nome[20];
}Aluno;

Aluno * aloca_aluno(void){
     Aluno * aluno = (Aluno*) malloc(sizeof(aluno));
    if (aluno == NULL){
        exit(1);
    }
    else{
        printf("Aluno alocado");
    }
    return aluno;
}

void preenche(Aluno * aluno){
    printf("Insira o nome do aluno:\t");
    scanf(" %[^\n]", aluno->nome);
    printf("Informe a matricula:\t");
    scanf("%d", &aluno->matricula);
    printf("Informe a idade:\t");
    scanf("%d", &aluno->idade);
}

void imprime(Aluno *aluno) {
    printf("Os nomes cadastrados foram:\n");
    printf("Nome: %s\n", aluno->nome);
    printf("Matricula: %d\n", aluno->matricula);
    printf("Idade: %d\n", aluno->idade);
}
