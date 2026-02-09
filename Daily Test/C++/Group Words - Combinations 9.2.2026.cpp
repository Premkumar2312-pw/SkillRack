#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    unordered_map<string, vector<string>> mp;

    while (cin >> s) {
        string key = s;
        sort(key.begin(), key.end());
        mp[key].push_back(s);
    }

    for (auto &p : mp) {
        for (auto &w : p.second)
            cout << w << " ";
        cout << endl;
    }
}