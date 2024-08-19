#include <stdio.h>
int main() {
    int array[] = {2, 5, 7, 0, 4, 0, 7, -5, 8, 0};
    int size = sizeof(array) / sizeof(array[0]);
    printf("The given array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    int nonZeroCount = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] != 0) {
            array[nonZeroCount++] = array[i];
        }
    }
    for (int i = nonZeroCount; i < size; i++) {
        array[i] = 0;
    }
    printf("\nThe new array is:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
