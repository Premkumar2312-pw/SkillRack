#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;
    vector<vector<string>> matrix(R, vector<string>(C));

    for (int i = 0; i < R; ++i)
        for (int j = 0; j < C; ++j)
            cin >> matrix[i][j];

    int X, Y;
    cin >> X >> Y;

    string target = matrix[X - 1][Y - 1];
    int n = sqrt(target.size());

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cout << target[i * n + j] << " ";
        cout << endl;
    }

    return 0;
}