// Crie um programa que solicita e lê uma temperatura em Celsius, faz a conversão
// para Fahrenheit e exibe tal resultado. Para isto, utilize a seguinte fórmula:
// 𝐹 = (𝐶 × 1,8) + 32
#include <stdio.h>

int main()
{
    int cs, f;
    printf("insira a temperatura em celsius:");
    scanf("%d", &cs);
    f = (cs * 1.8) + 32;
    printf("a temperatura em fahrenheit foi: %d", f);
    return 0;
}