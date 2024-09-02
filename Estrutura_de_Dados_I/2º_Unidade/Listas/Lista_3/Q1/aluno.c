#include <stdio.h>
#include <string.h>
#include "Aluno.h"

Aluno criarAluno(int matricula, char nome[], float media) {
    Aluno novoAluno;
    novoAluno.matricula = matricula;
    strcpy(novoAluno.nome, nome);
    novoAluno.media = media;
    return novoAluno;
}

void salvarAlunoEmArquivo(char* nomeArquivo, Aluno aluno) {
    FILE *arquivo = fopen(nomeArquivo, "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    fprintf(arquivo, "%d %s %.2f\n", aluno.matricula, aluno.nome, aluno.media);
    fclose(arquivo);
}

void exibirAlunos(char* nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    Aluno aluno;
    while (fscanf(arquivo, "%d %s %f", &aluno.matricula, aluno.nome, &aluno.media) != EOF) {
        printf("Matricula: %d, Nome: %s, Media: %.2f\n", aluno.matricula, aluno.nome, aluno.media);
    }
    fclose(arquivo);
}
