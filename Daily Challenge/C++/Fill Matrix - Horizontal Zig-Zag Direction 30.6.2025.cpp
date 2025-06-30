#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, r, c;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> r >> c;
    vector<vector<int>> m(r, vector<int>(c, 0));
    int i = 0;

    while(i < n) {
        for(int x = r - 1; x >= 0 && i < n; x--) {
            if ((r - 1 - x) % 2 == 0) {
                for(int j = c - 1; j >= 0 && i < n; j--)
                    m[x][j] = a[i++];
            } else {
                for(int j = 0; j < c && i < n; j++)
                    m[x][j] = a[i++];
            }
        }
    }

    for(auto& row : m) {
        for(int val : row)
            cout << val << " ";
        cout << "\n";
    }
    return 0;
}