#include <stdio.h>

int main()
{
    int n1;
    printf("digite o numero");
    scanf("%d", &n1);
    if (n1 > 0)
    {
        printf("o numero foi positivo");
    }
    else
    {
        if (n1 < 0)
        {
            printf("o numero foi negativo");
        }
        else
        {
            printf("O numero e 0");
        }
    }
    return 0;
}