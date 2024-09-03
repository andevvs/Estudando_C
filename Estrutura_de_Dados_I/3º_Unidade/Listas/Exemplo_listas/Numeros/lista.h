#include <stdio.h>
#include <stdlib.h>

typedef struct no No;

//função que recebe numeros inteiros de uma lista encadeada
No * insere_int(No*lista, int numero);

//função para imprimir numero
void imprime_int(No*lista);

//funçao para liberar a memoria
void libera_int(No*lista);

//função de busca;
No * busca_int(int numero, No* lista);

//função para remover
No * remove_int(No *lista, int numero);