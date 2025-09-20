#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    vector<vector<int>> a(n, vector<int>(v[0].size()));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < (int)v[i].size(); j++)
            a[i][j] = v[i][j] - '0';

    int g = 0;
    for (auto &row : a) {
        int idx = max_element(row.begin(), row.end()) - row.begin();
        int bin = 0, base = 1, x = row[idx];
        while (x) { bin += (x % 2) * base; base *= 10; x /= 2; }
        row[idx] = bin;
        int val = 0;
        for (int x : row) val = val * 10 + x;
        g += val;
    }
    cout << g;
}