// 5 Melhorando o algoritmo - Algoritmos Otimizados

// 5.1)

#include <string.h> 

unsigned long long memo[100];

unsigned long long fib_memo(int n) {
    if (n <= 1) {
        return n; 
    }
    
    if (memo[n] != -1) {
        return memo[n];
    }
    
    memo[n] = fib_memo(n - 1) + fib_memo(n - 2);
    return memo[n];
}

unsigned long long run_fib_memo(int n) {

    memset(memo, -1, sizeof(memo));
    return fib_memo(n);
}



// 5.2) 

unsigned long long fib_iterativo(int n) {
    if (n <= 1) {
        return n;
    }

    unsigned long long a = 0; 
    unsigned long long b = 1; 
    unsigned long long proximo;

    for (int i = 2; i <= n; i++) {
        proximo = a + b;
        a = b;
        b = proximo;
    }
    return b;


// 5.3)


#include <math.h> 

unsigned long long fib_binet(int n) {
    double phi = (1 + sqrt(5)) / 2;
    return (unsigned long long)round(pow(phi, n) / sqrt(5));
}


// 5.4) 

#include <stdio.h>
#include <time.h>
#include <string.h>
#include <math.h>

unsigned long long fib_recursivo_original(int n) {
    if (n <= 1) return n;
    return fib_recursivo_original(n - 1) + fib_recursivo_original(n - 2);
}

#define MAX_N 93

unsigned long long memo[MAX_N + 1];
unsigned long long fib_memo(int n) {
    if (n <= 1) return n;
    if (memo[n] != -1) return memo[n];
    memo[n] = fib_memo(n - 1) + fib_memo(n - 2);
    return memo[n];
}
unsigned long long run_fib_memo(int n) {
    memset(memo, -1, sizeof(memo));
    return fib_memo(n);
}

unsigned long long fib_iterativo(int n) {
    if (n <= 1) return n;
    unsigned long long a = 0, b = 1, proximo;
    for (int i = 2; i <= n; i++) {
        proximo = a + b;
        a = b;
        b = proximo;
    }
    return b;
}

unsigned long long fib_binet(int n) {
    double phi = (1 + sqrt(5)) / 2.0;
    return (unsigned long long)round(pow(phi, n) / sqrt(5));
}


int main() {
    printf("%-5s, %-20s, %-20s, %-20s, %-20s\n", "n", "T_Original(s)", "T_Memoizado(s)", "T_Iterativo(s)", "T_Binet(s)");

    int NMax = 1000;

    for (int n = 10; n <= MAX_N; n += 5) {
        double t_original = -1.0, t_memo = 0.0, t_iterativo = 0.0, t_binet = 0.0;
        clock_t start, end;

    
        if (n <= 45) {
            start = clock();
            fib_recursivo_original(n);
            end = clock();
            t_original = ((double)(end - start)) / CLOCKS_PER_SEC;
        }

    
        start = clock();
        for(int i=0; i<NMax; ++i) run_fib_memo(n);
        end = clock();
        t_memo = ((double)(end - start)) / CLOCKS_PER_SEC / NMax;

    
        start = clock();
        for(int i=0; i<NMax; ++i) fib_iterativo(n);
        end = clock();
        t_iterativo = ((double)(end - start)) / CLOCKS_PER_SEC / NMax;
        
    
        start = clock();
        for(int i=0; i<NMax; ++i) fib_binet(n);
        end = clock();
        t_binet = ((double)(end - start)) / CLOCKS_PER_SEC / NMax;

        printf("%-5d, ", n);
        if (t_original >= 0) printf("%-20.10f, ", t_original);
        else printf("%-20s, ", "Proibitivo");
        printf("%-20.10f, %-20.10f, %-20.10f\n", t_memo, t_iterativo, t_binet);
    }
    return 0;
}

//andrei vieira