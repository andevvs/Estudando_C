#include <stdio.h>
#include "produtos.h"

int main() {
    Produto produto1 = criarProduto(101, "Cadeira", 15);
    adicionarProdutoAoEstoque("estoque.bin", produto1);

    Produto produto2 = criarProduto(102, "Mesa", 8);
    adicionarProdutoAoEstoque("estoque.bin", produto2);

    printf("Estoque:\n");
    exibirEstoque("estoque.bin");

    atualizarQuantidadeEstoque("estoque.bin", 101, 20);
    printf("\nEstoque após atualização:\n");
    exibirEstoque("estoque.bin");

    removerProdutoDoEstoque("estoque.bin", 102);
    printf("\nEstoque após remoção:\n");
    exibirEstoque("estoque.bin");

    return 0;
}
