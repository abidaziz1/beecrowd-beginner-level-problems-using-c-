"""
  Problem No: 24
Name: Simple Sort
ID: 1042
  """
#include<iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int first = min({a, b, c});
    int last = max({a, b, c});
    int middle = a + b + c - first - last;
    cout << first << "\n" << middle << "\n" << last << endl;
}
