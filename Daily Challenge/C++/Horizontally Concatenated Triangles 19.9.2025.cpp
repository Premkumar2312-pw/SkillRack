#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.size();
    int a = (len + 1) / 2 - 1;

    for (int i = 1; i <= len; i += 2) {
        if (i == 1) {
            cout << string(a, '*') << s.substr(0, i);
            a--;
        } else {
            int n = i, c = i;
            while (n >= 1) {
                if (n == c)
                    cout << string(a, '*') << s.substr(0, n);
                else
                    cout << string(a + a, '*') << s.substr(0, n);
                n -= 2;
            }
        }
        a--;
        cout << "\n";
    }
    return 0;
}