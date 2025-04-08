#include <iostream>
#include <vector>
using namespace std;

int r, c;

vector<int> get_border(const vector<vector<int>>& mat) {
    vector<int> b;
    for (int j = 0; j < c; ++j) b.push_back(mat[0][j]);
    for (int i = 1; i < r - 1; ++i) b.push_back(mat[i][c - 1]);
    for (int j = c - 1; j >= 0; --j) b.push_back(mat[r - 1][j]);
    for (int i = r - 2; i > 0; --i) b.push_back(mat[i][0]);
    return b;
}

bool is_rotation(const vector<int>& a, const vector<int>& b) {
    int n = a.size();
    for (int shift = 0; shift < n; ++shift) {
        bool match = true;
        for (int i = 0; i < n; ++i)
            if (a[(i + shift) % n] != b[i]) {
                match = false;
                break;
            }
        if (match) return true;
    }
    return false;
}

int main() {
    cin >> r >> c;
    vector<vector<int>> m1(r, vector<int>(c)), m2(r, vector<int>(c));
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            cin >> m1[i][j];
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            cin >> m2[i][j];

    vector<int> b1 = get_border(m1);
    vector<int> b2 = get_border(m2);

    cout << (is_rotation(b1, b2) ? "YES" : "NO") << endl;
    return 0;
}