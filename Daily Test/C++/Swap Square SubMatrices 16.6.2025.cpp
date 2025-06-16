#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c, k;
    cin >> r >> c >> k;
    vector<vector<char>> m(r, vector<char>(c));
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> m[i][j];

    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    r1--; c1--; r2--; c2--;
    int hk = k / 2;
    vector<vector<char>> s1(k, vector<char>(k)), s2(k, vector<char>(k));

    for (int i = -hk; i <= hk; i++)
        for (int j = -hk; j <= hk; j++) {
            s1[i + hk][j + hk] = m[r1 + i][c1 + j];
            s2[i + hk][j + hk] = m[r2 + i][c2 + j];
        }

    for (int i = -hk; i <= hk; i++)
        for (int j = -hk; j <= hk; j++) {
            m[r1 + i][c1 + j] = s2[i + hk][j + hk];
            m[r2 + i][c2 + j] = s1[i + hk][j + hk];
        }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << m[i][j] << " ";
        cout << "\n";
    }
    return 0;
}