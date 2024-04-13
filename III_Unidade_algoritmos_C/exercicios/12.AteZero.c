#include <stdio.h>

int main(){
    int vet[20];
    int tamanho= 0;
    int valor;
    int i;
    printf("Digite os Elementos do vetor (0 para parar):\n");
    do{
    scanf("%d", &valor);
    if (valor != 0){
        vet[tamanho]= valor;
        tamanho++;
    }
  } while (valor!=0);
     printf("Digite um numero para procurar no vetor: ");
    scanf("%d", &valor);
 for (i = 0; i < tamanho; i++) {
        if (vet[i] == valor) {
            printf("O numero %d esta presente na posicao %d do vetor.\n", valor, i);
            break;
        }
    }
        if (i == tamanho) {
        printf("O numero %d nao esta presente no vetor.\n", valor);
    }

    return 0;
}