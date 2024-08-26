#include <stdio.h>
#include <time.h>

int encontrarMaior(int vet[],int tamanho){
    int maior = vet[0];
    for (int i = 0; i < tamanho; i++){
        if (vet[i] > maior){
            maior = vet [i];
        }
    }
    return maior;
}

int encontrarMaiorDivEConquista(int vet[], int esq, int dir){
    if (esq == dir){
    return vet[esq];
    }
    int mid = (esq + dir) / 2 ;
    int maiorEsq = encontrarMaiorDivEConquista(vet, esq, mid);
    int maiorDir = encontrarMaiorDivEConquista(vet, mid + 1, dir);
    return (maiorEsq > maiorDir) ? maiorEsq : maiorDir ;
}

int main() {
       int tamanho = 100000;
       int vet[tamanho];

       clock_t inicio = clock();
       int maior1 = encontrarMaior(vet, tamanho);
       clock_t fim = clock();
       double tempo1 = (double)(fim - inicio) / CLOCKS_PER_SEC;
       printf("Tempo O(n): %f segundos\n", tempo1);

       inicio = clock();
       int maior2 = encontrarMaiorDivEConquista(vet, 0, tamanho - 1);
       fim = clock();
       double tempo2 = (double)(fim - inicio) / CLOCKS_PER_SEC;
       printf("Tempo O(n log n): %f segundos\n", tempo2);

       return 0;
}