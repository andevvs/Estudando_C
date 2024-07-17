#include <stdio.h>
#define QTD_ALUNOS 5 //Constante
typedef struct aluno{
    int matricula;
    int idade;
    char nome[20];

}Aluno;

int main(void){
    Aluno aluno [QTD_ALUNOS];
    int count;
    for (count=0;count<QTD_ALUNOS;count++){
        printf("Insira o nome do aluno:\t");
        scanf(" %[^\n]", aluno[count].nome);
        printf("Informe a matricula:\t");
        scanf("%d", &aluno[count].matricula);
        printf("Informe a idade:\t");
        scanf("%d", &aluno[count].idade);
    }
    return 0;   
}