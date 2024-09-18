#include "fruta.h"

struct fruta{
    char nome[50];
    float valorPorKg;
};

struct  no{
    Fruta * fruta;
    struct no *ant;
    struct no *prox;
};

No * criaNo(char * nomeDaFruta, float valorPorKgDaFruta){
    No * nova_fruta = (No*) malloc(sizeof(No));
        nova_fruta->fruta = (Fruta*) malloc(sizeof(Fruta));
        if (nova_fruta == NULL || nova_fruta->fruta==NULL){
            printf("No Memory!");
            exit(1);
        }
            else{
            printf("Memoria alocada!\n");
                strcpy(nova_fruta->fruta->nome, nomeDaFruta);
                    nova_fruta->fruta->valorPorKg = valorPorKgDaFruta;
                    nova_fruta->prox = NULL;
                    nova_fruta->ant = NULL;
    }
    return nova_fruta;
};

No * InserirNoInicio(No * lista, char * nomeDaFruta, float valorPorKg){
     No * nova_fruta = criaNo(nomeDaFruta, valorPorKg);
     if (lista== NULL){
        lista = nova_fruta;
     }
        else{
         nova_fruta->prox = lista;
            lista->ant = nova_fruta;   
        }
    return nova_fruta;
}

void exibirListaDeFrutas(No * lista){
    if(!lista){ //verifica se a lista esta vazia
        printf("Lista vazia! Sem Frutas cadastradas...\n");
        exit(1);
    }
        No * contador = lista;
        while (contador!=NULL){
            printf("Fruta: %s, Valor (Kg): R$ %.2f \n", 
            contador ->fruta->nome, contador->fruta->valorPorKg);
                    contador = contador ->prox;
        }
        
}
