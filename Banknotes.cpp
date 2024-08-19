"""
  Problem No: 18
Name: Banknotes
ID: 1018
  """
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
    int N; cin>>N;
    int x = N/100; int y= N-(x*100);
    int z = y/50; int a = y-(z*50);
    int b = a/20; int c= a-(b*20);
    int d = c/10; int e= c-(d*10);
    int f = e/5; int g= e-(f*5);
    int h = g/2; int i= g-(h*2);
    cout<<x<<" nota(s) de R$ 100,00"<<endl;
    cout<<z<<" nota(s) de R$ 50,00"<<endl;
    cout<<b<<" nota(s) de R$ 20,00"<<endl;
    cout<<d<<" nota(s) de R$ 10,00"<<endl;
    cout<<f<<" nota(s) de R$ 5,00"<<endl;
    cout<<h<<" nota(s) de R$ 2,00"<<endl;
    cout<<i<<" nota(s) de R$ 1,00"<<endl;
    return 0;
}
