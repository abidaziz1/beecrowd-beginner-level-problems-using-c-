/*
Finally, the team from the University managed to qualify for the Finals of the SBC Programming Marathon. The three members of the team and their coach are looking forward to represent the university, and besides trainining very much, prepare with every detail your trip to São Paulo, where will be held the National Final.

They plan to carry with them all their electronic devices: mobile phone, tablet, laptop, wifi hotspot, camera, etc, and know they will need several power outlets to connect all these devices. They were told that the four will be in the same hotel room, but have been advised that in each room there is only one available power outlet.

Prevented, the three members of the team and the coach bought each a power strip, thus connect several devices at one outlet of the hotel room; they may also connect one another in strip to further increase the number of available sockets. However, as the rules have many outlets, they asked you to write a program that, given the number of outlets in each rule, determine the maximum number of devices that can be connected to the energy in the same instant.

Entrada
The input consists of a line with four integers T1, T2, T3, T4, indicating the number of taken from each of the four strips (2 ≤ Ti ≤ 6).

Saída
Your program should produce a single line containing a single integer indicating the maximum number of devices that can be connected to the energy in the same instant.

Input Example	Output Example
2 4 3 2

8

6 6 6 6

21

2 2 2 2

5
*/
#include <iostream>

using namespace std;

int main() {
    int T1, T2, T3, T4;
    
    // Read the number of outlets in each strip
    cin >> T1 >> T2 >> T3 >> T4;
    
    // Calculate the maximum number of devices that can be connected
    int max_devices = (T1 + T2 + T3 + T4) - 3;
    
    // Output the result
    cout << max_devices << endl;
    
    return 0;
}
