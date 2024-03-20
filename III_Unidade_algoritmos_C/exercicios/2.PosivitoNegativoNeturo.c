#include <stdio.h>

void inteiro(int i){
    if (i > 0){
     printf("O numero e positivo");
    }
    else if (i < 0){
    printf("O numero e negativo");
    }
    else{
        printf("O numero foi igual a zero.");
    }
}
int main(){
    int i;
    printf("Digite um valor inteiro:");
    scanf("%d", &i);
    inteiro(i);
    return(0);
}