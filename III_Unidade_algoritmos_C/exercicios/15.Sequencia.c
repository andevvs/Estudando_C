#include <stdio.h>

int main() {
    int n;
    
    printf("Digite o numero de elementos da sequencia: ");
    scanf("%d", &n); 

    float sequencia[n];
    int frequencia[n];
    int cont = 0;
    printf("Digite os elementos da sequencia:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &sequencia[i]);
        frequencia[i] = -1; 
    }

    for (int i = 0; i < n; i++) {
        int freq = 1;
        for (int j = i + 1; j < n; j++) {
            if (sequencia[i] == sequencia[j]) {
                freq++;
                frequencia[j] = 0; 
            }
        }
        if (frequencia[i] != 0) {
            frequencia[i] = freq;
        }
    }

    printf("Saida:\n");
    for (int i = 0; i < n; i++) {
        if (frequencia[i] != 0) {
            printf("%.1f ocorre %d vez(es)\n", sequencia[i], frequencia[i]);
        }
    }
    return 0;
}
