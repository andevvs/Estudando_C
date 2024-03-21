int main(){
    int vetor [5] = {0,0,0,0,0};
    int i;

    for (i = 0; i < 5; i++){
    printf("Insira o elemento da posicao %d:", i);
    scanf("%d", &vetor[i]);
    }
      for (i = 0; i < 5; i++){
    printf(" %d ", vetor[i]);
    }
    return(0);
}