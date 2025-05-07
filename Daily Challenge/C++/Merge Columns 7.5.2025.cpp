#include <iostream>
using namespace std;

int main() {
    int r, c, l;
    cin >> r >> c;
    int m[r][c];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> m[i][j];

    cin >> l;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < (l <= c / 2 ? c - l : l); j++) {
            int x = l - j - 1, y = l + j;
            if (x >= 0 && y < c)
                cout << m[i][x] + m[i][y] << " ";
            else if (y >= c)
                cout << m[i][x] << " ";
            else
                cout << m[i][y] << " ";
        }
        cout << endl;
    }

    return 0;
}