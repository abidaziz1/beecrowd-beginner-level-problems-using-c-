"""
 Problem No: 37
Name: Count Pos, Neg, Even, Odd
ID: 1066 
  """

#include<iostream>
using namespace std;
int main() {
    int pos = 0, neg = 0, even = 0, odd = 0;
    for (int i = 0; i < 5; ++i) {
        int x;
        cin >> x;
        if (x > 0) pos++;
        if (x < 0) neg++;
        if (x % 2 == 0) even++;
        if (x % 2 != 0) odd++;
    }
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;
    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    return 0;
}
