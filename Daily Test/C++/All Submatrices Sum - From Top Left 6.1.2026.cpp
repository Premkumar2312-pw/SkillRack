#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int m[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> m[i][j];

    for (int i = 0; i < r; i++)
        for (int j = 1; j < c; j++)
            m[i][j] += m[i][j-1];

    for (int j = 0; j < c; j++)
        for (int i = 1; i < r; i++)
            m[i][j] += m[i-1][j];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
    return 0;
}