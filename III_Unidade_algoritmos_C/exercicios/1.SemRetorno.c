//1-Implemente uma função, sem retorno, que recebe um valor inteiro por parâmetro e 
//informa se é, ou não, igual a zero.
#include <stdio.h>

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
    verifica(p);
    return(0);
}