// 3-Faça uma função, sem retorno, que recebe a idade do usuário por parâmetro, verifica
// e informa se ele é maior de idade ou não.
#include <stdio.h>

void verificar(int i){
    if (i>=18 ){
     printf("%d Maior de Idade", i);
    }
    else{
     printf("%d ? Menor de Idade!", i);
    }
}
int main(){
    int i;
    printf("Digite sua Idade:");
    scanf("%d", &i);
    verificar(i);
    return(0);
}