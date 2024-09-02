#include <stdio.h>
#include "Aluno.h"

int main() {
    Aluno aluno1 = criarAluno(123, "Maria", 8.5);
    salvarAlunoEmArquivo("alunos.txt", aluno1);

    Aluno aluno2 = criarAluno(124, "João", 7.8);
    salvarAlunoEmArquivo("alunos.txt", aluno2);

    printf("Alunos cadastrados:\n");
    exibirAlunos("alunos.txt");

    return 0;
}
