#include <iostream>
using namespace std;

int main() {
    int r, c, m[50][50], cnt = 0;
    cin >> r >> c;
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            cin >> m[i][j];

    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            if (m[i][j] == (i+1)*10 + (j+1)) cnt++;

    cout << cnt << endl;
    return 0;
}