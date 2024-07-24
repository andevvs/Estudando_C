#include <stdio.h>

typedef union documento{
    char cpf[12];
    char rg[12];
    char passaporte[8];
    char sus[15];
}Documentos;

typedef struct pessoa{
    char nome[20];
    Documentos documento;
    int idade;
    char genero;
}Pessoa;

void preencher(Pessoa * pessoa){
    printf("Digite seu nome: \n");
    scanf(" %[^\n]", pessoa->nome);
    printf("Qual documento deseja cadastrar?: \n");
    printf("1- CPF\n");
    printf("2- RG\n");
    printf("3-Passaporte\n");
    printf("4-Sus\n");
    int escolha;
    scanf("%d", &escolha);
    switch (escolha){
    case 1:
        printf("Digite seu cpf:\n");
        scanf(" %[^\n]", pessoa->documento.cpf);
        break;
    case 2:
     printf("Digite seu rg:\n");
        scanf(" %[^\n]", pessoa->documento.rg);
        break;
    case 3:
     printf("Digite seu passaporte:\n");
        scanf(" %[^\n]", pessoa->documento.passaporte);
        break;
    case 4:
     printf("Digite seu numero do sus:\n");
        scanf(" %[^\n]", pessoa->documento.sus);
        break;
    default:
    printf("Documento não encontrado.");
    }
    printf("Digite sua idade:\n");
    scanf("%d", &pessoa->idade);
    printf("Informe seu genero(M,F,O):\n");
    scanf(" %c", &pessoa->genero);
}

void imprimirPessoa(Pessoa * pessoa) {
    printf("\nDados da pessoa:\n");
    printf("Nome: %s\n", pessoa->nome);
    printf("Documento: ");
    if (pessoa->documento.rg[0] != '\0') {
        printf("RG: %s\n", pessoa->documento.rg);
    } else if (pessoa->documento.cpf[0] != '\0') {
        printf("CPF: %s\n", pessoa->documento.cpf);
    } else if (pessoa->documento.passaporte[0] != '\0') {
        printf("Passaporte: %s\n", pessoa->documento.passaporte);
    } else if (pessoa->documento.sus[0] != '\0') {
        printf("Numero do SUS: %s\n", pessoa->documento.sus);
    } else {
        printf("Documento nao especificado.\n");
    }

    printf("Idade: %d\n", pessoa->idade);
    printf("Genero: %c\n", pessoa->genero);
}

void atualizarIdade(Pessoa * pessoa, int novaIdade) {
    pessoa->idade = novaIdade;
    printf("Idade atualizada com sucesso!\n");
}


void pessoaMaisVelhaMaisNova(Pessoa pessoas[], int tamanho) {
    if (tamanho <= 0) {
        printf("Vetor vazio!\n");
        return;
    }

    Pessoa maisVelha = pessoas[0];
    Pessoa maisNova = pessoas[0];

    for (int i = 1; i < tamanho; i++) {
        if (pessoas[i].idade < maisVelha.idade) {
            maisVelha = pessoas[i];
        }
        if (pessoas[i].idade > maisNova.idade) {
            maisNova = pessoas[i];
        }
    }

    printf("\nPessoa mais velha:\n");
    printf("Nome: %s, Genero: %c\n", maisVelha.nome, maisVelha.genero);
    printf("\nPessoa mais nova:\n");
    printf("Nome: %s, Genero: %c\n", maisNova.nome, maisNova.genero);
}

int main() {
    Pessoa pessoa1, pessoa2;
    Pessoa pessoas[2]; 
    printf("Preenchendo dados da primeira pessoa:\n");
    preencher(&pessoa1);
    printf("\nPreenchendo dados da segunda pessoa:\n");
    preencher(&pessoa2);
    printf("\nImprimindo dados da primeira pessoa:\n");
    imprimirPessoa(&pessoa1);
    printf("\nImprimindo dados da segunda pessoa:\n");
    imprimirPessoa(&pessoa2);
    atualizarIdade(&pessoa1, 30);
    pessoas[0] = pessoa1;
    pessoas[1] = pessoa2;
    pessoaMaisVelhaMaisNova(pessoas, 2);

    return 0;
}