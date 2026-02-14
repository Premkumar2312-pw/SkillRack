#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<int>> matrix(r, vector<int>(c));
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> matrix[i][j];

    int i, j;
    cin >> i >> j;
    i--; 
    j--;

    set<pair<int,int>> visited;

    while(true) {
        if(i < 0 || i >= r || j < 0 || j >= c) {
            cout << "NO";
            break;
        }

        if(visited.count({i,j})) {
            cout << "YES";
            break;
        }

        visited.insert({i,j});
        int val = matrix[i][j];

        if(val >= 0) {
            if(val % 2 == 0) i--;
            else j++;
        } else {
            if((-val) % 2 == 0) i++;
            else j--;
        }
    }
}