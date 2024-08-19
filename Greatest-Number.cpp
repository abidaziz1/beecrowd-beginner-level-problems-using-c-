"""
  Problem No: 14
Name: Competition
ID: 1014
  """
#include<iostream>
using namespace std;
int main() {
    int A, B, C;
    cin >> A >> B >> C;
    if ((B >= C && A > 0) || (B < C && A < 0)) {
        cout << "Competicao bem sucedida" << endl;
    } else {
        cout << "Competicao mal sucedida" << endl;
    }
    return 0;
}
