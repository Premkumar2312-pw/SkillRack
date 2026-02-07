#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<string>> mat(r, vector<string>(c));
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> mat[i][j];

    int k;
    cin >> k;

    for (int i = 0; i < r; i += k) {
        for (int j = 0; j < c; j += k) {
            vector<string> res;
            for (int x = i; x < i + k; x++)
                for (int y = j; y < j + k; y++)
                    res.push_back(mat[x][y]);

            sort(res.begin(), res.end());

            int idx = 0;
            for (int x = i; x < i + k; x++)
                for (int y = j; y < j + k; y++)
                    mat[x][y] = res[idx++];
        }
    }

    for (auto &row : mat) {
        for (auto &x : row)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}