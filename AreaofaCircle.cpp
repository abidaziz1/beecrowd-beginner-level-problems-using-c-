"""Problem No: 1
Name: Area of a Circle
ID: 1002"""
  
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    double r, A;
    cin>>r;
    A = 3.14159*r*r;
    cout<<"A="<<fixed<<setprecision(4)<<A<<endl;
    return 0;
}
