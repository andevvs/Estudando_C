// 3-Faça uma função, sem retorno, que recebe um valor inteiro por parâmetro, verifica e 
// informa se tal número é par ou ímpar.

#include <stdio.h>

void verificar(int i){
    if (i % 2 ){
     printf("%d Impar!", i);
    }
    else{
     printf("%d Par!", i);
    }
}
int main(){
    int i;
    printf("Digite um valor inteiro:");
    scanf("%d", &i);
    verificar(i);
    return(0);
}