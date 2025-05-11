#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c, x, y;
    cin >> r >> c;
    vector<vector<int>> m(r, vector<int>(c));
    vector<int> z;

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> m[i][j];

    cin >> x >> y;

    for (int j = 0; j < c; j++) {
        if (j % 2 == 0)
            for (int i = 0; i < r; i++) z.push_back(m[i][j]);
        else
            for (int i = r - 1; i >= 0; i--) z.push_back(m[i][j]);
    }

    int pos = (y - 1) * r + ((y % 2 == 1) ? (x - 1) : (r - x));
    z.erase(z.begin() + pos);
    z.push_back(-1);

    int idx = 0;
    for (int j = 0; j < c; j++) {
        if (j % 2 == 0)
            for (int i = 0; i < r; i++) m[i][j] = z[idx++];
        else
            for (int i = r - 1; i >= 0; i--) m[i][j] = z[idx++];
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }

    return 0;
}