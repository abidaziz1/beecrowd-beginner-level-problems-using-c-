#include <iostream>
#include<iomanip>
using namespace std;

double recurs(int N){
        if (N==0) return 0;
        else return 1 / (2 + recurs(N - 1));
    }
double sqrt_2(int n){
    double result = 1 + recurs(n);
    return result;
}
int main()
{
    int n; cin>>n;
    double res = sqrt_2(n);
    cout<<fixed<<setprecision(10)<<res<<endl;
    
    return 0;
}
