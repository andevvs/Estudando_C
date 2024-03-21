// 5-Construa uma função, sem retorno, que recebe um valor inteiro por parâmetro e 
// informa se ele é, ou não, múltiplo de 5
#include <stdio.h>

void verificar(int i){
    if (i % 5 ){
     printf("%d Nao Multiplo de 5.", i);
    }
    else{
     printf("%d Multiplo de 5!", i);
    }
}
int main(){
    int i;
    printf("Digite um Numero Inteiro:");
    scanf("%d", &i);
    verificar(i);
    return(0);
}