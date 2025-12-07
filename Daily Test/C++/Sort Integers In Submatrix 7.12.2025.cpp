#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<int>> a(r, vector<int>(c));
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
    int x, y;
    cin >> x >> y;
    int m = x-1, n = y-1, w = c-y+1;
    
    vector<int> l;
    for(int i = 0; i < x; i++) {
        for(int j = n; j < n+w; j++) {
            l.push_back(a[i][j]);
        }
    }
    sort(l.begin(), l.end());
    
    int k = 0;
    for(int i = 0; i < x; i++) {
        for(int j = n; j < n+w; j++) {
            a[i][j] = l[k++];
        }
    }
    
    for(auto& row : a) {
        for(int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}