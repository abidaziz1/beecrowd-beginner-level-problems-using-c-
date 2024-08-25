/*
Mr. Amnésio had great difficulty in keeping passwords. To remind them, he always wore numbers, and writing on pieces of paper, which also lost easily, causing it needed to change the password every time this happened. Tired, he thought in a more practical way: put on paper the next number of password, then he always used the same account to remember the password based on the number written on paper. But he also forgot the formula, therefore, asked you to write a program that, given the number of the paper, enter the corresponding password. Write a program that, given a number, enter their password.

Input
The entry will have many test cases. Each test case will have a number N, representing the number written on paper (1001 ≤ N ≤ 9999). The entry ends with the end of the file.

Output
For each test case, print the corresponding password. In all cases, the formula will be the same in the examples below.

Input Sample	Output Sample
1234

2000

1001

9999

1233

1999

1000

9998
*/
#include <iostream>
using namespace std;

int main() {
    int N;
    // Read input until EOF
    while (cin >> N) {
        // Calculate password as N - 1
        cout << N - 1 << endl;
    }
    return 0;
}
