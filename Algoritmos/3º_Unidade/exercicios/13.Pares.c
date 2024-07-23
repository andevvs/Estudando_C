#include <stdio.h>

int main() {
    int vetor[10];
    int soma = 0;
    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            soma += vetor[i];
        }
    }
    printf("A soma dos números pares no vetor é: %d\n", soma);
    return 0;
}
