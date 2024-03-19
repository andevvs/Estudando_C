#include <stdio.h>

// Declaração da função para calcular a soma
int soma(int a, int b){
    
    return a + b;}

int main(){
    int num1 = 5;
    int num2 = 3;

// Chamada da função e atribuição do resultado a uma variável
    int resultado = soma(num1, num2);

// Impressão do resultado
    printf("A soma de %d e %d e: %d\n", num1, num2, resultado);

    return 0;
}
