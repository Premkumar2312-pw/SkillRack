#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.size();
    for(int idx = 0; idx < len; idx++) {
        char i = s[idx];
        int b = -1;
        for(int k = idx + 1; k < len; k++) {
            if(s[k] == i) {
                b = k;
                break;
            }
        }
        if(b != -1) {
            cout << s.substr(idx, b - idx + 1) << endl;
        } else {
            break;
        }
    }
}