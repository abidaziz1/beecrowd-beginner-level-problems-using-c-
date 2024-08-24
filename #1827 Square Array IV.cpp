/*
Your work in this program is to read an integer number that is the size of a square matrix (width and height) to be filled as follows: the outer part is filled with 0 in the inner part is filled with 1, the main diagonal is filled with 2, the secondary diagonal is filled with 3 and the central element is 4, as the examples below.

Obs: square with '1' always starts at position size / 3, considering width and height and both begin in 0 (zero).

Input
The input contains a number of test cases and ends with EOF (end of file). Each test case consists of an odd integer number N (5 ≤ N ≤ 101) that is the size of the array. For each test case, print the corresponding array as below. After each test case, print a blank line.

Output
For each test case, print the corresponding array as below. After each test case, print a blank line.

Input Sample	
5
11
Output Sample
20003
01110
01410
01110
30002

20000000003
02000000030
00200000300
00011111000
00011111000
00011411000
00011111000
00011111000
00300000200
03000000020
30000000002
*/


#include <stdio.h>

int main()
{
    int i, j, k, l, n, arr[102][102];
    while(scanf("%d",&n) != EOF) {
        k = n - 1; 
        l = n / 3;

        // Initialize the matrix
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                if(i == j) {
                    arr[i][j] = 2;  // Main diagonal
                } else if(j == k) {
                    arr[i][j] = 3;  // Secondary diagonal
                } else {
                    arr[i][j] = 0;  // Default fill for outer part
                }
            }
            k--;  // Decrement k for the secondary diagonal
        }

        // Fill the inner square with 1
        for(i = l; i < n - l; i++) {
            for(j = l; j < n - l; j++) {
                arr[i][j] = 1;
            }
        }

        // Set the central element to 4
        arr[n / 2][n / 2] = 4;

        // Print the matrix
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                printf("%d", arr[i][j]);
            }
            printf("\n");
        }
        printf("\n");  // Print a blank line after each test case
    }

    return 0;
}

