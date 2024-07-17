#include <stdio.h>
#include <stdlib.h>
#define QTD_ALUNOS 2 //Constante
typedef struct aluno{
    int matricula;
    int idade;
    char nome[20];
}Aluno;

void preenche(Aluno * aluno, int tamanho){
    int count;
    for (count=0;count<tamanho;count++){
        printf("Insira o nome do aluno:\t");
        scanf(" %[^\n]", aluno[count].nome);
        printf("Informe a matricula:\t");
        scanf("%d", &aluno[count].matricula);
        printf("Informe a idade:\t");
        scanf("%d", &aluno[count].idade);
    }
}

void imprime(Aluno *aluno, int novo_tamanho) {
    int count;
    printf("Os nomes cadastrados foram:\n");
    for (count = 0; count < novo_tamanho; count++) {
        printf("Nome: %s\n", aluno[count].nome);
        printf("Matricula: %d\n", aluno[count].matricula);
        printf("Idade: %d\n", aluno[count].idade);
    }
}
int main(void){
    Aluno * aluno =(Aluno*) malloc(QTD_ALUNOS*sizeof(Aluno));
    if(aluno==NULL){
        printf("No memory RAM");
        exit(1);
    }
    preenche(aluno, QTD_ALUNOS);

    int novotamanho;
    printf("Digite um novo tamanho do vetor:\n");
    scanf("%d", &novotamanho);
    aluno =(Aluno*) realloc(aluno, novotamanho*sizeof(Aluno));
    if (aluno==NULL){
        printf("No memory RAM");
        exit(1);
    }
    else{
        printf("Vetor realocado!\n");
    }
    preenche(aluno, novotamanho);
    imprime(aluno, novotamanho);
    return 0;   
}