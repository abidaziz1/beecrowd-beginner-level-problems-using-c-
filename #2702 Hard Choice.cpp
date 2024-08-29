#include <iostream>
using namespace std;

int main()
{
    int C_a, B_a, P_a; // Available meals for Chicken, Beef, Pasta
    cin >> C_a >> B_a >> P_a;
    
    int C_r, B_r, P_r; // Requested meals for Chicken, Beef, Pasta
    cin >> C_r >> B_r >> P_r;
    
    int count = 0; // Passengers who won't receive their preferred meal
    
    if (C_r > C_a) {
        count += C_r - C_a;
    }
    if (B_r > B_a) {
        count += B_r - B_a;
    }
    if (P_r > P_a) {
        count += P_r - P_a;
    }
    
    cout << count << endl;
    
    return 0;
}
