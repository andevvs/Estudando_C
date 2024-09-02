
typedef struct {
    int matricula;
    char nome[50];
    float media;
} Aluno;

//função para cadastrar o aluno
Aluno criarAluno(int matricula, char nome[], float media);

//função para salvar o aluno em arquivo
void salvarAlunoEmArquivo(char* nomeArquivo, Aluno aluno);

//função para exibir os alunos cadastrados
void exibirAlunos(char* nomeArquivo);
