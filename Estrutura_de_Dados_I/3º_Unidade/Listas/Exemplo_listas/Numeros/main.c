#include "lista.c"
#include <stdlib.h>

int main(){
    No * lista = NULL; // lista vazia
    //Inserindo numeros na lista
    lista = insere_int(lista,3);
    lista = insere_int(lista,1);
    lista = insere_int(lista,2);
    No * numero = busca_int(3, lista);
    //Imprimindo a lista
    imprime_int(lista);
    libera_int(lista);
}