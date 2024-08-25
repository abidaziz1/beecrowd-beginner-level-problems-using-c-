//Binary to Hexa
#include <iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    char hex[100]; int i=0;
    while(n>0){
        int rem = n%16;
        if(rem<10){
            hex[i]= rem+'0';
        }
        else{hex[i]= rem-10+'A';}
        i++;
        n/=16;
    }
    for(int j=i-1;j>=0;j--){
        cout<<hex[j];
    }
    cout<<endl;

    return 0;
}

#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int n;
    cin >> n;

    stringstream ss;
    ss << hex << uppercase << n;
    cout << ss.str() << endl;

    return 0;
}

//Using Bitwise Operations:
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << "0";
    } else {
        for (int i = (sizeof(int) * 8) - 4; i >= 0; i -= 4) {
            int hexDigit = (n >> i) & 0xF;
            if (hexDigit > 0 || i < 4) {
                if (hexDigit < 10) {
                    cout << hexDigit;
                } else {
                    cout << (char)(hexDigit - 10 + 'A');
                }
            }
        }
    }
    
    cout << endl;
    return 0;
}
