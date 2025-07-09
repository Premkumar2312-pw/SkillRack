#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    for (int l = 1; l <= n / 2; ++l) {
        if (n % l != 0 && n % l != 1) continue;
        string p = s.substr(0, l);
        bool ok = true;
        for (int i = 0; i < n; i += l) {
            for (int j = 0; j < l && i + j < n; ++j) {
                if (s[i + j] != p[j] && s[i + j] != '_') {
                    ok = false;
                    break;
                }
            }
            if (!ok) break;
        }
        if (ok) {
            for (int i = 0; i < n; ++i) {
                if (s[i] == '_') {
                    cout << p[i % l] << endl;
                    return 0;
                }
            }
        }
    }
}