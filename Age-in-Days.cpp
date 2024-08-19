"""
  Problem No: 20
Name: Age in Days
ID: 1020
  """
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
    int days;
    cin>>days;
    int yrs = days/365; int x= days-(yrs*365);
    int mths = x/30; int y= x-(mths*30);
    cout<<yrs<<" ano(s)"<<endl;
    cout<<mths<<" mes(es)"<<endl;
    cout<<y<<" dia(s)"<<endl;
    return 0;
}
