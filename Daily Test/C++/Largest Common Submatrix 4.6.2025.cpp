#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n; cin >> m >> n;
    vector<vector<string>> a(m, vector<string>(n));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    int r, c; cin >> r >> c;
    vector<vector<string>> b(r, vector<string>(c));
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> b[i][j];

    int k = min({m, n, r, c});
    bool found = false;

    for (int s = k; s > 0 && !found; s--) {
        bool ok = true;
        for (int i = 0; i < s && ok; i++) {
            for (int j = 0; j < s; j++) {
                if (a[m - s + i][n - s + j] != b[r - s + i][c - s + j]) {
                    ok = false;
                    break;
                }
            }
        }
        if (ok) {
            for (int i = m - s; i < m; i++) {
                for (int j = n - s; j < n; j++) {
                    cout << a[i][j];
                    if (j != n - 1) cout << " ";
                }
                cout << "\n";
            }
            found = true;
        }
    }

    if (!found) cout << -1 << "\n";

    return 0;
}