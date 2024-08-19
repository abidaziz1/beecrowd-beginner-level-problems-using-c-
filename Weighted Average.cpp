#include<iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    for(int i=1; i<=N; i++) {
        double n1, n2, n3;
        cin>>n1>>n2>>n3;
        double avg = (n1*2 + n2*3 + n3*5) / 10.0;
        cout<<fixed<<setprecision(1)<<avg<<endl;
    }
    return 0;
}
