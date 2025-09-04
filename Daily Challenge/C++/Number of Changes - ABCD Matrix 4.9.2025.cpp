#include <iostream>
#include <vector>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;
    vector<char> a = {'A', 'B', 'C', 'D'};
    vector<vector<char>> mat(R, vector<char>(C));
    int res = 0;

    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            cin >> mat[i][j];

    for (int i = 0; i < R; i += 2) {
        for (int j = 0; j < C; j += 2) {
            int idx = 0;
            for (int k = i; k < i + 2; k++) {
                for (int l = j; l < j + 2; l++) {
                    if (mat[k][l] != a[idx]) res++;
                    idx++;
                }
            }
        }
    }

    cout << res << endl;
    return 0;
}