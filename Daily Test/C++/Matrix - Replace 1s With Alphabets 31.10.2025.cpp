#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<string>> m(r, vector<string>(c));
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            cin >> m[i][j];
    char k;
    cin >> k;
    int a, idx;
    if (isupper(k)) {
        a = 65;
        idx = k - 'A';
    } else {
        a = 97;
        idx = k - 'a';
    }
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (m[i][j] == "1") {
                m[i][j] = string(1, char(a + (idx % 26)));
                idx++;
            }
        }
    }
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << m[i][j] << (j == c - 1 ? "
" : " ");
        }
    }
    return 0;
}