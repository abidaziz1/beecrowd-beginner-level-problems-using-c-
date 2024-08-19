#include <stdio.h>
int main() {
    char str[100];
    int maxCount = 0;
    printf("Enter a string: ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++) {
        maxCount++;
    }
    printf("Maximum number of characters in the string: %d\n", maxCount);
    return 0;
}
