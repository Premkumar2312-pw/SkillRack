#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;

    vector<vector<int>> unit(R, vector<int>(C));

    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++) {
            int x;
            cin >> x;
            unit[i][j] = x % 10;
        }

    int N;
    cin >> N;

    for (int i = 0; i <= R - N; i++) {
        for (int j = 0; j <= C - N; j++) {

            int val = unit[i][j];
            bool same = true;

            for (int x = i; x < i + N && same; x++) {
                for (int y = j; y < j + N; y++) {
                    if (unit[x][y] != val) {
                        same = false;
                        break;
                    }
                }
            }

            if (same) {
                cout << "Yes";
                return 0;
            }
        }
    }

    cout << "No";
    return 0;
}