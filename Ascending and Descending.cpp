#include <stdio.h>
int main() {
    while (1) {
        int x, y;
        scanf("%d %d", &x, &y);
        if (x == y) break;
        if (x < y) printf("Crescente\n");
        else printf("Decrescente\n");
    }
    return 0;
}
