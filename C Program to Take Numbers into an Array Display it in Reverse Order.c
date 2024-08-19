#include<stdio.h>
int main() {
    int myarr[5];
    for(int i = 0; i < 5; i++) {
        scanf("%d", &myarr[i]);
    }
    for(int j = 4; j >= 0; j--) {
        printf("%d ", myarr[j]);
    }
    return 0;
}
