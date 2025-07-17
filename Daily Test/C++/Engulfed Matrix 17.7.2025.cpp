#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int m[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> m[i][j];
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int rowStart = min(a, b);
    int rowEnd = max(a, b);
    int colStart = min(x, y);
    int colEnd = max(x, y);

    for (int i = rowStart; i < rowEnd - 1; i++) {
        for (int j = colStart; j < colEnd - 1; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }

    return 0;
}