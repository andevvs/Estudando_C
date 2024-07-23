#include <stdio.h>

typedef struct funcionario{
    char nome[20];
    float salario;
    long int indentificador;
    char cargo[20];
}Funcionario;

void preenche(Funcionario * servidor){
    printf("Digite o nome:\n");
    scanf("%[^\n]", servidor->nome);
    printf("Digite o salario:\n");
    scanf("%f", &servidor->salario);
    printf("Digite o identificador:\n");
    scanf("%d", &servidor->indentificador);
    printf("Digite o cargo:\n");
    scanf("%[^\n]", &servidor ->cargo);
}