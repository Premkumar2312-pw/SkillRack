#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c, k;
    cin >> r >> c;
    vector<vector<int>> m(r, vector<int>(c));
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> m[i][j];
    cin >> k;
    k %= 4;

    int n = r / 2, m_ = c / 2;
    vector<vector<int>> a(n, vector<int>(m_)), b(n, vector<int>(m_)),
                        c1(n, vector<int>(m_)), d(n, vector<int>(m_));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m_; j++) {
            a[i][j] = m[i][j];
            b[i][j] = m[i][j + m_];
            c1[i][j] = m[i + n][j];
            d[i][j] = m[i + n][j + m_];
        }

    while (k--) {
        swap(a, c1);
        swap(c1, d);
        swap(d, b);
    }

    for (int i = 0; i < n; i++) {
        for (int j : a[i]) cout << j << " ";
        for (int j : b[i]) cout << j << " ";
        cout << "\n";
    }
    for (int i = 0; i < n; i++) {
        for (int j : c1[i]) cout << j << " ";
        for (int j : d[i]) cout << j << " ";
        cout << "\n";
    }
}