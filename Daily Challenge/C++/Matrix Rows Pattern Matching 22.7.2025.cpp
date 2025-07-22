#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<string>> m(r, vector<string>(c));
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            cin >> m[i][j];

    string p;
    cin >> p;

    unordered_map<char, vector<string>> pm;
    unordered_map<string, char> rm;

    for (int i = 0; i < r; ++i) {
        string key = "";
        for (int j = 0; j < c; ++j)
            key += m[i][j] + "#";
        if (pm.count(p[i])) {
            string t = "";
            for (int j = 0; j < c; ++j)
                t += m[i][j] + "#";
            if (key != t) {
                cout << "NO\n";
                return 0;
            }
        } else pm[p[i]] = m[i];

        if (rm.count(key)) {
            if (rm[key] != p[i]) {
                cout << "NO\n";
                return 0;
            }
        } else rm[key] = p[i];
    }

    cout << "YES\n";
    return 0;
}