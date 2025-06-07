//1. Análise de Complexidade da Função Recursiva


int x(int n) {
    if (n <= 1) return 1;
    return x(n-1) + x(n-2);
}

/*
Cada chamada faz duas chamadas recursivas, exceto nos casos-base. A árvore de recursão cresce exponencialmente.

Complexidade Temporal:

𝑇(𝑛)=𝑇(𝑛−1)+𝑇(𝑛−2)+Θ(1)⇒𝑂(2𝑛)
T(n)=T(n−1)+T(n−2)+Θ(1)⇒O(2n)

Complexidade Espacial (Pilha de chamadas):
𝑂(𝑛)O(n) — devido à profundidade da recursão.

*/

//andrei vieira