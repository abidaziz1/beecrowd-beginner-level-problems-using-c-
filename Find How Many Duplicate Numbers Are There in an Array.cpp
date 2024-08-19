#include<stdio.h>
int main() {
    int n;
    printf("Input the number of elements to be stored in the array:\n");
    scanf("%d", &n);
    int count = 0, a[n];
    printf("Input %d elements in the array:\n", n);
    for(int i = 0; i < n; i++) {
        printf("element - %d: \n", i);
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                count++;
                break;
            }
        }
    }
    printf("Total number of duplicate elements found in the array: %d\n", count);
    return 0;
}
