#include<stdio.h>
int findSTRLength(char *str) {
    int length = 0;
    while(str[length] != '\0') length++;
    return length;
}
int main() {
    char inputString[100];
    fgets(inputString, sizeof(inputString), stdin);
    int length = findSTRLength(inputString);
    printf("Length of the string: %d\n", length-1); // Subtracting 1 to exclude the newline character
    return 0;
}
