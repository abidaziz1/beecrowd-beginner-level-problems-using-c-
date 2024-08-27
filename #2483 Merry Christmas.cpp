/*
You get so happy at Christmas that you want to scream at everyone: "Merry Christmas!!". To put all this happiness out, you wrote a program that, given an I index of happiness, your Christmas scream is more lively.

Input
The input consists of an integer I (1 < I ≤ 104) that represents that happiness index.

Output
The output consists of the phrase "Feliz natal!" ("Merry Christmas" in Portuguese), and the last a of the sentence is repeated I times. A line break is necessary after printing the sentence.

Input Sample	Output Sample
5

Feliz nataaaaal!
*/
#include <iostream>

using namespace std;

int main() {
    int n; cin>>n;
    string res = "Feliz nat";
    res += string(n,'a');
    res +="l!";
    cout<<res<<endl;

    return 0;
}
