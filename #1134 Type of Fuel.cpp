/*
A gas station wants to determine which of their products is the preference of their customers. Write a program to read the type of fuel supplied (coded as follows: 1. Alcohol 2. Gasoline 3. Diesel 4. End). If you enter an invalid code (outside the range of 1 to 4) a new code must be requested. The program will end when the inserted code is the number 4.

Input
The input contains only integer and positive values.

Output
It should be written the message: "MUITO OBRIGADO" and the amount of customers who fueled each fuel type, as an example.

Input Sample	
8
1
7
2
2
4
Output Sample
MUITO OBRIGADO
Alcool: 1
Gasolina: 2
Diesel: 0
*/
#include <iostream>
using namespace std;

int main() {
    int alcool = 0, gasolina = 0, diesel = 0;
    int code;

    while (true) {
        cin >> code;

        if (code == 1) {
            alcool++;
        } else if (code == 2) {
            gasolina++;
        } else if (code == 3) {
            diesel++;
        } else if (code == 4) {
            break;
        } else {
            // Invalid code, no action needed, just continue the loop
            continue;
        }
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;

    return 0;
}
