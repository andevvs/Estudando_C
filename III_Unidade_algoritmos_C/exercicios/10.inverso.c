#include <stdio.h>

int main(){
    int mat [3][3];
    int linha, coluna;
    printf("\nInsira os valores na matriz 3 x 3:\n");
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("Matriz[%d][%d]: ", linha, coluna);
            scanf("%d", &mat[linha][coluna]);
        }
    }
    printf("\nOs Valores inseridos normais sao:\n");
    for(linha = 0; linha <3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("%d", mat[linha][coluna]);
        }
        printf("\n");
    }
       printf("\nOs Valores inseridos na ordem invertida sao:\n");
    for(linha = 2; linha > -1; linha--){
        for(coluna = 2; coluna > -1; coluna--){
            printf("%d", mat[linha][coluna]);
        }
        printf("\n");
    }







    return 0;
}