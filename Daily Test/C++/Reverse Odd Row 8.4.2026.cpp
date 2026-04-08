#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> mat[i][j];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i % 2 == 0)
                cout << mat[i][n-1-j] << " ";
            else
                cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}