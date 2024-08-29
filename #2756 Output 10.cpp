#include <iostream>
using namespace std;

int main() {
    int spaces[] = {7, 6, 5, 4, 3};
    char characters[] = {'A', 'B', 'C', 'D', 'E'};
    int num_chars = sizeof(characters) / sizeof(characters[0]);
    
    // First half of the pattern
    for (int i = 0; i < num_chars; i++) {
        for (int j = 0; j < spaces[i]; j++) {
            cout << " ";
        }
        cout << characters[i];
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << " ";
        }
        if (i > 0) {
            cout << characters[i];
        }
        cout << endl;
    }

    //Second half of the pattern (reverse order)
    for (int i = num_chars - 2; i >= 0; i--) {
        for (int j = 0; j < spaces[i]; j++) {
            cout << " ";
        }
        cout << characters[i];
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << " ";
        }
        if (i > 0) {
            cout << characters[i];
        }
        cout << endl;
    }

    return 0;
}
