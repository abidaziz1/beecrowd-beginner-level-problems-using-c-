/*
Read an integer N that is the number of test cases that follows. Each test case contains two integers X and Y. Print one output line for each test case that is the sum of Y odd numbers from X including it if is the case. For example:
for the input 4 5, the output must be 45, that is: 5 + 7 + 9 + 11 + 13
for the input 7 4, the output must be 40, that is: 7 + 9 + 11 + 13

Input
The first line of the input is an integer N that is the number of test cases that follow. Each test case is a line containing two integer X and Y.

Output
Print the sum of all consecutive odd numbers from X.

Input Sample	Output Sample
2
4 3
11 2

21
24
*/
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;  // Read the number of test cases
    
    for(int i = 0; i < N; i++) {
        int a,b; cin>>a>>b;
        int sum=0,count=0;
        while(count<b){
            if(a%2!=0){
                sum+=a;
                count++;
            }
            a++;
        }
        cout<<sum<<endl;
    }

    return 0;
}
