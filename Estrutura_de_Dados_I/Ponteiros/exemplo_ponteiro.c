#include <stdio.h>


/* Para declarar um ponteiro, basta colocar um asterisco antes do nome da variável.
 int * p;*/

/* Para atribuir um ponteiro, basta colocar o endereço da variável que ele apontará.
 int x=10
 int * p= &x */

 /* Para acessar o valor de um ponteiro, basta colocar um asterisco antes do nome da variável.
 
int x = 10;
int *p = &x;

printf("%d", *p); */

int main(void){
    int x = 20;
    int *p = &x;

    printf("%d", *p);

    return 0;
}