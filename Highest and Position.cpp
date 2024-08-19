#include<iostream>
using namespace std;
int main() {
    int maxVal = 0, position = 0;
    for(int i=1; i<=100; i++) {
        int n;
        cin>>n;
        if(n > maxVal) {
            maxVal = n;
            position = i;
        }
    }
    cout<<maxVal<<endl;
    cout<<position<<endl;
    return 0;
}
