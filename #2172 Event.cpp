#include <iostream>
using namespace std;

int main() {
    int x,y;
    while(x!=0 && y!=0){
        cin>>x>>y;
        if (x != 0 && y != 0) {  // Check if both inputs are non-zero
            int res = x * y;
            cout << res << endl;
        }
    }
    return 0;
}
