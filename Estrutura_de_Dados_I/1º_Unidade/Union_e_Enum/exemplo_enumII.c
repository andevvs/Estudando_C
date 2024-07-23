#include <stdio.h>

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
    printf("Informe o dia da semana:\n");
    scanf("%d", &dia);
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
    printf("Dia da semana: %d\n", dia);

    return 0;
}