#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<int>> a(r, vector<int>(c)), b(c, vector<int>(r));
    vector<int> z(c);

    for(int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j)
            cin >> a[i][j];

    for(int j = 0; j < c; ++j) {
        for(int i = 0; i < r; ++i)
            b[j][i] = a[i][j];
        sort(b[j].begin(), b[j].end());
        z[j] = count(b[j].begin(), b[j].end(), 0);
    }

    vector<int> idx(c);
    iota(idx.begin(), idx.end(), 0);
    sort(idx.begin(), idx.end(), [&](int i, int j) { return z[i] < z[j]; });

    for(int i = 0; i < r; ++i) {
        for(int j : idx)
            cout << b[j][i] << ' ';
        cout << '\n';
    }
}