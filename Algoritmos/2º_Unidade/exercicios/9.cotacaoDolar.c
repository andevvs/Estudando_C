// A cotação do dólar influencia na economia brasileira e muitos economistas se 
//encarregam de calcular, muitas vezes de forma manual, o valor do real em dólar. 
//Você foi contratado por um economista para automatizar a conversão de reais em 
//dólares. Crie um programa que solicita e lê a cotação do dólar atual e o valor em real 
//a ser convertido e, em seguida, calcula e exibe o resultado da conversão. 
#include <stdio.h>

int main()
{
    float valorD, valorR, result;
    printf("Qual o valor do dolar atual?:");
    scanf("%f", &valorD);
    printf("Qual o valor a ser convertido em reais?:");
    scanf("%f", &valorR);
    result=valorR*valorD;
    printf("o valor de dolares em reais foi: %f", result);
    return 0;
}