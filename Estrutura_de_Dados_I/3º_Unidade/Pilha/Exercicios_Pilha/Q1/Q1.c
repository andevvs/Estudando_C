#include "Q1.h"

struct pilha{
    int n;
    int tamanho_vetor;
    float *vet;
};

Pilha* pilha_cria(void){
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->n = 0;
    p->tamanho_vetor = 50;
    p->vet = (float*) malloc(p->tamanho_vetor * sizeof(float));
    return p;
}

void pilha_push(Pilha * p, float v) {
    if (p->n == p->tamanho_vetor) {
        p->tamanho_vetor *= 2;
        p->vet = (float*) realloc(p->vet, p->tamanho_vetor * sizeof(float));
    }
    if (p->vet == NULL){
        printf("Error!");
        exit(1);
    }
    
    p->vet[p->n] = v;
    p->n++;
}

float pilha_pop(Pilha * p){
    float v;
    if(pilha_vazia(p)){
        printf("Pilha Vazia.\n");
        exit(1);
    }
    v = p->vet[p->n-1];
    p->n--;
    return v;
}

int pilha_vazia(Pilha *p){
    return (p->n == 0);
}

void pilha_libera(Pilha *p){
    free (p);
}