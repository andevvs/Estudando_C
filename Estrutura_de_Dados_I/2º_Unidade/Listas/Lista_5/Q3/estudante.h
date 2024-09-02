
typedef struct {
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
    float media;
} Estudante;

//função para calcular a media
void calcularMedia(Estudante* estudante);
//função para ordenar os estudantes por media
void ordenarEstudantesPorMedia(Estudante estudantes[], int tamanho);
//função para salvar os resultados
void salvarResultados(char* nomeArquivo, Estudante estudantes[], int tamanho);
//função para carregar os dados do arquivo
void carregarDados(char* nomeArquivo, Estudante estudantes[], int* tamanho);
