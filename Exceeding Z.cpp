#include <stdio.h>
int main() {
    int X, Z;
    scanf("%d %d", &X, &Z);
    while (Z <= X) {
        scanf("%d", &Z);
    }
    int sum = 0, count = 0;
    for (int i = X; sum < Z; i++) {
        sum += i;
        count++;
    }
    printf("%d\n", count);
    return 0;
}
