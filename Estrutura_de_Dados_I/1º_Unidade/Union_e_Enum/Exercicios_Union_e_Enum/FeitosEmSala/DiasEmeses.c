#include <stdio.h>

typedef enum meses{
    JANEIRO=1,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO,
}Meses;

typedef enum dias_semana{
    SEGUNDA=2,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO,
    DOMINGO
}DiasSemana;

int main(void){
    DiasSemana dia;
    Meses mes;
    printf("Informe o dia da semana:\n");
    scanf("%d", &dia);
    printf("Informe o mes:\n");
    scanf("%d", &mes);
    switch (dia){
    case SEGUNDA:
    printf("O dia atual eh segunda_feira\n!");
        break;
    case TERCA:
    printf("O dia atual eh terca_feira!\n");
        break;
    case QUARTA:
    printf("O dia atual eh quarta_feira!\n");
        break;
    case QUINTA:
    printf("O dia atual eh quinta_feira!\n");
        break;
    case SEXTA:
    printf("O dia atual eh sexta_feira!\n");
        break;
    case SABADO:
    printf("O dia atual eh sabado!\n");
        break;
    case DOMINGO:
    printf("O dia atual eh domingo!\n");
        break;
    default:
    printf("Dia inexistente.\n");
        break;
    }

    switch (mes){
    case JANEIRO:
    printf("de Janeiro!\n");
        break;
    case FEVEREIRO:
    printf("de Fevereiro!\n");
        break;
    case MARCO:
    printf("de Marco!\n");
        break;
    case ABRIL:
    printf("de Abril!\n");
        break;
    case MAIO:
    printf("de Maio!\n");
        break;
    case JUNHO:
    printf("de Junho!\n");
        break;
    case JULHO:
    printf("de Julho!\n");
        break;
    case AGOSTO:
    printf("de Agosto!\n");
        break;
    case SETEMBRO:
    printf("de Setembro!\n");
        break;
    case OUTUBRO:
    printf("de Outubro!\n");
        break;
    case NOVEMBRO:
    printf("de Novembro!\n");
        break;
    case DEZEMBRO:
    printf("de Dezembro!\n");
        break;
    default:
    printf("Dia inexistente.\n");
        break;
    }
    return 0;
}