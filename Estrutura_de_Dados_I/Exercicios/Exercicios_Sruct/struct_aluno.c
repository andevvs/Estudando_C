struct aluno{
    int mat;
    int idade;
    char nome[20];
};

int main(){
    struct aluno a;
    captura(&a);
    imprime(&a);
    return 0;
}