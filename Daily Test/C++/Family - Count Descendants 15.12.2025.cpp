#include <bits/stdc++.h>
using namespace std;

unordered_map<string, vector<string>> mp;

int dfs(string p) {
    int cnt = 1;
    for (auto &c : mp[p])
        cnt += dfs(c);
    return cnt;
}

int main() {
    int n;
    cin >> n;

    string child, father;
    for (int i = 0; i < n; i++) {
        cin >> child >> father;
        mp[father].push_back(child);
    }

    string person;
    cin >> person;

    cout << dfs(person);
    return 0;
}