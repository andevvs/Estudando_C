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