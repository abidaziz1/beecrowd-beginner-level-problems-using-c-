#include<iostream>
using namespace std;
int main() {
    double A, B, C;
    cin>>A>>B>>C;
    if(A >= B + C) {
        cout<<"NAO FORMA TRIANGULO"<<endl;
    } else {
        if(A*A == B*B + C*C) cout<<"TRIANGULO RETANGULO"<<endl;
        if(A*A > B*B + C*C) cout<<"TRIANGULO OBTUSANGULO"<<endl;
        if(A*A < B*B + C*C) cout<<"TRIANGULO ACUTANGULO"<<endl;
        if(A == B && B == C) cout<<"TRIANGULO EQUILATERO"<<endl;
        if((A == B && A != C) || (A == C && A != B) || (B == C && B != A)) cout<<"TRIANGULO ISOSCELES"<<endl;
    }
    return 0;
}
