// Faça um programa que solicita e lê dois números, calcula e exibe o dobro do
// primeiro e o triplo do segundo.
#include <stdio.h>

int main()
{
    int n1, n2;
    printf("\nescreva o primeiro e o segundo numero:");
    scanf("%d %d", &n1, &n2);
    printf("o dobro do primeiro foi: %d", n1 * 2);
    printf("\no triplo do segundo foi: %d", n2 * 3);
    return 0;
}