#include<stdio.h>
int main() {
    int n, size;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    size = n;
    int a[size][size];
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < size; i++) {
        sum1 += a[i][i];
        sum2 += a[i][size - i - 1];
    }
    printf("Sum of 1st Diagonal is: %d\n", sum1);
    printf("Sum of 2nd Diagonal is: %d\n", sum2);
    return 0;
}
