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

float Porcentagem(int parte, int total) {
    if (total == 0) {
        return 0.0;
    }
    return (parte / (float)total) * 100.0;
}

int main() {
    int N;
    printf("Informe o numero de pessoas entrevistadas: ");
    scanf("%d", &N);
    char sexo[N];
    char opiniao[N];
    int totalFem = 0, gostaramFem = 0;
    int totalMasc = 0, naoGostaramMasc = 0;

    for (int i = 0; i < N; i++) {
        printf("Entrevistado %d\n", i + 1);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo[i]);
        printf("Opinião (gostou/nao gostou): ");
        scanf(" %s", &opiniao[i]);
        if (sexo[i] == 'F' || sexo[i] == 'f') {
            totalFem++;
            if (opiniao[i] == 'g' || opiniao[i] == 'G') {
                gostaramFem++;
            }
        } else if (sexo[i] == 'M' || sexo[i] == 'm') {
            totalMasc++;
            if (opiniao[i] == 'n' || opiniao[i] == 'N') {
                naoGostaramMasc++;
            }
        }
    }

    float porcentagemGostaramFem = Porcentagem(gostaramFem, totalFem);
    float porcentagemNaoGostaramMasc = Porcentagem(naoGostaramMasc, totalMasc);
    printf("Porcentagem de pessoas do sexo feminino que gostaram do produto: %.2f%%\n", porcentagemGostaramFem);
    printf("Porcentagem de pessoas do sexo masculino que não gostaram do produto: %.2f%%\n", porcentagemNaoGostaramMasc);

    return 0;
}
