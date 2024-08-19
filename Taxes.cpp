#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    double salary;
    cin >> salary;
    double tax = 0.0;
    if (salary <= 2000.00) {
        cout << "Isento" << endl;
    } else if (salary <= 3000.00) {
        tax = (salary - 2000.00) * 0.08;
    } else if (salary <= 4500.00) {
        tax = (salary - 3000.00) * 0.18 + 1000.00 * 0.08;
    } else {
        tax = (salary - 4500.00) * 0.28 + 1500.00 * 0.18 + 1000.00 * 0.08;
    }
    if (tax > 0) {
        cout << "R$ " << fixed << setprecision(2) << tax << endl;
    }
    return 0;
}
