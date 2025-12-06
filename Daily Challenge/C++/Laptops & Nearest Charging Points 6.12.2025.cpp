#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    if (!getline(cin, s)) return 0;

    vector<int> ans;
    stringstream ss(s);
    string t;

    while (getline(ss, t, '#')) {
        int n = t.size();
        for (int i = 0; i < n; ++i) {
            if (t[i] == 'L') {
                int best = -1;
                for (int j = 0; j < n; ++j) {
                    if (t[j] == '*') {
                        int d = abs(i - j);
                        if (best == -1 || d < best) best = d;
                    }
                }
                ans.push_back(best);
            }
        }
    }

    for (int i = 0; i < (int)ans.size(); ++i) {
        if (i) cout << " ";
        cout << ans[i];
    }
    return 0;
}