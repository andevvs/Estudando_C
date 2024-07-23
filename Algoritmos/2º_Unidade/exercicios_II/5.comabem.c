#include <stdio.h>

int main()
{
    int cod, qtd, valor;
    char erro;

    printf("\tBem Vindo a lanchonete Coma Bem!");
    printf("\n\t\t|Cardapio|");
    printf("\n|Codigo|\t |Comida|\t|Preco|");
    printf("\n100\t\tCachorro q.\t 8.00R$\n101\t\tBauru\t\t 9.00 R$\n102\t\tX-salada\t 10.00R$\n103\t\tHamburguer\t 12.00R$\n104\t\tRefrigerante(lata) 3.00R$\n");
  

    do{
        printf("Selecione o codigo do seu lanche:\n");
        scanf("%d", &cod);
        switch (cod) {
        case 100:
            printf("\nQuantos vai querer?:\n");
            scanf("%d", &qtd);
            valor = qtd * 8;
            printf("Ficou %d R$\n", valor);
            break;
        case 101:
            printf("\nQuantos vai querer?:\n");
            scanf("%d", &qtd);
            valor = qtd * 9;
            printf("Ficou %d R$\n", valor);
            break;
        case 102:
            printf("\nQuantos vai querer?:\n");
            scanf("%d", &qtd);
            valor = qtd * 10;
            printf("Ficou %d R$\n", valor);
            break;
        case 103:
            printf("\nQuantos vai querer?:\n");
            scanf("%d", &qtd);
            valor = qtd * 12;
            printf("Ficou %d R$\n", valor);
            break;
        case 104:
            printf("\nQuantos vai querer?:\n");
            scanf("%d", &qtd);
            valor = qtd * 3;
            printf("Ficou %d R$\n", valor);
            break;
        default:
            printf("Codigo nao encontrado.\n");
        }
        printf("Deseja informar outro Codigo? (S/N)\n");
        scanf(" %c", &erro);
    } while (erro == 'S' || erro == 's');
    printf("Obrigado volte sempre!");

    return 0;
}