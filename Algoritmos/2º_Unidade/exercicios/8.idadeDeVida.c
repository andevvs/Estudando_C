// Implemente um programa que solicita ao usuário a sua idade e calcula quantos dias
// de vida, aproximadamente, ele já viveu. Para simplificar o seu trabalho, ignore os
// anos bissextos e use somente a idade, mas deixe o usuário ciente de que o resultado
// apresentado é um valor aproximado.
#include <stdio.h>

int main()
{
    int idd;
    printf("Digite sua idade:");
    scanf("%d", &idd);
    idd = idd * 365; 
    printf("Sua idade aproximada em dias foi: %d", idd);
    return 0;
}