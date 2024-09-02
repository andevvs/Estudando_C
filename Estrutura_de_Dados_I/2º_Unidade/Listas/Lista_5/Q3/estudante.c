#include <stdio.h>
#include <string.h>
#include "estudante.h"

void calcularMedia(Estudante* estudante) {
    estudante->media = (estudante->nota1 + estudante->nota2 + estudante->nota3) / 3;
}

void ordenarEstudantesPorMedia(Estudante estudantes[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (estudantes[j].media < estudantes[j + 1].media) {
                Estudante temp = estudantes[j];
                estudantes[j] = estudantes[j + 1];
                estudantes[j + 1] = temp;
            }
        }
    }
}

void salvarResultados(char* nomeArquivo, Estudante estudantes[], int tamanho) {
    FILE* arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    for (int i = 0; i < tamanho; i++) {
        fprintf(arquivo, "%s %.2f\n", estudantes[i].nome, estudantes[i].media);
    }
    fclose(arquivo);
}

void carregarDados(char* nomeArquivo, Estudante estudantes[], int* tamanho) {
    FILE* arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    int i = 0;
    while (fscanf(arquivo, "%s %f %f %f", estudantes[i].nome, &estudantes[i].nota1, &estudantes[i].nota2, &estudantes[i].nota3) != EOF) {
        calcularMedia(&estudantes[i]);
        i++;
    }
    *tamanho = i;
    fclose(arquivo);
}
