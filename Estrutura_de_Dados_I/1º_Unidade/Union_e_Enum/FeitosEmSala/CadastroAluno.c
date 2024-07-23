#include <stdio.h>
#include <string.h>

#define CPF 1
#define RG 2
#define SUS 3
#define TITULO_ELEITOR 4
#define PASSAPORTE 5

typedef union {
    char cpf[12];  
    char rg[10];   
    char sus[15];  
    char titulo_eleitor[13];  
    char passaporte[20];
} Documentos;

typedef struct {
    char nome[100];
    int matricula;
    Documentos documentos;
    int tipo_documento; 
} Aluno;

void preencher(Aluno *aluno) {
    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", aluno->nome);
    printf("Digite a matricula do aluno: ");
    scanf("%d", &aluno->matricula);
    printf("Informe o tipo de documento para o Cadastro:\n-----------------\n");
    printf("1. CPF\n2. RG\n3. SUS\n4. Titulo de Eleitor\n5. Passaporte\n-----------------\n");
    scanf("%d", &aluno->tipo_documento);

    switch (aluno->tipo_documento) {
        case CPF:
            printf("\nInsira seu CPF: ");
            scanf(" %s", aluno->documentos.cpf);
            break;
        case RG:
            printf("\nInsira seu RG: ");
            scanf(" %s", aluno->documentos.rg);
            break;
        case SUS:
            printf("\nInsira seu Numero do SUS: ");
            scanf(" %s", aluno->documentos.sus);
            break;
        case TITULO_ELEITOR:
            printf("\nInsira seu Titulo de Eleitor: ");
            scanf(" %s", aluno->documentos.titulo_eleitor);
            break;
        case PASSAPORTE:
            printf("\nInsira seu Passaporte: ");
            scanf(" %s", aluno->documentos.passaporte);
            break;
        default:
            printf("\nOpção invalida.\n");
            return;
    }
}

void imprimir(Aluno *aluno) {
    printf("\nAluno Cadastrado!:\n");
    printf("\nDados do Aluno:\n\n");
    printf("Nome: %s\n", aluno->nome);
    printf("Matricula: %d\n", aluno->matricula);

    switch (aluno->tipo_documento) {
        case CPF:
            printf("CPF: %s\n", aluno->documentos.cpf);
            break;
        case RG:
            printf("RG: %s\n", aluno->documentos.rg);
            break;
        case SUS:
            printf("SUS: %s\n", aluno->documentos.sus);
            break;
        case TITULO_ELEITOR:
            printf("Titulo de Eleitor: %s\n", aluno->documentos.titulo_eleitor);
            break;
        case PASSAPORTE:
            printf("Passaporte: %s\n", aluno->documentos.passaporte);
            break;
        default:
            printf("Documento nao especificado.\n");
            break;
    }
}

int main() {
    Aluno aluno;
    preencher(&aluno);
    imprimir(&aluno);
    return 0;
}
