/*Como funciona?
Estruturas de dados são definidas através de structs.*/

struct pessoa {
    char nome[50];
    int idade;
};

/*Para acessar os valores de uma estrutura, basta usar o operador de acesso (.) e o nome da variável.*/

struct pessoa p;

p.idade = 20;
p.nome = "João";

/*Para acessar o endereço de uma estrutura, basta colocar um & antes do nome da variável.*/

struct pessoa p;

printf("%d", &p);
