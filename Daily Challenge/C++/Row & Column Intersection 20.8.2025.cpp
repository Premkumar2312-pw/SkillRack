#include <bits/stdc++.h>
using namespace std;
int main() {
    int r;
    cin >> r;
    vector<vector<int>> mat(r, vector<int>(r));
    for(int i=0;i<r;i++)
        for(int j=0;j<r;j++)
            cin >> mat[i][j];

    for(int i=0;i<r;i++) {
        bool row=true, col=true;
        for(int k=0;k<r;k++) {
            if(k!=i && mat[i][k]!=0) row=false;
            if(k!=i && mat[k][i]!=1) col=false;
        }
        if(row && col) {
            cout << i+1;
            return 0;
        }
    }
    cout << -1;
    return 0;
}