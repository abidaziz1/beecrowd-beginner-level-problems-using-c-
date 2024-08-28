/*

*/
#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    char s; cin>>s;
    double matrix[12][12]; double sum=0.0; int count=0;
    for(int i=0; i<12; i++){
        for(int j=0;j<12;j++){
            cin>>matrix[i][j];
        }
        for(int i=0;i<12;i++){
            for(int j=12-i-1;j<i;++j){
                sum+=matrix[i][j];
                count++;
            }
        }
        if(char=='S'){cout<<fixed<<setprecision(1)<<sum<<endl;}
        else if(char=='M'){cout<<fixed<<setprecision(1)<<sum/count<<endl;}
    }

    return 0;
}
