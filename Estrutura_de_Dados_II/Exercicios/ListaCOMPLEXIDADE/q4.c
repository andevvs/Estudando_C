//4. Otimizações propostas
//Q1. Compile o codigo com a flag -g e execute o programa para diferentes valores de n


int memo[1000];

int x_memo(int n) {
    if (n <= 1) return 1;
    if (memo[n] != -1) return memo[n];
    memo[n] = x_memo(n-1) + x_memo(n-2);
    return memo[n];
}

// -> Chamada inicial <- 

memset(memo, -1, sizeof(memo));
x_memo(n);

Complexidade Temporal: O(n)
Espacial: O(n) para cache





//Q2. Utilize a funcao clock() da biblioteca time.h para medir o tempo de execuc¸ao do algoritmo


int x_iterativo(int n) {
    if (n <= 1) return 1;
    int a = 1, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}



//Q3. Repita a execuc¸ao do algoritmo NMax vezes para calcular o tempo medio.


#include <math.h>

int x_binet(int n) {
    double phi = (1 + sqrt(5)) / 2;
    return round(pow(phi, n) / sqrt(5));
}

Complexidade: O(1) tempo