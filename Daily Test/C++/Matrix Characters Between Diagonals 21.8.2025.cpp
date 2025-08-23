#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<char>> mat(r, vector<char>(c));
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> mat[i][j];
        }
    }
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (r == c) {
                if (i == j) cout << mat[i][j] << " ";
                else cout << "* ";
            } else if (r > c) {
                if (i - j >= 0 && i - j <= r - c)
                    cout << mat[i][j] << " ";
                else cout << "* ";
            } else {
                if (j - i >= 0 && j - i <= c - r)
                    cout << mat[i][j] << " ";
                else cout << "* ";
            }
        }
        cout << "\n";
    }
    return 0;
}