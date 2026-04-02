#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> matrix[i][j];

    set<int> left_diag, right_diag;

    for(int i = 0; i < n; i++) {
        left_diag.insert(matrix[i][i]);
        right_diag.insert(matrix[i][n - i - 1]);
    }

    if(left_diag == right_diag)
        cout << "yes";
    else
        cout << "no";

    return 0;
}