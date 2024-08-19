"""
  Problem No: 19
Name: Time Conversion
ID: 1019
  """
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
    int N; cin>>N;
    int hrs=N/3600; int x= N-(hrs*3600);
    int minutes= x/60; int y= x-(minutes*60);
    int seconds= y;
    cout<<hrs<<":"<<minutes<<":"<<seconds<<endl;
    return 0;
}
