// Faça um programa que solicita e lê temperatura em Fahrenheit, faz a conversão para
// Celsius e exibe tal resultado. Para isto, utilize a seguinte fórmula:
// 𝐶 =(𝐹 − 32)/1,8

#include <stdio.h>

int main()
{
    int cs, f;
    printf("insira a temperatura em fahrenheit:");
    scanf("%d", &f);
    cs = (f - 32) / 1.8;
    printf("a temperatura em celsius foi: %d", cs);
    return 0;
}