#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n;

    vector<pair<int,int>> res;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        cin >> x;

        int pos = s.find('-');
        int a = stoi(s.substr(0, pos));
        int b = stoi(s.substr(pos + 1));

        if (a < x && x < b) {
            res.push_back({a, x});
            res.push_back({x, b});
        } else {
            res.push_back({a, b});
        }
    }

    sort(res.begin(), res.end());

    for (auto &p : res)
        cout << p.first << "-" << p.second << "\n";
}