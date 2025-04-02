#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<string>> m(n, vector<string>(n));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> m[i][j];

    for (int l = 0; l < n / 2; l++) {
        int a = l, b = n - l - 1;
        swap(m[a][a], m[a][b]);
        swap(m[a][b], m[b][b]);
        swap(m[b][b], m[b][a]);
    }

    for (const auto &row : m) {
        for (const auto &elem : row)
            cout << elem << " ";
        cout << endl;
    }

    return 0;
}