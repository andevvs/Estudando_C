#include <stdio.h>

int main(){
    int vetor [5] = {1,2,3,4,5};
    int i;

    printf("Conteudo da Primeira posicao: %d. \n", vetor [0]);
    printf("Conteudo de todo o vetor: %d %d %d %d %d\n",vetor [0], vetor [1], vetor [2], vetor [3], vetor [4] );
    //Imprimindo os indices do vetor com laço for
    for (i = 0; i < 5; i++){
    printf("%d ", vetor[i]);
    }
    return(0);
}