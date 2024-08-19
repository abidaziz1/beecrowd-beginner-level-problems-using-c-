#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for (int i = 1, j = 1; i <= N; i++, j += 4) {
        printf("%d %d %d PUM\n", j, j + 1, j + 2);
    }
    return 0;
}
