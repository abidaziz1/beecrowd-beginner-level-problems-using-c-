/*
In 2012 it was achieved a new world record in the famous Competition Hot Dogs Nathan: the champion, Joey Chestnut devoured 68 hot dogs in ten minutes, an increase amazing compared to 62 sandwiches devoured by the same Chestnut in 2011.

Nathan's Famous Corporation restaurant, located in Brooklyn, NY, is responsible for the competition. They produce delicious hot dogs, world famous, but when it comes math is they are not as good. They wish to be listed in the Guinness Book of Records, but they should fill out a form describing the basic facts of the competition. In particular, they must inform the average number of hot dogs consumed by participants during the competition.

You can help them? They promised to pay it with one of their tasty hot dogs. Given the total of hot dogs consumed and the total of participants in the competition, you should write a program to determine the average number of hot dogs consumed by participants.

Input
The input consists of a single line containing two integers H and P (1 ≤ H, P ≤ 1000) indicating respectively the total number of consumed hot dogs and the total number of participants in the competition.

Output
Your program should produce a single line with a rational number representing the average hot dogs consumed by the participants. The result should be written as a rational number with exactly two digits after the decimal point, rounded if necessary.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int H, P;
    
    // Input: total number of hot dogs consumed (H) and total number of participants (P)
    cin >> H >> P;
    
    // Calculate the average
    double average = static_cast<double>(H) / P;
    
    // Output the result with exactly two decimal places
    cout << fixed << setprecision(2) << average << endl;
    
    return 0;
}
