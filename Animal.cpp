#include<iostream>
using namespace std;
int main() {
    string a, b, c;
    cin >> a >> b >> c;
    if (a == "vertebrado" && b == "ave" && c == "carnivoro") {
        cout << "aguia" << endl;
    } else if (a == "vertebrado" && b == "ave" && c == "onivoro") {
        cout << "pomba" << endl;
    }
    // (Additional conditions omitted for brevity)
    return 0;
}
