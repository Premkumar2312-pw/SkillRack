#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<int>> mat(r, vector<int>(c));

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> mat[i][j];

    for(int j = 0; j < c; j++) {
        int maxVal = INT_MIN;

        for(int i = 0; i < r; i++) {
            maxVal = max(maxVal, mat[i][j]);
        }

        cout << maxVal << " ";
    }

    return 0;
}