#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char s; 
    cin >> s;
    double matrix[12][12]; 
    double sum = 0.0; 
    int count = 0;
    
    // Reading the matrix
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            cin >> matrix[i][j];
        }
    }

    // Summing elements in the green area
    for(int i = 0; i < 12; i++) { // Rows 0 to 11
        for(int j = 11 - (11 - i); j <= 11; j++) { // Adjusted column indices
            sum += matrix[i][j];
            count++;
        }
    }

    // Output the result based on the operation
    if(s == 'S') {
        cout << fixed << setprecision(1) << sum << endl;
    } else if(s == 'M') {
        cout << fixed << setprecision(1) << sum / count << endl;
    }

    return 0;
}
