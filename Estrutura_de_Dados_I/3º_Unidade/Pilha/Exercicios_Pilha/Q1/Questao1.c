#include "Q1.c"

int main(void){
    Pilha * pilha = pilha_cria();
    int i;
    for(i = 0; i <150; i++){
        pilha_push(pilha, i);
    }
    while (!pilha_vazia(pilha)){
        printf("%2.f ", pilha_pop(pilha));
    }
    printf("\n");
    pilha_libera(pilha);
    
    return 0;
}   