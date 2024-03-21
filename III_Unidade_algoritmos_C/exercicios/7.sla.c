// 7-Faça uma função, com retorno, para calcular o valor do volume de uma caixa 
// retangular, utilizando a seguinte fórmula:
// 𝑣𝑜𝑙𝑢𝑚𝑒 = 𝑐𝑜𝑚𝑝𝑟𝑖𝑚𝑒𝑛𝑡𝑜 × 𝑙𝑎𝑟𝑔𝑢𝑟𝑎 × 𝑎𝑙𝑡𝑢𝑟a
#include <stdio.h>

float calcularVolume(float comp, float larg, float alt) {
    float volume = comp*larg*alt;
    return volume;
}

int main() {
    float volume, comp, larg, alt;
    printf("Digite o comprimento: ");
    scanf("%f", &comp);
     printf("Digite a largura: ");
    scanf("%f", &larg);
     printf("Digite a altura: ");
    scanf("%f", &alt);
    volume = calcularVolume(comp, larg, alt);
    printf("O Volume foi %.1f.\n", volume);
    return 0;
}
