#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n;
    cin >> s >> n;

    string l1 = "", l2 = "";
    for (char ch : s) {
        if (isalpha(ch)) l1 += ch;
        else l2 += ch;
    }

    int a = l1.length() / (n * n);
    int b = l2.length() / (n * n);

    int c = a, d = b;

    vector<vector<string>> m1, m2;

    for (int i = 0; i < n; i++) {
        vector<string> r1, r2;
        for (int j = 0; j < n; j++) {
            r2.push_back(l2.substr(d - b, b));
            d += b;
            r1.push_back(l1.substr(c - a, a));
            c += a;
        }
        m1.push_back(r1);
        m2.push_back(r2);
    }

    for (auto &r : m1) {
        for (auto &x : r) cout << x << " ";
        cout << "\n";
    }
    for (auto &r : m2) {
        for (auto &x : r) cout << x << " ";
        cout << "\n";
    }

    return 0;
}