#include "disciplina.h"

typedef struct aluno Aluno;


//função para cadastrar o aluno
Aluno * cria_aluno(char nome[], int matricula);

//função para matricular a disciplina
void matricula_disciplina(Aluno * aluno, Disciplina * disciplina);

//função para excluir o aluno
void exclui_aluno(Aluno * aluno);
