#include <stdio.h>
#include <stdlib.h>
#include "Q1b.h"

struct no {
    float valor;
    struct no* prox;
};

struct pilha {
    No* prim;
};

Pilha* pilha_cria(void) {
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    if (p == NULL) {
        printf("No Memory!\n");
        exit(1);
    }
    p->prim = NULL;
    return p;
}

void pilha_push(Pilha* p, float v) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) {
        printf("No Memory!\n");
        exit(1);
    }
    novo->valor = v;
    novo->prox = p->prim;
    p->prim = novo;
}

float pilha_pop(Pilha* p) {
    if (pilha_vazia(p)) {
        printf("Pilha vazia!\n");
        exit(1); 
    }
    No* temp = p->prim;
    float valor = temp->valor;
    p->prim = temp->prox;
    free(temp);
    return valor;
}

int pilha_vazia(Pilha* p) {
    return (p->prim == NULL);
}

void pilha_libera(Pilha* p) {
    No* atual = p->prim;
    while (atual != NULL) {
        No* temp = atual->prox;
        free(atual);
        atual = temp;
    }
    free(p);
}
