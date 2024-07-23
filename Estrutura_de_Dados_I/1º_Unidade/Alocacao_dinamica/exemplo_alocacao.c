#include <stdio.h>
#include <stdlib.h>

/* A alocação dinâmica é feita através da função malloc ou calloc. 

int *x = malloc(5 * sizeof(int));

ou, com a função calloc

int *x = calloc(5, sizeof(int));

A diferenciação entre as duas funções é que a função calloc inicializa cada posição do vetor com zeros.
*/
float * cria_vetor(int tamanho){
    //função para criar o vetor
    float * vetor = (float*) malloc (tamanho*sizeof(float));
    if(vetor==NULL){
        printf("Sem memoria\n");
        exit(1);
    }
    else{
        printf("Vetor Alocado!\n");
    }
    return vetor;
}

void ler_vetor(float * vetor, int tamanho){
    //funcao para ler valores de um vetor de numeros reais
    printf("Informe os valores para o vetor: \t");
      for (int index = 0; index < tamanho; index++){
        scanf("%f", &vetor[index]);
    }
}

void imprime_vetor(float * vetor, int tamanho){
    //função para imprimir o vetor
    for (int index = 0; index < tamanho; index++)
    {
        printf("%.2f\t", vetor[index]);
    }
    printf("\n");
}

int main(void){
    int tamanho = 5;
    float * vetor = cria_vetor(tamanho);
    //chamada das funçoes ler e imprima
    ler_vetor(vetor, tamanho);
    imprime_vetor(vetor, tamanho);
    //liberar memoria
    free(vetor);
    return 0;
}