#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    if (!(cin >> s)) return 0;

    vector<string> res, p;
    res.push_back(s);

    while (true) {
        p.clear();
        for (auto &str : res) {
            if (str.size() == 1) {
                p.push_back(str);
                continue;
            }
            int split = str.size() / 2;
            p.push_back(str.substr(0, split));
            p.push_back(str.substr(split));
        }

        for (int i = 0; i < (int)p.size(); i++) {
            if (i) cout << ' ';
            cout << p[i];
        }
        cout << "
";

        res = p;
        if ((int)p.size() == (int)s.size()) break;
    }
    return 0;
}