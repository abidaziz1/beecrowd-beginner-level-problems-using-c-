#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (int i = 0; i < n; i++) {
        printf("%d", fib[i]);
        if (i != n - 1) printf(" ");
    }
    printf("\n");
    return 0;
}
