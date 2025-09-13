#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int size = N * 2;
    vector<vector<char>> hyp(size, vector<char>(size, '-'));

    for (int i = 0; i < size; i += N) {
        for (int j = 0; j < size; j += N) {
            int row = i + N - 1, col = j, cnt = 0;
            while (cnt < N) {
                hyp[row][col] = '*';
                row--;
                col++;
                cnt++;
            }
        }
    }
    for (auto &r : hyp) {
        for (auto c : r) cout << c;
        cout << '\n';
    }
}