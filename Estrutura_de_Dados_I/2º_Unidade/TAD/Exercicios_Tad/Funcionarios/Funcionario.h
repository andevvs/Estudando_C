#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100 //valor máximo de funcionários

//definindo a struct Funcionario
typedef struct funcionario Funcionario;

//função par alocar dinamicamente um funcionario
Funcionario **aloca_funcionarios();
//função para liberar a memoria alocada
void libera_funcionario(Funcionario **funcionarios, int qnt);
//função para buscar um funcionario
Funcionario *busca_funcionario(Funcionario **funcionarios, int id, int qnt);
//função para adicionar um funcionario
Funcionario **adiciona_funcionario(Funcionario **funcionarios, char *nome, int id, float salario, int *qnt);
//função para remover um funcionario
Funcionario **remover_funcionario(Funcionario **funcionarios, int id, int *qnt);
//função para listar os funcionarios adicionados
void listar_funcionarios(Funcionario **funcionarios, int qnt);


