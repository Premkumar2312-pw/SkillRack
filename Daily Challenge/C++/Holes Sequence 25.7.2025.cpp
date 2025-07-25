#include <iostream>
#include <string>
using namespace std;

int hole(char d) {
    if (d == '0' || d == '4' || d == '6' || d == '9') return 1;
    if (d == '8') return 2;
    return 0;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        string s = to_string(i);
        int cnt = 0;
        for (char c : s) cnt += hole(c);
        if (cnt >= s.length()) cout << i << " ";
    }
    return 0;
}