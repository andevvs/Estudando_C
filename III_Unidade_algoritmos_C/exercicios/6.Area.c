// Elabore uma função, com retorno, que calcula a área de uma circunferência. Para 
// isto, utilize a seguinte fórmula:𝐴=𝜋𝑟2

#include <stdio.h>

float calcularArea(float raio) {
    float area = 3.14*raio*raio;
    return area;
}

int main() {
    float raio, resultado;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    resultado = calcularArea(raio);
    printf("A area do circuo foi %.1f.\n", resultado);
    return 0;
}
