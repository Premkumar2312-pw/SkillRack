#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    if (!getline(cin, s)) return 0;

    int n = (int)s.size();
    for (int i = 0; i < n; ) {
        int j = i + 1;
        while (j < n && s[j] == s[i]) j++;     // run [i, j)

        int len = j - i;
        if (len > 1) {
            char k = s[i];
            for (int t = 0; t < len; t++) {
                char ch = char(((k - 'a' + t) % 26) + 'a');
                cout << ch;
            }
        } else {
            cout << s[i];
        }
        i = j;
    }
    return 0;
}