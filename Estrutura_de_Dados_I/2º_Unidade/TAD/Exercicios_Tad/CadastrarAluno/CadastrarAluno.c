#include <CadastrarAluno.h>

struct aluno{
    int matricula;
    char nome[50];
    float media;
};

Aluno criarAluno(int matricula, char nome[], float media){
    Aluno aluno;
    aluno.matricula = matricula;
    aluno.media = media;
    strcpy(aluno.nome, nome);
    return aluno;

}

void salvarAlunoEmArquivo(char nome_do_arquivo[], Aluno aluno){
    FILE *arq = fopen(nome_do_arquivo, "a");
    fprintf(arq, "%d\t%s\t%f\n", aluno.matricula, aluno.nome, aluno.media);
    fclose(arq);
}