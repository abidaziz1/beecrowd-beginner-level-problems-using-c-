/*
Bino and Cino are close friends. Bino likes to create mathematical challenges to Cino. This time, Bino created a list of numbers and asked to Cino: How many numbers are multiples of 2, 3, 4 and 5?

This challenge looks simple, but when the list contains many numbers, Cino makes some miscalculations. To help Cino, make a program to solve the Bino's Challenge.

Input
The first line of input consists of an integer N (1 ≤ N ≤1000), representing the amount of numbers in the Bino's list.

The second line contains N integers Li (1 ≤ Li ≤ 100), representing the numbers of the Bino's list.

Output
Print the amount of multiples of 2, 3, 4 and 5 in the list. Note the formatting of the output in the output sample, because it must be followed strictly. "Multiplo(s)" means "Multiple(s)" in English, but you must print the message in Portuguese.

Input Sample	Output Sample
5
2 5 4 20 10

4 Multiplo(s) de 2
0 Multiplo(s) de 3
2 Multiplo(s) de 4
3 Multiplo(s) de 5
*/
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int multiplesOf2 = 0, multiplesOf3 = 0, multiplesOf4 = 0, multiplesOf5 = 0;

    for (int i = 0; i < N; ++i) {
        int number;
        cin >> number;

        if (number % 2 == 0) multiplesOf2++;
        if (number % 3 == 0) multiplesOf3++;
        if (number % 4 == 0) multiplesOf4++;
        if (number % 5 == 0) multiplesOf5++;
    }

    cout << multiplesOf2 << " Multiplo(s) de 2" << endl;
    cout << multiplesOf3 << " Multiplo(s) de 3" << endl;
    cout << multiplesOf4 << " Multiplo(s) de 4" << endl;
    cout << multiplesOf5 << " Multiplo(s) de 5" << endl;

    return 0;
}
