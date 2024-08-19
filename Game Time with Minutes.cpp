#include<iostream>
using namespace std;
int main() {
    int startHour, startMinute, endHour, endMinute;
    cin >> startHour >> startMinute >> endHour >> endMinute;
    int totalStart = startHour * 60 + startMinute;
    int totalEnd = endHour * 60 + endMinute;
    int duration = totalEnd - totalStart;
    if (duration <= 0) {
        duration += 24 * 60;
    }
    cout << "O JOGO DUROU " << duration / 60 << " HORA(S) E " << duration % 60 << " MINUTO(S)" << endl;
    return 0;
}
