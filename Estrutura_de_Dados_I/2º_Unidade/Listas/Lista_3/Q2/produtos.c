#include <stdio.h>
#include <string.h>
#include "produtos.h"

Produto criarProduto(int codigo, char descricao[], int quantidade) {
    Produto novoProduto;
    novoProduto.codigo = codigo;
    strcpy(novoProduto.descricao, descricao);
    novoProduto.quantidade = quantidade;
    return novoProduto;
}

void adicionarProdutoAoEstoque(char* nomeArquivo, Produto produto) {
    FILE *arquivo = fopen(nomeArquivo, "ab");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    fwrite(&produto, sizeof(Produto), 1, arquivo);
    fclose(arquivo);
}

void removerProdutoDoEstoque(char* nomeArquivo, int codigo) {
    FILE *arquivo = fopen(nomeArquivo, "rb");
    FILE *temp = fopen("temp.bin", "wb");
    if (arquivo == NULL || temp == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    Produto produto;
    while (fread(&produto, sizeof(Produto), 1, arquivo)) {
        if (produto.codigo != codigo) {
            fwrite(&produto, sizeof(Produto), 1, temp);
        }
    }
    fclose(arquivo);
    fclose(temp);
    remove(nomeArquivo);
    rename("temp.bin", nomeArquivo);
}

void atualizarQuantidadeEstoque(char* nomeArquivo, int codigo, int novaQuantidade) {
    FILE *arquivo = fopen(nomeArquivo, "r+b");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    Produto produto;
    while (fread(&produto, sizeof(Produto), 1, arquivo)) {
        if (produto.codigo == codigo) {
            produto.quantidade = novaQuantidade;
            fseek(arquivo, -sizeof(Produto), SEEK_CUR);
            fwrite(&produto, sizeof(Produto), 1, arquivo);
            break;
        }
    }
    fclose(arquivo);
}

void exibirEstoque(char* nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    Produto produto;
    while (fread(&produto, sizeof(Produto), 1, arquivo)) {
        printf("Codigo: %d, Descricao: %s, Quantidade: %d\n", produto.codigo, produto.descricao, produto.quantidade);
    }
    fclose(arquivo);
}
