#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<char>> g(r, vector<char>(c));
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            cin >> g[i][j];

    vector<vector<bool>> covered(r, vector<bool>(c, false));

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (g[i][j] == 'S' || g[i][j] == 'L') {
                int d = (g[i][j] == 'S') ? 1 : 2;
                for (int x = i - d; x <= i + d; ++x) {
                    for (int y = j - d; y <= j + d; ++y) {
                        if (x >= 0 && x < r && y >= 0 && y < c)
                            covered[x][y] = true;
                    }
                }
            }
        }
    }

    int cnt = 0;
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            if (covered[i][j])
                ++cnt;

    cout << cnt << endl;
    return 0;
}