"""
  Problem No: 10
Name: Simple Calculator
ID: 1110
  """
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
    int a, b;
    cin>>a>>b;
    double price1; cin>>price1;
    while (fmod(price1*100, 1)!=0) {cin>>price1;}
    int c, d; cin>>c>>d;
    double price2; cin>>price2;
    while (fmod(price2*100,1)!=0) {cin>>price2;}
    double total = (b*price1) + (d*price2);
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<total<<endl;
    return 0;
}
