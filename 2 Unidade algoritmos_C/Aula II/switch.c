#include <stdio.h>

int main() {
    char estadoCivil;
    char opcao;
    int solteiro = 0, casado = 0, divorciado = 0, viuvo = 0;

    do {
        printf("Informe seu estado civil:\n");
        printf("Digite:\nD para divorciado\nC para casado\nS para solteiro\nV para viúvo.\n");
        scanf(" %c", &estadoCivil); 

        switch (estadoCivil) {
            case 'd': 
                printf("Divorciado\n"); 
                divorciado++;
                break;
            case 'c': 
                printf("Casado\n"); 
                casado++;
                break;
            case 'v': 
                printf("Viúvo\n"); 
                viuvo++;
                break;
            case 's': 
                printf("Solteiro\n"); 
                solteiro++;
                break;
            default: 
                printf("Nenhuma opcao acima, digite outra letra.\n"); 
        }

        printf("Deseja informar outro estado civil? (S/N)\n");
        scanf(" %c", &opcao);
    } while (opcao == 'S' || opcao == 's');

    printf("A quantidade de divorciados foi: %d\n", divorciado);
    printf("A quantidade de casados foi: %d\n", casado);
    printf("A quantidade de viúvos foi: %d\n", viuvo);
    printf("A quantidade de solteiros foi: %d\n", solteiro);

    return 0;
}
