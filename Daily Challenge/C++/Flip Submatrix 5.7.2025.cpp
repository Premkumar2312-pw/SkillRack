#include <iostream>
using namespace std;

int main() {
    int r, c, m[50][50];
    cin >> r >> c;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> m[i][j];
    int x, y, k;
    cin >> x >> y >> k;
    x--; y--;
    for (int i = 0; i < k / 2; i++) {
        for (int j = 0; j < k; j++) {
            int t = m[x + i][y + j];
            m[x + i][y + j] = m[x + k - 1 - i][y + j];
            m[x + k - 1 - i][y + j] = t;
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << m[i][j] << " ";
        cout << "\n";
    }
}