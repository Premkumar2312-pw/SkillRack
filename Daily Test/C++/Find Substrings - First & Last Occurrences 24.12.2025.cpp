#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> l(n), l2;

    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }

    for (int i = 0; i < n; i++) {
        string s = l[i];
        int len = (int)s.size();

        int a = 0, b = len - 1;

        char c = l[(i - 1 + n) % n].back();

        for (int j = 0; j < len; j++) {
            if (c == s[j]) {
                a = j;
                break;
            }
        }

        char d = l[(i + 1) % n][0];

        for (int k = len - 1; k >= 0; k--) {
            if (d == s[k]) {
                b = k;
                break;
            }
        }

        if (a < b)
            l2.push_back(s.substr(a, b - a + 1));
        else
            l2.push_back(s.substr(b, a - b + 1));
    }

    for (auto &x : l2) {
        cout << x << '
';
    }

    return 0;
}