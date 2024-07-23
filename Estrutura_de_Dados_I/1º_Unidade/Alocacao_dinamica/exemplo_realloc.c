#include <stdio.h>
#include <stdlib.h>
//Mudando o tamanho do vetor com a função realloc
int main(void){
    int tamanho, novotamanho;
    printf ("Digite o tamanho do vetor: ");
    scanf("%d", tamanho);
    int * vetor = (int*) calloc(tamanho,sizeof(int));
     if (vetor==NULL){
        exit(1);
    }

    printf ("\nDigite um novo tamanho:");
    scanf("%d", &novotamanho);
    vetor = (int*) realloc(vetor, novotamanho*sizeof(int));
    if (vetor==NULL){
        exit(1);
    }
    
    free(vetor);
    return 0;
}
