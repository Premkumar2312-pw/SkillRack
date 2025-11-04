#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<string>> board(n, vector<string>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> board[i][j];
    int res = 0;
    int diag[2] = {1, 1};
    int rev[2] = {1, -1};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == "1") {
                int nc = i + diag[0], nr = j + diag[1];
                while (nc >= 0 && nc < n && nr >= 0 && nr < n) {
                    if (board[nc][nr] == "1")
                        res++;
                    nc++;
                    nr++;
                }
                int ec = i + rev[0], er = j + rev[1];
                while (ec >= 0 && ec < n && er >= 0 && er < n) {
                    if (board[ec][er] == "1")
                        res++;
                    ec++;
                    er--;
                }
            }
        }
    }
    cout << res << endl;
    return 0;
}