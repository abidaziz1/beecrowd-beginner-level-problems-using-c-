#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    char *ptr = str;
    while (*ptr != '\0') {
        ptr++;
    }
    printf("String in reverse: ");
    while (ptr != str) {
        ptr--;
        putchar(*ptr);
    }
    printf("\n");
    return 0;
}
