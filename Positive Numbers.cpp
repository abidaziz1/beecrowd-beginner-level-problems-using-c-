#include<iostream>
using namespace std;
int main() {
    int count = 0;
    double number;
    for(int i=0; i<6; i++) {
        cin>>number;
        if(number>0) {
            count++;
        }
    }
    cout<<count<<" valores positivos"<<endl;
    return 0;
}
