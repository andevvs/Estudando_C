/*Questao-4.Vocˆe foi contratado para desenvolver um programa em C que permita armazenar nomes completos
e idades de v´arias pessoas. O programa deve solicitar ao usu´ario o n´umero de pessoas e, em seguida,
permitir que ele digite o nome completo e a idade de cada pessoa.
Seu programa deve alocar mem´oria dinamicamente para armazenar os nomes em uma matriz de
strings, e as idades devem ser armazenadas em um vetor. Ap´os a entrada de todos os nomes e idades,
o programa deve exibir os nomes armazenados.
Aqui est˜ao as especifica¸c˜oes do programa:
– O programa deve come¸car solicitando ao usu´ario o n´umero de pessoas que deseja armazenar.
– Em seguida, o programa deve pedir ao usu´ario que digite o nome completo de cada pessoa.
– Os nomes devem ser armazenados em uma matriz alocada dinamicamente.
– Ap´os o nome, o programa deve solicitar a idade da pessoa.
– As idades devem ser armazenadas em um vetor alocado dinamicamente.
– Ap´os a entrada de todos os nomes e idades, o programa deve exibir os nomes armazenados.
– Certifique-se de tratar adequadamente a aloca¸c˜ao dinˆamica de mem´oria e liberar a mem´oria
alocada corretamente ap´os o uso.
Observa¸c˜ao: O programa deve ser capaz de armazenar at´e 100 nomes completos*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_NOME 100 // Tamanho máximo do nome

int main() {
    int numPessoas;
    printf("Digite o numero de pessoas: ");
    scanf("%d", &numPessoas);

    while (getchar() != '\n');
    char **nomes = (char **)malloc(numPessoas * sizeof(char *));

    for (int i = 0; i < numPessoas; i++) {
        nomes[i] = (char *)malloc(TAMANHO_NOME * sizeof(char));
    }

    int *idades = (int *)malloc(numPessoas * sizeof(int));

    if (nomes == NULL || idades == NULL) {
        printf("Erro na alocação de memoria\n");
        return 1;
    }

    for (int i = 0; i < numPessoas; i++) {
        printf("Digite o nome completo da pessoa %d: ", i + 1);
        fgets(nomes[i], TAMANHO_NOME, stdin);
        int j = 0;
        while (nomes[i][j] != '\0') {
            if (nomes[i][j] == '\n') {
                nomes[i][j] = '\0';
                break;
            }
            j++;
        }
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);
        while (getchar() != '\n');
    }
    printf("\nNomes armazenados:\n");
    for (int i = 0; i < numPessoas; i++) {
        printf("Nome: %s, Idade: %d\n", nomes[i], idades[i]);
    }
    for (int i = 0; i < numPessoas; i++) {
        free(nomes[i]);
    }
    free(nomes);
    free(idades);

    return 0;
}
