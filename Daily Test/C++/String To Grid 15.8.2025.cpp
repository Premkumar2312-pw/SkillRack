#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    string s;
    cin >> s;

    vector<vector<char>> g(n * x, vector<char>(n * x, '*'));
    int c = x / 2, k = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            g[i * x + c][j * x + c] = s[k++];
        }
    }

    for(int i = 0; i < n * x; i++) {
        for(int j = 0; j < n * x; j++)
            cout << g[i][j] << " ";
        cout << "\n";
    }
}