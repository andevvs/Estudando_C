#ifndef FILA_H
#define FILA_H

//estrutura do tipo Fila
typedef struct fila Fila;

//função para criar a fila
Fila* fila_cria(void);

//função para inserir um elemento na fila
void fila_insere(Fila* f, int v);

//função para remover um elemento na fila
int fila_remove(Fila* f);

//função para checar se a fila esta vazia
int fila_vazia(Fila* f);

//função para checar se a fila esta cheia
int fila_cheia(Fila* f);

//função para liberar a memoria de um elemento na fila
void fila_libera(Fila* f);

//função para imprimir um elemento da fila
void fila_imprime(Fila* f);

//função para incrementar 
int incrementa(int i);

#endif