#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double summation = 0.0;
    for (int i = 1; i <= 100; i++) {
        summation += 1.0 / i;
    }
    cout << fixed << setprecision(2) << summation << endl;
    return 0;
}
