#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<string,string>> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i].first >> s[i].second;

    string c;
    cin >> c;

    set<string> out, in;

    for (auto &p : s) {
        if (p.first.find(c) != string::npos)
            out.insert(p.second);
        if (p.second.find(c) != string::npos)
            in.insert(p.first);
    }

    cout << c << " -> ";
    if (out.empty()) cout << -1;
    else for (auto &x : out) cout << x << " ";

    cout << "\n" << c << " <- ";
    if (in.empty()) cout << -1;
    else for (auto &x : in) cout << x << " ";

    return 0;
}