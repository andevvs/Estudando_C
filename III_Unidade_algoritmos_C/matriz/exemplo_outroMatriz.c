#include <stdio.h>

int main() {
    int linhas, colunas;

    // Solicita o número de linhas e colunas da matriz
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &colunas);

    // Declara a matriz com os tamanhos fornecidos
    int matriz[linhas][colunas];
    int linha, coluna;

    // Preenchendo a matriz com valores
    printf("\nInsira os valores na matriz %d x %d:\n", linhas, colunas);
    for (linha = 0; linha < linhas; linha++) {
        for (coluna = 0; coluna < colunas; coluna++) {
            printf("Matriz[%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    // Imprimindo a matriz
    printf("\nMatriz inserida:\n");
    for (linha = 0; linha < linhas; linha++) {
        for (coluna = 0; coluna < colunas; coluna++) {
            printf("%d\t", matriz[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
