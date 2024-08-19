"""
  Problem No: 6
Name: Average 2
ID: 1006
  """
  #include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
    double A,B,C;
    cin>>A>>B>>C;
    double avg = (A*2.0+B*3.0+C*5.0)/10.0;
    cout<<"MEDIA = "<<fixed<<setprecision(1)<<avg<<endl;
    return 0;
}
