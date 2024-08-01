/*Questão-2.Escreva um programa para corrigir provas de múltipla escolha. Cada prova tem N
questões e cada questão vale 10/N pontos. Os primeiros dados a serem lidos são o número de
questões e o gabarito da prova. Em seguida, serão lidas as respectivas respostas de um total de
10 alunos matriculados. Calcule e mostre:
a) a nota obtida para cada aluno;
b) a porcentagem de aprovação, sabendo-se que a nota mínima para ser aprovado é 6Escreva um programa para corrigir provas de múltipla escolha. Cada prova tem N
questões e cada questão vale 10/N pontos. Os primeiros dados a serem lidos são o número de
questões e o gabarito da prova. Em seguida, serão lidas as respectivas respostas de um total de
10 alunos matriculados. Calcule e mostre:
a) a nota obtida para cada aluno;
b) a porcentagem de aprovação, sabendo-se que a nota mínima para ser aprovado é 6*/

#include <stdio.h>
#define NUM_ALUNOS 10

float calcularNota(char respostasAluno[], char gabarito[], int numQuestoes) {
    int acertos = 0;
    for (int i = 0; i < numQuestoes; i++) {
        if (respostasAluno[i] == gabarito[i]) {
            acertos++;
        }
    }
    return (acertos * 10.0) / numQuestoes;
}

int main() {
    int numQuestoes;
    printf("Informe o numero de questoes da prova: ");
    scanf("%d", &numQuestoes);
    char gabarito[numQuestoes];
    printf("Informe o gabarito da prova:\n");

    for (int i = 0; i < numQuestoes; i++) {
        printf("Questao %d: ", i + 1);
        scanf(" %c", &gabarito[i]);
    }

    char respostas[NUM_ALUNOS][numQuestoes];
    float notas[NUM_ALUNOS];

    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite as respostas do aluno %d:\n", i + 1);
        for (int j = 0; j < numQuestoes; j++) {
            printf("Questao %d: ", j + 1);
            scanf(" %c", &respostas[i][j]);
        }
        notas[i] = calcularNota(respostas[i], gabarito, numQuestoes);
    }

    int numAprovados = 0;
    printf("\nNotas dos alunos:\n");

    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d: %.2f\n", i + 1, notas[i]);
        if (notas[i] >= 6.0) {
            numAprovados++;
        }
    }

    float porcentagemAprov = (numAprovados / (float)NUM_ALUNOS) * 100.0;
    printf("\nPorcentagem de aprovacao: %.2f%%\n", porcentagemAprov);

    return 0;
}
