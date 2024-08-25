/*
The MacPRONALTS is with a super promotion, exclusive to the contestants of the first Selective MaratonaTEC. But they had a problem, all runners were trying to buy at the same time, so this generated a very long queue. The worst is that the cashier girl no have calculator or a program to help her to calculate more quickly. You are the person that will help the girl and the MacPRONALTS increase their sells. Bellow has a menu day, that contains the product number and its value.

1001 | R$ 1.50

1002 | R$ 2.50

1003 | R$ 3.50

1004 | R$ 4.50

1005 | R$ 5.50

Input
The first entry is reported the number of purchased products (1 <= p <= 5). For each product follows the quantity (1 <= q <= 500) that the customer purchased.

Obs .: the product number will not be repeated.

Output
You must print the purchase amount with two decimal places. 
*/
#include<iostream>
using namespace std;
int main(){
    int n; cin>>n; int l,m,res; float total=0.0;
    for(int i=0; i<n; i++){
        cin>>l>>m;
        float p;
        if(l==1001) p=1.50;
        else if(l==1002) p =2.50;
        else if(l==1003) p=3.50;
        else if(l==1004) p = 4.50;
        else if(l==1005) p =5.50;
        
        total+=p*m;
    }
    cout<<fixed<<setprecision(2)<<total<<endl;
    return 0;
}
