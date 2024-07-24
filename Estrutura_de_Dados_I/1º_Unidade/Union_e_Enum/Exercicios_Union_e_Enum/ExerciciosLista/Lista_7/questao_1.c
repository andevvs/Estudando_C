/*
1.Escreva um programa que implementa uma struct Pessoa com os campos nome, idade e gˆenero. O
genero deve ser armazenado como um enum com os valores MASCULINO e FEMININO. O programa
deve ler os dados de uma pessoa e imprimir os dados da pessoa.
*/

#include <stdio.h>

typedef enum {
    MASCULINO,
    FEMININO
}Genero;

typedef struct {
    char nome[50];
    int idade;
    Genero genero;
}Pessoa;

void preencher(Pessoa *p) {
    printf("Informe seu nome:\n");
    scanf(" %[^\n]", p->nome);
    printf("Informe sua idade:\n");
    scanf("%d", &(p->idade));
    printf("Informe seu genero (0 para masculino, 1 para feminino):\n");
    scanf("%d", (int*)&(p->genero));
}

void imprimir(Pessoa *p) {
    printf("\n----------------\n");
    printf("Nome: %s \n", p->nome);
    printf("Idade: %d \n", p->idade);
    printf("Genero: %s \n", p->genero == MASCULINO ? "Masculino" : "Feminino");
    printf("----------------");
}

int main(void) {
    Pessoa pessoa;
    preencher(&pessoa);
    imprimir(&pessoa);

    return 0;
}