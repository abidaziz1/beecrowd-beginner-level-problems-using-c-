#include<iostream>
using namespace std;
int main() {
    int X;
    cin>>X;
    int countInterval = 0, countOut = 0;
    for(int i=1; i<=X; i++) {
        int num;
        cin>>num;
        if(num >= 10 && num <= 20) countInterval++;
        else countOut++;
    }
    cout<<countInterval<<" in"<<endl;
    cout<<countOut<<" out"<<endl;
    return 0;
}
