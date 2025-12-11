#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];

    while (n > 1) {
        int new_n = n / 2;
        vector<vector<int>> b(new_n, vector<int>(new_n));

        for (int i = 0; i < n; i += 2) {
            for (int j = 0; j < n; j += 2) {
                int s = a[i][j] + a[i+1][j] + a[i][j+1] + a[i+1][j+1];
                b[i/2][j/2] = s;
            }
        }

        for (int i = 0; i < new_n; ++i) {
            for (int j = 0; j < new_n; ++j)
                cout << b[i][j] << " ";
            cout << "
";
        }

        a = b;
        n = new_n;
    }
    return 0;
}