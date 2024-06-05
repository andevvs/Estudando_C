#include <stdio.h>
#include <stdlib.h>
//Mudando o tamanho do vetor com a função realloc
int main(void){
    int tamanho, novotamanho;
    printf ("Digite o tamanho do vetor: ");
    scanf("%d", tamanho);
    int * vetor = (int*) calloc(tamanho,sizeof(int));

    printf ("\nDigite um novo tamanho:");
    scanf("%d", &novotamanho);
    vetor = realloc(vetor, novotamanho*sizeof(int));
    return 0;
}
