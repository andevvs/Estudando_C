#include <stdio.h>
#include "Estudante.h"

#define MAX_ESTUDANTES 100

int main() {
    Estudante estudantes[MAX_ESTUDANTES];
    int tamanho = 0;

    carregarDados("entrada.txt", estudantes, &tamanho);
    ordenarEstudantesPorMedia(estudantes, tamanho);
    salvarResultados("resultados.txt", estudantes, tamanho);

    printf("Resultados salvos em 'resultados.txt'.\n");

    return 0;
}
