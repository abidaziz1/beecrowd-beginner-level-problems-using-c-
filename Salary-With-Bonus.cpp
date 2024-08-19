"""
  Problem No: 9
Name: Salary With Bonus
ID: 1009
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
    float bonus = amnt * 0.15;
    float salary = hrs * (amnt + bonus);
    cout<<"NUMBER = "<<no<<endl;
    cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<salary<<endl;
    return 0;
}
