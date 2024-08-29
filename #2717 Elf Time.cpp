/*
The manufacturing of Christmas gifts is a very complicated task. Several times the leprechauns stay up late working so that everything can be done in time and with perfection.

To better manage their schedule, the leprechauns stipulated how many minutes it takes to manufacture each gift.

Its almost the end of the day, and one of the leprechauns asked for your help.

There're N minutes left for the time to go away, and there are two remaining gifts for elf Ed to manufacture. Help him to find out if he will manage to manufacture both gifts today, or if he should delay the work for the next day.

Input
Each test case starts with a integer N, indicating how many minutes there are until the time to go away (2 <= N <= 100).

Following there will be two integers A and B, indicating how many minutes it takes to manufacture each of both gifts Ed has to manufacture (1 <= A, B <= 100).

Output
Print one row, containing the statement "Farei hoje!" if it's possible to manufacture both gifts before the time to go away, or "Deixa para amanha!" otherwise.

Input Samples	Output Samples
20
15 6

Deixa para amanha!

20
10 10

Farei hoje!
*/
#include <iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    int a,b; cin>>a>>b;
    if(a+b>n){cout<<"Deixa para amanha!"<<endl;}
    else {cout<<"Farei hoje!"<<endl;}
    
    return 0;
}
