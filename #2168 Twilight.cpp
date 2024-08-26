/*
At Twilight the Portland city is full of vampires and werewolves. However, none of them wants to be seen while walking downtown.

At each corner of Portland downtown, one surveillance camera will be installed. A monthly updated map with all working cameras is made available at City Hall website. 

A block is considered safe if there is at least two working cameras in its four corners. At Portland downtown all the blocks are squares with the same size.

Your task is, given the working cameras map, to indicate the status of all downtown blocks.

Input
The first line of input has a positive integer N (1 ≤ N ≤ 100). For the next N+1 lines there are N+1 numbers in each, indicating, for each corner, the presence or absence of a working surveillance camera. The number 1 represents a working camera at that corner, and the number zero represents there is no working camera in that corner.

Output
The output is given in N lines. Each line has N characters, indicating whether the corresponding block is safe or unsafe. If a block is safe, you must print the character S; if it is not safe, print the character U.

Input Samples	Output Samples
1
1 0
0 0

U

2
1 0 0
1 1 0
0 0 1

SU
SS

3
1 1 0 1
1 0 1 0
1 0 0 1
0 1 1 0

SSS
SUS
SSS
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    // Creating a 2D vector to store the camera map
    vector<vector<int>> cameras(N + 1, vector<int>(N + 1));
    
    // Reading the input map
    for (int i = 0; i <= N; ++i) {
        for (int j = 0; j <= N; ++j) {
            cin >> cameras[i][j];
        }
    }
    
    // Checking each block and determining if it is safe or unsafe
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            int camera_count = cameras[i][j] + cameras[i][j + 1] + cameras[i + 1][j] + cameras[i + 1][j + 1];
            if (camera_count >= 2) {
                cout << 'S';
            } else {
                cout << 'U';
            }
        }
        cout << endl;
    }
    
    return 0;
}
