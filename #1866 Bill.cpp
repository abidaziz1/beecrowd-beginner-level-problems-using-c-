/*
Two friends ask the attendant a snack bar propose a challenge , so that whoever hit him more , would not pay the bill. Then the following is proposed : Given the following sum below report the result , with the same number of terms : S = 1 - 1 + 1 - 1 + 1 - 1 + 1 - 1 ... Write a program that , given a number of terms, report the result of the sum above.

Input
An integer C shall be informed , which is the amount of test cases. Each test case starts with an integer N ( 1 ≤ N ≤ 1000) , indicating the number of terms of the sum .

Output
For each test case print a number S , which is the sum of N terms of expression.

Input Sample	
3

11

7

18
Output Sample
1

1

0
*/

#include <iostream>
using namespace std;

int main()
{
    int n,m; cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        if(m%2==0) cout<<0<<endl;
        else cout<<1<<endl;
    }

    return 0;
}
