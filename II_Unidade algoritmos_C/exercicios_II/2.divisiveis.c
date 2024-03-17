#include <stdio.h>

int main(){
    int n1, n2;
    float r;
    printf("Digite os dois numeros:\n");
    scanf("%d %d", &n1, &n2);
    if (n2==0){
    printf("Divisao indefinida!");
    }
    else{
        r=n1/n2;
            printf("o resultado foi: %f", r);
    }
    return 0;
}