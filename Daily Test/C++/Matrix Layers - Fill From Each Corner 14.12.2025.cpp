#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, n;
    cin >> a >> b >> c >> d;
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n, 0));
    int s = 0, e = n - 1, count = 0;

    while (true) {
        int j = 0, k = 0;
        for (int i = s; i < e; i++) {
            mat[s][i] = a + j;
            mat[i][e] = b + j;
            j++;
        }
        for (int i = e; i > s; i--) {
            mat[i][s] = d + k;
            mat[e][i] = c + k;
            k++;
        }
        count++;
        s++;
        e--;

        if (n / 2 == count)
            break;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j];
            if (j != n - 1) cout << " ";
        }
        cout << "
";
    }
    return 0;
}