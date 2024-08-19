"""
  Problem No: 11
Name: Sphere
ID: 1011
  """
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
    int radius;
    cin>>radius;
    double volume = ((4/3.0)*3.14159*radius*radius*radius);
    cout<<"VOLUME = "<<fixed<<setprecision(3)<<volume<<endl;
    return 0;
}
