//Elabore um programa que calcula a área de uma circunferência.

#include <stdio.h>

int main(){
    int raio, a;
    float pi=3.14;
    printf("Qual o raio da circunferencia?\n");
    scanf("%d", &raio);
    a=pi*raio*raio;
    printf("a area foi: %d", a);
    return 0;
}