#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<char>> mat(n, vector<char>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];

    int m, miss = 0;
    cin >> m;

    while (m--) {
        char dir, color;
        int row;
        cin >> dir >> row >> color;

        bool hit = false;

        if (dir == 'T')
            for (int i = 0; i < n && !hit; i++)
                if (mat[i][row - 1] == color) mat[i][row - 1] = '*', hit = true;

        else if (dir == 'B')
            for (int i = n - 1; i >= 0 && !hit; i--)
                if (mat[i][row - 1] == color) mat[i][row - 1] = '*', hit = true;

        else if (dir == 'L')
            for (int j = 0; j < n && !hit; j++)
                if (mat[row - 1][j] == color) mat[row - 1][j] = '*', hit = true;

        else if (dir == 'R')
            for (int j = n - 1; j >= 0 && !hit; j--)
                if (mat[row - 1][j] == color) mat[row - 1][j] = '*', hit = true;

        if (!hit) miss++;
    }

    for (auto &r : mat) {
        for (char c : r) cout << c << " ";
        cout << "\n";
    }

    cout << miss;
}