#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> l;
    string x;
    while (cin >> x) l.push_back(x);

    vector<int> l2(l.size(), 0);
    vector<string> l1, l3;

    for (int i = 0; i < l.size(); i++) {
        if (l2[i]) continue;
        bool f = false;
        for (int j = i + 1; j < l.size(); j++) {
            if (l[i] == l[j] && !l2[j]) {
                l1.push_back(to_string(stoi(l[i]) + stoi(l[j])));
                l2[j] = 1;
                f = true;
                break;
            }
        }
        if (!f) l1.push_back(l[i]);
        l2[i] = 1;
    }

    for (auto &s : l1)
        if (isalpha(s[0])) l3.push_back(s);

    sort(l3.begin(), l3.end());
    for (auto &s : l3) cout << s << " ";
}