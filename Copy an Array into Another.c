#include<stdio.h>
int main() {
    int arr1[5], arr2[5];
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }
    for(int i = 0; i < 5; i++) {
        arr2[i] = arr1[i];
    }
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}
