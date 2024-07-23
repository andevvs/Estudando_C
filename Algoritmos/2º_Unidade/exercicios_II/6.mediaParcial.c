#include <stdio.h>

int main()
{
    float mp, mf, af, a1, a2, a3;

    printf("\t===Sistema de Notas===\n");
    printf("\t    ---MP,AF,MF---\n");
    printf("Primeiro informe suas notas das 3 avaliacoes:\n");
    scanf("%f %f %f", &a1, &a2, &a3);

    mp = (a1 + a2 + a3) / 3;

    if (mp >= 7.0)
    {
        printf("Parabéns, Aprovado!");
    }
    else if (mp >= 3.5 && mp < 7.0)
    {
        printf("Média parcial de %.2f armazenada no sistema.\n", mp);
        printf("Você foi para a avaliação final. Qual foi sua nota?\n");
        scanf("%f", &af);
        printf("Agora o sistema irá calcular sua média final.\n");
        mf = (6 * mp + 4 * af) / 10;
        if (mf >= 5.0)
        {
            printf("Parabéns, Aprovado!");
        }
        else
        {
            printf("Reprovado.");
        }
    }
    else
    {
        printf("Reprovado.");
    }

    return 0;
}
