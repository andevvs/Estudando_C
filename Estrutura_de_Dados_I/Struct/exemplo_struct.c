/*Exemplo na pratica:*/

#include <stdio.h>

// definição da struct Pessoa
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    // declaração de uma variável do tipo Pessoa
    struct Pessoa pessoa1;
    // inicializando os campos da struct manualmente
    char nome[] = "João";
    for (int i = 0; i < sizeof(nome); i++) {
        pessoa1.nome[i] = nome[i];
    }
    pessoa1.idade = 30;
    pessoa1.altura = 1.75;
    // exibindo os valores dos campos da struct
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Altura: %.2f\n", pessoa1.altura);

    return 0;
}

