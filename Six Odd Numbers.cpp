#include<iostream>
using namespace std;
int main() {
    int X;
    cin>>X;
    if(X%2==0) X++;
    for(int i=0; i<6; i++) {
        cout<<X<<endl;
        X += 2;
    }
    return 0;
}
