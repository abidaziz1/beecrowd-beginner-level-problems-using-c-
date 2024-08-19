#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    double A, B, C;
    cin >> A >> B >> C;
    if ((A+B > C) && (A+C > B) && (B+C > A)) {
        cout << "Perimetro = " << fixed << setprecision(1) << (A+B+C) << endl;
    } else {
        cout << "Area = " << fixed << setprecision(1) << (0.5*(A+B)*C) << endl;
    }
    return 0;
}
