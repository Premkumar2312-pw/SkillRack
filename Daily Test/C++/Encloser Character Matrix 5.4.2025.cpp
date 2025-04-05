#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int r, c, k;
    cin >> r >> c;
    vector<vector<string>> m(r, vector<string>(c));
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> m[i][j];
    cin >> k;

    int a = r + 2 * k, b = c + 2 * k;
    vector<vector<string>> g(a, vector<string>(b, ""));

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            g[i + k][j + k] = m[i][j];

    for (int i = 0; i < a; i += k) {
        for (int j = 0; j < b; j += k) {
            string bv = ((i / k + j / k) % 2 == 0) ? "1" : "0";
            for (int x = i; x < min(i + k, a); x++) {
                for (int y = j; y < min(j + k, b); y++) {
                    if (g[x][y] == "") g[x][y] = bv;
                }
            }
        }
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++)
            cout << g[i][j];
        cout << endl;
    }
    return 0;
}