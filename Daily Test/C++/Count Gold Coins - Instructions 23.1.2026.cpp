#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<int>> box(r, vector<int>(c));
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> box[i][j];

    string ins;
    cin >> ins;

    set<pair<int, int>> seen;
    int i = 0, j = 0;
    int res = box[0][0];
    seen.insert({0, 0});

    for (char k : ins) {
        if (k == 'E') j++;
        if (k == 'W') j--;
        if (k == 'N') i--;
        if (k == 'S') i++;

        if (seen.count({i, j}) && box[i][j] > 0) {
            box[i][j]--;
            res--;
        } else {
            res += box[i][j];
            seen.insert({i, j});
        }
    }

    cout << res;
}