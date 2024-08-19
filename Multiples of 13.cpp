#include <stdio.h>
int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    if(X > Y) {
        int temp = X; X = Y; Y = temp;
    }
    for(int i=X; i<=Y; i++) {
        if(i % 13 != 0) printf("%d\n", i);
    }
    return 0;
}
