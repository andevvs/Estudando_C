#include <stdio.h>

// Declaração da função 
void verifica(int p){
    if(p == 0){
        printf("Igual a zero");
    }
    else{
        printf("Diferente de zero");
    }
}

int main(){
    int p;
    printf("Digite um valor inteiro:");
    scanf("%d", &p);
// Chamada da função 
    verifica(p);
    return(0);
}