#include "lista.h"
//Lista para manipular numeros inteiros

struct no{
    int info;
    struct no * prox;
};

No * insere_int(No*lista, int numero){
    No* novo_elemento = (No*) malloc(sizeof(No));
        if (novo_elemento==NULL){
            exit(1);
        }
            novo_elemento->info=numero;
                novo_elemento->prox=lista;
                    return novo_elemento;
}

void imprime_int(No*lista){
    No * contador_lista;
    for(contador_lista=lista; contador_lista!=NULL; contador_lista=contador_lista->prox){
        printf(" %d ", contador_lista->info);
    }
}

void libera_int(No*lista){
    No * contador = lista;
    No * aux;
    while (contador!=NULL){
        free(contador);
        contador = aux;
    }
    
}

No * busca_int(int numero, No* lista){
    No * contador;
    for(contador=lista; contador!=NULL; contador=contador->prox){
        if(contador->info==numero){
            printf("Valor encontrado: %d", contador ->info);
            return contador;
        }
    }
    printf("Valor nao encontrado.");
    return NULL;
}

No * remove_int(No *lista, int numero){
    No * ant; // Guardar o elemento anterior
    No * contador=lista; //Contador para navegar na lista
    //Buscando o elemento a ser removido
    while (contador->info!=numero){
        if(contador=NULL){
            return lista;
        }
        ant = contador;
        contador=contador->prox;
    }
    //o elemento é o primeiro da lista
    if(ant==NULL){
        lista = lista->prox;
    }
    else {
        ant->prox = contador ->prox;
    }
    free(contador);
    return lista;
}