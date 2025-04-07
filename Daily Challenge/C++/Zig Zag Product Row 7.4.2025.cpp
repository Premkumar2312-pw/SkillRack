#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int m[r][c];
    
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> m[i][j];

    int x, y;
    cin >> x >> y;
    x--; y--;

    for (int i = 0; i < c; i++) {
        int a = m[x][i];
        int b = m[y][c - 1 - i];
        cout << a * b << " ";
    }
    return 0;
}