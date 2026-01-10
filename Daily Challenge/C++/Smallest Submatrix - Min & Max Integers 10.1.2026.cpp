#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;

    int a[R][C];
    int mn = INT_MAX, mx = INT_MIN;
    int mr, mc, xr, xc;

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cin >> a[i][j];

            if(a[i][j] < mn) {
                mn = a[i][j];
                mr = i; mc = j;
            }
            if(a[i][j] > mx) {
                mx = a[i][j];
                xr = i; xc = j;
            }
        }
    }

    for(int i = min(mr, xr); i <= max(mr, xr); i++) {
        for(int j = min(mc, xc); j <= max(mc, xc); j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
}