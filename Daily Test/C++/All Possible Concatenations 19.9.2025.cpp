#include <bits/stdc++.h>
using namespace std;

string rev(const string &s) {
    return string(s.rbegin(), s.rend());
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    string r1 = rev(s1), r2 = rev(s2);

    vector<string> v = {
        s1 + s2, s1 + r2, r1 + s2, r1 + r2,
        s2 + s1, s2 + r1, r2 + s1, r2 + r1
    };
    sort(v.begin(), v.end());
    for (auto &x : v) cout << x << '\n';
    return 0;
}