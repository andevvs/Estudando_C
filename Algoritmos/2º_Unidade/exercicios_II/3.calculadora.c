#include <stdio.h>

int main(){
    float n1, n2, result;
    char input;
    printf("\tCalculadora Simples:\n\t+\t-\t/\t*");
    printf("\nSelecione a operacao:");
    scanf("%c", &input);
    switch (input)
    {
    case '+':
        printf("Digite os dois numeros para a adicao:\n");
        scanf("%f %f", &n1, &n2);
        result=n1+n2;
        printf("o resultado da adicao foi: %f", result);
        break;
    case '-':
        printf("digite os dois numeros para a subracao:\n");
        scanf("%f %f", &n1, &n2);
        result=n1-n2;
        printf("O resultado da subracao foi: %f", result);
        break;
    case '*':
        printf("digite os dois numeros para a multiplicacao:\n");
        scanf("%f %f", &n1, &n2);
        result=n1*n2;
        printf("o resultado da multiplicacao foi: %f", result);
        break;
    case '/':
    printf("digite os dois numeros para a divisao:\n");
        scanf("%f %f", &n1, &n2);
        result=n1/n2;
        printf("o resultado da divisao foi: %f", result);
        break;
    default: 
    printf("Operacao invalida!");
    
    }
    return 0;
}