//2-Crie uma função, sem retorno, que recebe um valor inteiro por parâmetro e informa 
//se ele é positivo, negativo ou neutro.
#include <stdio.h>

void inteiro(int i){
    if (i > 0){
     printf("%d e positivo", i);
    }
    else if (i < 0){
     printf("%d e negativo", i);
    }
    else{
     printf("%d igual a zero.", i);
    }
}
int main(){
    int i;
    printf("Digite um valor inteiro:");
    scanf("%d", &i);
    inteiro(i);
    return(0);
}