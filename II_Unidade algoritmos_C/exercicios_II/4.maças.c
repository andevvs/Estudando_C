#include <stdio.h>

int main(){
    float maca=1.30, calc;
    int qtd;
    printf("\t---LOJA DO ZE---");
    printf("\n\t\x1b[31mMacas a 1,10 R$ unidade se > 12!");
    printf("\n\tQuantas macas deseja?\x1b[0m\n\t");
    scanf("%d", &qtd);
    if (qtd>12)
    {
      calc=qtd*1.10;
      printf("\tVai lhe custar: %.2f R$", calc);
    }
    if (qtd<12)
    {
     calc=qtd*maca;
     printf("\tVai lhe custar: %.2f R$", calc);
    }
    return 0;
}