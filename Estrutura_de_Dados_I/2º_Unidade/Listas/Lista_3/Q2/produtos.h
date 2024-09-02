
typedef struct {
    int codigo;
    char descricao[50];
    int quantidade;
} Produto;

//função para criar um produto
Produto criarProduto(int codigo, char descricao[], int quantidade);

//função para adicinar um produto ao estoque
void adicionarProdutoAoEstoque(char* nomeArquivo, Produto produto);

//função para remover um produto do estoque
void removerProdutoDoEstoque(char* nomeArquivo, int codigo);

//função para atualizar a quantidade do estoque

void atualizarQuantidadeEstoque(char* nomeArquivo, int codigo, int novaQuantidade);

//função para exibir o estoque
void exibirEstoque(char* nomeArquivo);
