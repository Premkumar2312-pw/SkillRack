#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    vector<string> keys(n), vals(n);
    string s;

    for (int i = 0; i < n; i++) {
        cin >> ws;
        getline(cin, s);              // whole line -> "key:value"
        auto pos = s.find(':');
        string k = s.substr(0, pos);
        string v = s.substr(pos + 1);
        // trim leading spaces in v
        int idx = 0;
        while (idx < (int)v.size() && v[idx] == ' ') idx++;
        v = v.substr(idx);
        keys[i] = k;
        vals[i] = v;
    }

    unordered_set<string> seen;
    for (int i = n - 1; i >= 0; i--) {
        if (!seen.count(keys[i])) {
            cout << keys[i] << ":" << vals[i] << "
";
            seen.insert(keys[i]);
        }
    }
    return 0;
}