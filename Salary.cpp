"""
  Problem No: 8
Name: Salary
ID: 1008
  """
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
    int no, hrs;
    cin>>no>>hrs;
    float amnt;
    cin>>amnt;
    cout<<"NUMBER = "<<no<<endl;
    float salary = hrs*amnt;
    cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<salary<<endl;
    return 0;
}
