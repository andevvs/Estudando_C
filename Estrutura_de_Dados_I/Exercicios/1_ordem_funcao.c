/*1.Escreva um programa em C que solicite ao usuario o tamanho de um vetor e, em seguida, aloque
dinamicamente memoria para armazenar esse vetor. Depois disso, peça ao usuario que insira os
elementos do vetor e, por fim, imprima os elementos na ordem inversa.*/

#include <stdio.h>
#include <stdlib.h>

int elementos(int * vetor, int tamanho){
        for(int count=0; count<tamanho; count++){
        scanf("%d", &vetor[count]);
    }
    return 0;
}
void verificar(int *vetor){
    if (vetor==NULL){
        printf("No memory");
        exit(1);
    }
    else{
        printf("Vetor alocado com sucesso\n");
    }
}

void inverso(int * vetor, int tamanho){
    for (int count=tamanho-1; count >= 0; count--){
    printf("%d \t", vetor[count]);
    }
}
int main(void){
    int tamanho;
    int *vetor;
    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &tamanho);
    vetor = (int*) malloc (tamanho*sizeof(int));
    verificar = (vetor);
    printf("Digite os elementos do vetor:\n");
    elementos = (vetor, tamanho);
    printf("Vetor inverso:\n");
    inverso (vetor, tamanho);
    return 0;
}