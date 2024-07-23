// 8-Elabore uma função, com retorno, que recebe um valor inteiro maior ou igual a zero 
// por parâmetro e retorna o fatorial de tal número.
#include <stdio.h>

unsigned long calcularFatorial(int numero) {
    int i;
    unsigned long fatorial = 1;
    if (numero == 0) {
        return 1;
    }
    for (i = 1; i <= numero; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    int numero;
    printf("Digite um numero inteiro maior ou igual a zero: ");
    scanf("%d", &numero);
    if (numero < 0) {
        printf("Erro: O numero deve ser maior ou igual a zero.\n");
        return 1; 
    }
    unsigned long resultado = calcularFatorial(numero);
    printf("O fatorial de %d e %lu.\n", numero, resultado);

    return 0;
}
