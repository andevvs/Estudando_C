//Arquivo Cabeçalho para tipo abstrato de dados (TAD) Aluno

//Tipo exportado
typedef struct aluno Aluno;

/*Função que aloca dinamicamente uma struct aluno na memoria*/
Aluno * aloca_aluno(void);

/*Função para preencher uma struct Aluno. 
A função recebe um endereço para aluno*/
void preenche(Aluno * aluno);

/*Função para imprimir uma struct Aluno*/
void imprime(Aluno * aluno);
