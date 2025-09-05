#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;
    vector<vector<int>> mat(R, vector<int>(C));
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            cin >> mat[i][j];

    int res = 0;
    for (int i = 0; i < C; i++) {
        int small = mat[0][i];
        for (int j = 1; j < R; j++)
            small = min(small, mat[j][i]);

        int len = to_string(small).length();

        for (int j = 0; j < R; j++) {
            string s = to_string(mat[j][i]).substr(0, len);
            mat[j][i] = stoi(s);
            res += mat[j][i];
        }
    }

    for (auto &row : mat) {
        for (int v : row) cout << v << " ";
        cout << "\n";
    }
    cout << res << "\n";
}