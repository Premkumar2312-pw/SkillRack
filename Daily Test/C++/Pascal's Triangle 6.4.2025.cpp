#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> t(n);

    for (int i = 0; i < n; i++) {
        t[i].resize(i + 1, 1);
        for (int j = 1; j < i; j++)
            t[i][j] = t[i-1][j-1] + t[i-1][j];
    }

    for (int i = 0; i < n; i++) {
        cout << string(n - i - 1, '-');
        for (int j = 0; j <= i; j++)
            cout << t[i][j] << (j < i ? " * " : "");
        cout << "\n";
    }
}