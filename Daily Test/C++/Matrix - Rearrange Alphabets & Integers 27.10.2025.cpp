#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int r, c, k, f = 0, g = 0;
    cin >> r >> c >> k;
    vector<vector<string>> l(r, vector<string>(c));
    vector<string> a, n;

    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            cin >> l[i][j];
            bool all_alpha = true;
            for (char ch : l[i][j])
                if (!isalpha(ch)) all_alpha = false;
            if (all_alpha) a.push_back(l[i][j]);
            else n.push_back(l[i][j]);
        }

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (i >= r - k) {
                if (j >= c - k)
                    cout << a[f++] << " ";
                else
                    cout << n[g++] << " ";
            } else {
                cout << n[g++] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}