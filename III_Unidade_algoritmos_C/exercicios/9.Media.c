// 9-Crie uma função, com retorno, que recebe três notas por parâmetro e calcula a 
// média aritmética de um aluno. Crie outra função, sem retorno, que recebe a média 
// aritmética por parâmetro e informar o conceito obtido pelo aluno, de acordo com a 
// tabela a seguir: 
//Média Conceito
// >= 9       | A
// >= 7 e < 9 | B
// >= 6 e < 7 | C
// >= 4 e < 6 | D
// < 4        | E 
#include <stdio.h>

float mediaAritmetica(float nota1, float nota2, float nota3){
    float media;
    media=(nota1+nota2+nota3)/3;
    return media;
}

void informarConceito(float media){
    if (media>=9)
    {
        printf("Nota A");
    }
    else if (media>= 7 && media < 9)
    {
        printf("Nota B");
    }
    else if (media>= 6 && media < 7)
    {
        printf("Nota C");
    }
    else if (media>=4 && media < 6)
    {
       printf("Nota D");
    }
    else
    {
        printf("Nota E");
    }
    
}

int main() {
    float nota1, nota2, nota3, mediaArit;
    printf("Digite Suas 3 notas:\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    mediaArit=mediaAritmetica(nota1, nota2, nota3);
    informarConceito(mediaArit);
    return 0;
}
