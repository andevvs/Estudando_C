#include <stdio.h>
int main() {
    int numero, original, invertido = 0;
    int digito;

    printf("Digite um numero de quatro digitos: ");
    scanf("%d", &numero);

    original = numero;

    while (numero > 0) {
        digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero = numero / 10;
    }

    if (original == invertido) {
        printf("%d e um numero palindromo.\n", original);
    } else {
        printf("%d nao e um numero palindromo.\n", original);
    }

    return 0;
}
