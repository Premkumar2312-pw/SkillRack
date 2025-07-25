#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string s;
    cin >> s;
    int dot = s.find('.');
    int a = dot - 1, b = 1;

    for (int i = 0; i < dot; i++) {
        if (s[i] == '0') {
            cout << 0 << " ";
        } else {
            cout << (s[i] - '0') * (int)pow(10, a) << " ";
        }
        a--;
    }

    for (int i = dot + 1; i < s.size(); i++) {
        if (s[i] == '0') {
            cout << 0 << " ";
        } else {
            cout << (s[i] - '0') << "/" << (int)pow(10, b) << " ";
        }
        b++;
    }

    return 0;
}