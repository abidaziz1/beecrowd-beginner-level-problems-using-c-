#include <iostream>
#include <iomanip>  // for std::setw
using namespace std;

int main() {
    // Print the top border (39 dashes)
    cout << string(39, '-') << endl;

    // Print "Roberto" centered between the borders
    cout << "|" << setw(8) << " " << setw(4) << "Roberto" << setw(23) << "|" << endl;

    // Print a line with only borders and white space
    cout << "|" << setw(38) << "|" << endl;

    // Print "5786" starting after the 10th dash
    cout << "|" << setw(8) << " " << setw(4) << "5786" << setw(26) << "|" << endl;

    // Repeat the line with only borders and white space
    cout << "|" << setw(38) << "|" << endl;

    // Print "UNIFEI" starting after the 10th dash
    cout << "|" << setw(8) << " " << setw(4) << "UNIFEI" << setw(24) << "|" << endl;

    // Print the bottom border (39 dashes)
    cout << string(39, '-') << endl;

    return 0;
}
