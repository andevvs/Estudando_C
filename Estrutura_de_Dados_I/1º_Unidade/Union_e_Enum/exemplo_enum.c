#include <stdio.h>
typedef enum dias_semana{
    SEGUNDA,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO,
    DOMINGO
}DiasSemana;

int main(void){
    DiasSemana dia;
    dia = SEGUNDA;
    printf("Dia da semana: %d\n", dia);

    return 0;
}