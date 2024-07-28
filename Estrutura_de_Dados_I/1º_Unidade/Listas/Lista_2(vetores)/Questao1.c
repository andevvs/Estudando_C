/*Questão-1.Uma empresa fez uma pesquisa para saber se as pessoas gostaram ou não de um
novo produto. Um número N de pessoas de ambos os sexos foi entrevistado, e o questionário
consistia em apenas duas perguntas: (i) o sexo do entrevistado (M/F) e (ii) sua opinião sobre o
produto (gostou/não gostou). Escreva um programa em C que:
a) leia as respostas contidas no questionário e armazene-as em dois arrays vinculados,
um deles contendo a resposta para a primeira pergunta e o outro contendo a resposta
para a segunda pergunta.
b) determine a porcentagem de pessoas do sexo feminino que responderam que
gostaram do produto.
c) determine a porcentagem de pessoas do sexo masculino que responderam que não
gostaram do produto.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int n, i;
    float qtdHomens = 0.0, qtdMulheres = 0.0, porcentagemHomens = 0.0, porcentagemMulheres = 0.0;
    printf("Informe o numero de entrevistados: ");
    scanf("%d", &n);

    char *sexo = (char *)malloc(n * sizeof(char));
    char *pesquisa = (char *)malloc(n * sizeof(char));

    if (sexo == NULL || pesquisa == NULL)
    {
        printf("Erro na alocação de memoria");
        exit(1);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d° Entrevistado:\n", i + 1);
        printf("Informe o seu sexo (M/F): ");
        scanf(" %c", &sexo[i]);
        printf("Gostou do produto? (S/N): ");
        scanf(" %c", &pesquisa[i]);
    }

    for (i = 0; i < n; i++)
        if (sexo[i] == 'M')
        {
            if (pesquisa[i] == 'N')
            {

                qtdHomens++;
            }
        }
        else
        {
            if (pesquisa[i] == 'S')
            {
                qtdMulheres++;
            }
        }

    porcentagemMulheres = qtdMulheres / 100 * n;
    porcentagemHomens = qtdHomens / 100 * n;

    printf("cerca de %.2f%% das mulheres gostaram do produto\n", porcentagemMulheres);
    printf("cerca de %.2f%% dos homens nao gostaram do produto\n", porcentagemHomens);

    return 0;
}