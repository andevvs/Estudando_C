// Escreva um programa que solicita e lê um número, calcula e exibe o seu cubo.
#include <stdio.h>

int main()
{
    int n;
    printf("digite o numero:");
    scanf("%d", &n);
    printf("o numero ao cubo foi: %d", n * n * n);
    return 0;
}