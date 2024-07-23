#include <stdio.h>

int maiorn(int num1, int num2){
    if (num1 > num2){
       return num1;
    }
    else{
        return num2;
    }
    
}

int main(){
    int a,b, maior;
    printf("Digite dois numeros:\n");
    scanf("%d %d",&a, &b);
    maior = maiorn(a, b);
    printf("O maior numero entre %d e %d eh: %d",a, b, maior);
    return 0;
}