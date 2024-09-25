#ifndef PILHA_H
#define PILHA_H

#include <stdio.h>
#include <stdlib.h>

typedef struct pilha Pilha;

Pilha* pilha_cria(void);

void pilha_push(Pilha * p, float v);

int pilha_vazia(Pilha *p);

float pilha_pop(Pilha * p);

void pilha_libera(Pilha *p);

#endif