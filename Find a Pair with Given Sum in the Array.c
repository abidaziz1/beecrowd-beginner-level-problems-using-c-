#include<stdio.h>
int main() {
    int a[6] = {6,7,4,-5,7,9};
    int sum = 15;
    int temp1 = 0, temp2 = 0;
    for(int i = 0; i < 6; i++) {
        for(int j = i+1; j < 6; j++) {
            if(a[i] + a[j] == sum) {
                temp1 = i;
                temp2 = j;
                break;
            }
        }
    }
    printf("Pair of elements can make the given sum by the value of index %d and %d\n", temp1, temp2);
    return 0;
}
