#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int k;
    cin >> s >> k;

    int i = 0, d = 1;
    for (char c : s) {
        cout << string(i, '*') << c << '\n';
        i += d;
        if (i == k) { d = -1; i -= 2; }
        if (i < 0) { d = 1; i = 1; }
    }
    return 0;
}