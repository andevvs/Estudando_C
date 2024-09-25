#include <stdio.h>
#include "Q1b.h"

int main() {
    Pilha* p = pilha_cria();
    if (pilha_vazia(p)) {
        printf("a Pilha esta vazia.\n");
    }
            pilha_push(p, 10.0);
            pilha_push(p, 20.0);
            pilha_push(p, 30.0);
    if (!pilha_vazia(p)) {
        printf("a Pilha nao esta mais vazia.\n");
    }
        printf("Elemento removido: %.2f\n", pilha_pop(p));
        printf("Elemento removido: %.2f\n", pilha_pop(p));
        printf("Elemento removido: %.2f\n", pilha_pop(p));
        if (pilha_vazia(p)) {
            printf("a Pilha esta vazia.\n");
            }
    pilha_libera(p);
    
    return 0;
}
