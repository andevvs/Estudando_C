#include <stdio.h>
int x(int);
int main() {
    int n = 10;
    printf("%d\n", x(10));
}
int x(int n) {
    if (n <= 1)
        return 1;
    else {
        return x(n - 1) + x(n - 2);
    }
}