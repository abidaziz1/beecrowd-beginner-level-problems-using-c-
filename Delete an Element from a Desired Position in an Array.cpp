#include<stdio.h>
int main() {
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int pos;
    printf("Find the position to delete: ");
    scanf("%d", &pos);
    for(int i = pos; i < 10; i++) {
        a[i] = a[i + 1];
    }
    printf("New array elements are:\n");
    for(int i = 0; i < 9; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
