#include <stdio.h> 

// Define uma união chamada 'documentos' que pode armazenar um CPF ou um RG
typedef union documentos {
    char cpf[12]; // Array de caracteres para armazenar um CPF
    char rg[12];  // Array de caracteres para armazenar um RG
} Documentos;

// Define uma estrutura chamada 'pessoa' que contém um nome, tipo de documento e os documentos
typedef struct pessoa {
    char nome[20];       // Array de caracteres para armazenar o nome
    int tipoDoc;         // Inteiro para armazenar o tipo de documento (1 para CPF, 2 para RG)
    Documentos documento; // União para armazenar o documento (CPF ou RG)
} Pessoa;

// Função para preencher os dados de uma pessoa
void preenche(Pessoa * pessoa) {
    int opcaoDoc;
    printf("Informe o nome: \n");
    scanf(" %[^\n]", pessoa->nome);
    printf("Informe um dos documentos disponíveis: \n");
    printf("1- CPF\n");
    printf("2- RG\n");
    scanf("%d", &opcaoDoc);

    // Define o tipo de documento na estrutura da pessoa
    pessoa->tipoDoc = opcaoDoc;

    // Com base na opção escolhida, lê o documento correspondente
    switch (opcaoDoc) {
        case 1:
            printf("Informe o CPF: \n");
            // Lê o CPF
            scanf(" %[^\n]", pessoa->documento.cpf);
            break;
        case 2:
            printf("Informe o RG: \n");
            // Lê o RG
            scanf(" %[^\n]", pessoa->documento.rg);
            break;
        default:
            printf("Valor inválido! \n");
            break;
    }
}

// Função para imprimir os dados de uma pessoa
void imprime(Pessoa * pessoa) {
    printf("Os dados informados foram: \n");
    printf("Nome: %s \n", pessoa->nome);
    
    // Com base no tipo de documento escolhido, imprime o documento correspondente
    switch (pessoa->tipoDoc) {
        case 1:
            printf("CPF: %s \n", pessoa->documento.cpf);
            break;
        case 2:
            printf("RG: %s \n", pessoa->documento.rg);
            break;
    }
}

int main(void) {
    Pessoa pessoa; // Declara uma variável do tipo 'Pessoa'

    preenche(&pessoa); // Chama a função para preencher os dados da pessoa
    imprime(&pessoa);  // Chama a função para imprimir os dados da pessoa

    return 0; // Retorna 0 indicando que o programa terminou com sucesso
}
