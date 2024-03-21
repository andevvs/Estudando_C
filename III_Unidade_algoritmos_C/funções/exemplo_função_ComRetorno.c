#include <stdio.h>

// Esta função calcula o quadrado de um número inteiro e retorna o resultado.
int calcularQuadrado(int num) {
//int quadrado = num * num;
    return  num * num;
}

int main() {
    int numero, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

// Chama a função calcularQuadrado() e armazena o resultado retornado na variável 'resultado'.
    resultado = calcularQuadrado(numero);
    printf("O quadrado de %d e %d.\n", numero, resultado);
    return 0;
}
