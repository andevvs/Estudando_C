#include <stdio.h>
#include "fruta.c"

int main(void){
    No * listaDeFruta = NULL;
    int opc;
    char nomeDaFruta[50];
    float valorPorKg;
    do{
        printf("1. Cadastrar uma Fruta\n");
        printf("2. Imprimir a lista\n");
        printf("3. Sair...\n");
        scanf("%d", &opc);
            switch (opc){
            case 1:
                printf("Digite o nome da fruta: ");
                scanf(" %[^\n]", &nomeDaFruta);
                printf("Digite o valor em (Kg): ");
                scanf(" %f", &valorPorKg);
                listaDeFruta = InserirNoInicio(listaDeFruta, nomeDaFruta, valorPorKg);
                break;
            case 2:
                exibirListaDeFrutas(listaDeFruta);
                break;
            default:
                break;
            }

    }while (opc !=3);
    return 0;
}