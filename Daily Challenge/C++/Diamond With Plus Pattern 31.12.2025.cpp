#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> l;
    int c = 1;
    string g = "";

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            string s = "*" + string(n*2-2, '-');
            reverse(s.begin(), s.end());
            l.push_back(s);
        }
        else if (i < n-1) {
            string p = "*" + string(c, '-') + "*" + string(c, '-') + "*";
            p += string(l[i-1].size() - p.size() + 2, '-');
            reverse(p.begin(), p.end());
            l.push_back(p);
            c += 2;
        }
        else {
            for (int j = 0; j < l[i-1].size() + 2; j++)
                g += (j % 2 == 0 ? '*' : '-');
        }
    }

    for (auto &x : l) cout << x << endl;
    cout << g << endl;
    for (int i = l.size()-1; i >= 0; i--) cout << l[i] << endl;

    return 0;
}