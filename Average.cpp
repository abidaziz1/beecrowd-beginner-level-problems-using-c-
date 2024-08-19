"""
    Problem No: 5
Name: Average
ID: 1005
  
  """
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
    double A, B;
    cin >> A >> B;
    double average = (A * 3.5 + B * 7.5) / 11.0;
    cout << "MEDIA = " << fixed << setprecision(5) << average << endl;
    return 0;
}
