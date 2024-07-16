#include <stdio.h>
typedef struct curso {
    char nome[20];
    int cod;
} Curso;

typedef struct aluno {
    int mat, idade;
    char nome[20];
    Curso c;
} Aluno;

int main (void){
    Aluno a;
    printf("Digite o nome:");
    scanf("%[^\n]", a.nome);
    printf("Informe o Curso:");
    scanf("%[^\n]", a.c.nome);
    printf("informe o codigo do curso:");
    scanf("%d", &a.c.cod);

    return 0;
}