/*
One day, the great hero Chapolout helped a scientist who has created many inventions. One of these inventions is a system that opens the door secret laboratory. The system consists of removing a side door of the candlestick candle, that it opens, and to put the candle back to the chandelier, the door closes. But Chapolout found that the sail was just a pretend. In fact, the scientist assistant, called Pepe, that opened the lab door, inside. A while later, the system was modified to also run the initial project. A pressure sensor placed below the chandelier candle, so that the removal of the active sail system. This system issues a log report for every time the door opened or closed, but the log is quite confusing. Every record, three whole numbers are registered, and the hour and the minute the event occurred and a value that represents the door opened or closed at the time. Pepe asks for your help to convert the log data more readable data to it.

Write a program that, given a log record, this is converted into more readable texts.

Input
The first line contains the number of test cases. Each line of a test case has three integers H, M and O, the time being, the minutes of the occurrence, and the instance itself (zero if the door closed or the door opened).

Output
For each test case, print the time of the occurrence, in due form, followed by a space, a hyphen and a space, and the phrase "A porta abriu!" or "A porta fechou!" as the occurrence recorded.

Input Sample	
3

15 30 1

23 50 0

0 5 1
Output Sample
15:30 - A porta abriu!

23:50 - A porta fechou!

00:05 - A porta abriu!
*/
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{   
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int h,m,o;
        cin>>h>>m>>o;
        cout<<setw(2)<<setfill('0')<<h<<":";
        cout<<setw(2)<<setfill('0')<<m; cout<<" - ";
        if(o==1) cout << "A porta abriu!";
        else cout << "A porta fechou!";
        cout<<endl;
    }
    
    return 0;
}
