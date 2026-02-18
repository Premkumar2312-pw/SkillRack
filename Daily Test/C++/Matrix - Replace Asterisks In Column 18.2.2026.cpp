#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<string>> mat(r, vector<string>(c));
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> mat[i][j];

    vector<pair<int,int>> ass;

    for(int i = 0; i < c; i++)
        for(int j = 0; j < r; j++)
            if(mat[j][i] == "*")
                ass.push_back({j, i});

    int var = 0, cnt = 0;

    for(int k = c-1; k >= 0; k--) {
        for(int l = 0; l < r; l++) {

            if(var >= ass.size()) break;

            cnt++;
            int nx = ass[var].first;
            int ny = ass[var].second;

            if(mat[l][k] != "*") {
                mat[nx][ny] = mat[l][k];
                mat[l][k] = "*";
                var++;
            }
        }
        if(cnt == ass.size()) break;
    }

    for(auto &row : mat) {
        for(auto &val : row)
            cout << val << " ";
        cout << endl;
    }

    return 0;
}