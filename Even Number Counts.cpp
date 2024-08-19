#include<iostream>
using namespace std;
int main() {
    int a, b, c, d, e;
    cin>>a>>b>>c>>d>>e;
    int even=0;
    if(a%2==0) even++;
    if(b%2==0) even++;
    if(c%2==0) even++;
    if(d%2==0) even++;
    if(e%2==0) even++;
    cout<<even<<" valores pares"<<endl;
    return 0;
}
