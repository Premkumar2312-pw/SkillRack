#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<int>> mat(r, vector<int>(c));
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++) cin >> mat[i][j];
    
    while(r % 2 == 0) {
        vector<vector<int>> new_mat(r/2, vector<int>(c));
        for(int i = 0; i < r/2; i++)
            for(int j = 0; j < c; j++)
                new_mat[i][j] = mat[i][j] + mat[r-1-i][j];
        mat = new_mat; r /= 2;
        for(int i = r-1; i >= 0; i--) {
            for(int j = 0; j < c; j++) cout << mat[i][j] << " ";
            cout << "
";
        }
    }
    return 0;
}