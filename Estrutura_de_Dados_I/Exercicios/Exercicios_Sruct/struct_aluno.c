struct aluno{
    int mat;
    int idade;
    char nome[20];
};

void captura(struct aluno){
    printf("informe os dados do aluno:");
    scanf("[^\n]", &a);

}

int main(){
    struct aluno a;
    captura(&a);
    imprime(&a);
    return 0;
}