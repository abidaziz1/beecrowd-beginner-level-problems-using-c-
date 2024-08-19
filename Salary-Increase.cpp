"""
  Problem No: 36
Name: Salary Increase
ID: 1048
  """
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
    double n;
    cin>>n;
    while(true) {
        if(fmod(n*100,1)!=0) {cin>>n;}
        else if(fmod(n*10,1)==0) {break;}
    }
    if(n>=0 && n<=400.00) {
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<(n+(n*0.15))<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<(n*0.15)<<endl;
        cout<<"Em percentual: 15 %"<<endl;
    }
    // (Similar blocks for other salary ranges omitted for brevity)
    return 0;
}
