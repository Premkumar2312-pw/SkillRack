#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;
    vector<vector<string>> mat(R, vector<string>(C));

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (isdigit(mat[i][j][0])) continue;
            if (mat[i][j] == "+") {
                int up = stoi(mat[i-1][j]);
                int down = stoi(mat[i+1][j]);
                mat[i][j] = to_string(up + down);
            } else {
                int up = stoi(mat[i-1][j]);
                int down = stoi(mat[i+1][j]);
                mat[i][j] = to_string(abs(up - down));
            }
        }
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}