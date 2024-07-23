#include <stdio.h>
//Sintaxe:
//<tipo da matriz> <identificador da matriz>[<linhas>][<colunas>];
int main(){
    int matriz [3][3] = {{1,2,3},
                         {4,5,6},
                         {7,8,9}};
    int l, c;
//Navegando pelos indices e colunas de uma matriz com laço for
for (l = 0; l < 3; l++){
    for (c = 0; c< 3; c++){
        printf(" %d ", matriz[l][c]);
    } 
    printf("\n");
}

    return(0);
}