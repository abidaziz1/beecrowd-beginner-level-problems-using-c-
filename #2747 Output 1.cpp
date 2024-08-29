
#include <stdio.h>

int main() {
    char top_bottom_line[40]; // Extra space for the null terminator
    char middle_line[40]; // Extra space for the null terminator

    // Fill the top and bottom line with dashes
    for(int i = 0; i < 39; i++) {
        top_bottom_line[i] = '-';
    }
    top_bottom_line[39] = '\0'; // Null terminator

    // Fill the middle line
    middle_line[0] = '|';
    middle_line[39] = '|';
    for(int i = 1; i < 39; i++) {
        if (i == 38) {
            middle_line[i] = '|'; // Second vertical bar
        } else {
            middle_line[i] = ' '; // Fill with spaces
        }
    }
    middle_line[39] = '\0'; // Null terminator

    // Print top line
    printf("%s\n", top_bottom_line);

    // Print 5 middle lines
    for(int i = 0; i < 5; i++) {
        printf("%s\n", middle_line);
    }

    // Print bottom line
    printf("%s\n", top_bottom_line);

    return 0;
}
