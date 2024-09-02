#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Fruta {
    char nome[20]; // nome da fruta
    struct Fruta* proxima; // endereço da próxima fruta
};

// Função para criar e encadear os elementos da lista
struct Fruta* insere(struct Fruta* fruta, char nome[20]) {
    /*A função recebe como parâmetros: 
    struct Fruta* fruta: o endereço da lista de fruta (nossa lista existente)
    char nome[20]: o nome da fruta que será inserida na lista    
    */
    struct Fruta* novaFruta = (struct Fruta*)malloc(sizeof(struct Fruta));
    strcpy(novaFruta->nome, nome);
    novaFruta->proxima = fruta;
    return novaFruta;
}

// Nossa main pode ser simplificada para:
int main() {
    // Criar os elementos da lista
    struct Fruta* fruta = NULL; // lista vazia
    fruta = insere(fruta, "maçã"); // insere a fruta maçã na lista
    fruta = insere(fruta, "banana"); // insere a fruta banana na lista
    fruta = insere(fruta, "laranja"); // insere a fruta laranja na lista

    // Liberar a memória alocada
    free(fruta);

    return 0;
    }