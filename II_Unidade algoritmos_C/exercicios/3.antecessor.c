// Todos os números naturais possuem antecessor, que é o número que antecede
//(anterior) um valor específico, e sucessor, que é o número que sucede (posterior) um
// valor específico. Sabendo disso, implemente um programa que solicita ao usuario a
// entrada de um número inteiro e apresenta seu antecessor e sucessor.
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;
    printf("Escreva um numero:");
    scanf("%d", &numero);
    printf("o antecessor do numero escrito é: %d", numero - 1);
    printf("\no antecessor do numero escrito foi: %d", numero + 1);
    return 0;
}