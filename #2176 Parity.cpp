#include <iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cin>>s;
    int count=0;
    for(char bit : s){
        if(bit == '1') count++;
    }
    if(count%2==0) s+='0';
    else s+='1';
    cout<<s<<endl;
    return 0;
}
