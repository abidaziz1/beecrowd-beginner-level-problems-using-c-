"""
  Problem No: 22
Name: Bhaskara's Formula
ID: 1036
  """
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
    double A, B, C;
    cin >> A >> B >> C;
    double delta = B * B - 4 * A * C;
    if (A == 0 || delta < 0) {
        cout << "Impossivel calcular" << endl;
    } else {
        double root1 = (-B + sqrt(delta)) / (2 * A);
        double root2 = (-B - sqrt(delta)) / (2 * A);
        cout << "R1 = " << fixed << setprecision(5) << root1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << root2 << endl;
    }
    return 0;
}
