#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<string>> grid(n, vector<string>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

    int l;
    cin >> l;

    vector<int> r(n, 0), c(n, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == "*") {
                r[i]++;
                c[j]++;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i <= n - l; i++) {
        int sr = 0, sc = 0;
        for (int k = i; k < i + l; k++) {
            sr += r[k];
            sc += c[k];
        }
        ans = max(ans, max(sr, sc));
    }

    cout << ans;
    return 0;
}