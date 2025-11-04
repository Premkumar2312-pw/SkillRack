#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<string>> board(n, vector<string>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> board[i][j];

    int res = 0;
    // main diagonal
    for (int i = 0; i < n; i++)
        if (board[i][i] == board[0][0])
            res++;
    // anti diagonal
    for (int i = 0; i < n; i++)
        if (board[i][n - 1 - i] == board[0][n - 1])
            res++;

    cout << res << endl;
    return 0;
}