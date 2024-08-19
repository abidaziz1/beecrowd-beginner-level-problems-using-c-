#include <stdio.h>
int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    for(int i=1; i<=Y; i++) {
        if(i % X == 0) continue;
        printf("%d\n", i);
    }
    return 0;
}
