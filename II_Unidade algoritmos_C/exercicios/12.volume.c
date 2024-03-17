//Faça um programa para calcular o volume de uma caixa retangular

#include <stdio.h>

int main(){
    int volume, lar, com, alt;
    printf("Digite o comprimento, a largura e a altura em ordem:\n");
    scanf("%d %d %d", &lar, &com, &alt);
    volume=com*lar*alt;
    printf("o volume da caixa foi: %d", volume);
    return 0;
}