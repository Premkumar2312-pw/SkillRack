#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> str;
    string s;

    while (cin >> s)
        str.push_back(s);

    string ans = str[0];

    for (int i = 1; i < str.size(); i++) {
        string cur = str[i];
        int len = min(ans.size(), cur.size());

        for (int k = len; k >= 0; k--) {
            if (ans.substr(ans.size() - k) == cur.substr(0, k)) {
                ans += cur.substr(k);
                break;
            }
        }
    }

    cout << ans;
}