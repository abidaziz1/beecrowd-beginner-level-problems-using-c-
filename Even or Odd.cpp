#include<iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    for(int i=1; i<=N; i++) {
        int x;
        cin>>x;
        if(x % 2 == 0 && x > 0) cout<<"EVEN POSITIVE"<<endl;
        else if(x % 2 == 0 && x < 0) cout<<"EVEN NEGATIVE"<<endl;
        else if(x % 2 != 0 && x > 0) cout<<"ODD POSITIVE"<<endl;
        else if(x % 2 != 0 && x < 0) cout<<"ODD NEGATIVE"<<endl;
        else cout<<"NULL"<<endl;
    }
    return 0;
}
