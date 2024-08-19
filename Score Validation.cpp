#include <stdio.h>
int main() {
    float score1, score2;
    while(1) {
        scanf("%f", &score1);
        if(score1 >= 0.0 && score1 <= 10.0) break;
        printf("nota invalida\n");
    }
    while(1) {
        scanf("%f", &score2);
        if(score2 >= 0.0 && score2 <= 10.0) break;
        printf("nota invalida\n");
    }
    printf("media = %.2f\n", (score1 + score2) / 2);
    return 0;
}
