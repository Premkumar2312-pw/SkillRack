#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int w(char ch) {
    return tolower(ch) - 'a' + 1;
}

int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<char>> m(r, vector<char>(c));
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            cin >> m[i][j];

    int a, b, x, y;
    cin >> a >> b >> x >> y;
    a--; b--; x--; y--;

    int sum1 = 0, sum2 = 0;
    if (a == x) {
        int e = min(b, y), f = max(b, y);
        for (int j = e; j <= f; ++j) sum1 += w(m[a][j]);
    } else if (b == y) {
        int e = min(a, x), f = max(a, x);
        for (int i = e; i <= f; ++i) sum1 += w(m[i][b]);
    } else {
        for (int i = min(a, x); i <= max(a, x); ++i) sum1 += w(m[i][b]);
        for (int j = min(b, y); j <= max(b, y); ++j) if (j != b) sum1 += w(m[x][j]);
        for (int j = min(b, y); j <= max(b, y); ++j) sum2 += w(m[a][j]);
        for (int i = min(a, x); i <= max(a, x); ++i) if (i != a) sum2 += w(m[i][y]);
        sum1 = min(sum1, sum2);
    }

    cout << sum1 << endl;
    return 0;
}