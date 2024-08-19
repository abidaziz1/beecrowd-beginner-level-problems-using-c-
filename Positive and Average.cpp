#include<iostream>
using namespace std;
int main() {
    int a, b, c, d, e, f;
    cin>>a>>b>>c>>d>>e>>f;
    int pos = 0;
    double sum = 0.0;
    if(a > 0) { pos++; sum += a; }
    if(b > 0) { pos++; sum += b; }
    if(c > 0) { pos++; sum += c; }
    if(d > 0) { pos++; sum += d; }
    if(e > 0) { pos++; sum += e; }
    if(f > 0) { pos++; sum += f; }
    cout<<pos<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<sum/pos<<endl;
    return 0;
}
