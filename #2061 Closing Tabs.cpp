/*
Péricles has an unique interest in history. With his up-to-date internet browser chromed fox, he wandered in the most obscure sites about ancient Greek mythology.

By some type of cosmic irony, Péricles' browser was infected by a malware with a peculiar characteristic: every time Péricles closed a tab in his browser, another two opened! However, when Péricles clicked one of the ads (all tabs were infested with ads), the tab crashed, and no other tabs were opened.

Your taks is to compute the final number of tabs of Péricles's browser, knowing the initial number of tabs and the actions taken by Péricles. There are two possible actions: fechou (when Péricles closed a tab) and clicou (when Péricles clicked on an ad).

Input
The input is initiated by a line containing two integer numbers, N and M (0 < N, M < 500), representing the initial number of tabs and the number of actions performed by Péricles. Each subsequent line contains an action (fechou or clicou). Naturally, the current number of tabs is always greater or equal to zero.

Output
The output must consist of a line containing the final number of tabs.

Input Sample	Output Sample
3 5
fechou
fechou
clicou
clicou
clicou

2
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    int tabs = N;
    string action;
    
    for (int i = 0; i < M; ++i) {
        cin >> action;
        if (action == "fechou") {
            tabs += 1; // Each "fechou" leads to 1 net increase in tabs
        } else if (action == "clicou") {
            tabs -= 1; // Each "clicou" leads to 1 net decrease in tabs
        }
    }
    
    cout << tabs << endl;
    
    return 0;
}
