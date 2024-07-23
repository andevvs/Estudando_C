//Você foi procurado por uma nutricionista para automatizar o cálculo do Índice de 
//Massa Corpórea (IMC) de seus pacientes. Para isto, crie um programa que solicita e 
//lê o peso e a altura de uma pessoa e apresenta seu IMC com duas casas decimais 
//após a vírgula. O IMC é calculado por meio da seguinte fórmula: 
//𝐼𝑀𝐶=𝑝𝑒𝑠𝑜/𝑎𝑙𝑡𝑢𝑟𝑎^2
#include <stdio.h>

int main(){
    float peso, altura, imc;
    printf("Digite o seu peso e logo apos sua altura.\n");
    scanf("%f %f", &peso, &altura);
    imc=peso/(altura*altura);
    printf("o seu imc foi: %.2f", imc);
    return 0;
}