#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int x;
    while (true) {
        cin >> x;
        if (x != 2002) {
            cout << "Senha Invalida" << endl;
        } else {
            break;
        }
    }
    cout << "Acesso Permitido" << endl;
}
