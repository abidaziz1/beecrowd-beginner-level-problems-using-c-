#include<stdio.h>
int main() {
    int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int sum;
    for(int row = 0; row < 3; row++) {
        sum = 0;
        for(int col = 0; col < 3; col++) {
            sum += a[row][col];
        }
        printf("Sum of %dth row: %d\n", row + 1, sum);
    }
    for(int col = 0; col < 3; col++) {
        sum = 0;
        for(int row = 0; row < 3; row++) {
            sum += a[row][col];
        }
        printf("Sum of %dth column: %d\n", col + 1, sum);
    }
    return 0;
}
