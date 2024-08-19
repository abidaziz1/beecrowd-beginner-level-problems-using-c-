#include<stdio.h>
int main() {
    int n;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Input %d elements in the array:\n", n);
    for(int i = 0; i < n; i++) {
        printf("element - %d: \n", i);
        scanf("%d", &a[i]);
    }
    int max = a[0], min = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
        if(a[i] < min) {
            min = a[i];
        }
    }
    printf("Maximum element is: %d\n", max);
    printf("Minimum element is: %d\n", min);
    return 0;
}
