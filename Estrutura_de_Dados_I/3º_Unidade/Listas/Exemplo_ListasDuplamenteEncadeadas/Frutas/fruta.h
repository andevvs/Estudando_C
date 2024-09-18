#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct fruta Fruta;

typedef struct no No;

No * criaNo(char * nomeDaFruta, float valorPorKgDaFruta);

No * InserirNoInicio(No * lista, char * nomeDaFruta, float valorPorKg);

void exibirListaDeFrutas(No * lista);