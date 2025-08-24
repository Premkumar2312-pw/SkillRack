#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int d = 0, md = 0;
    map<int, vector<int>> m;

    for (int i = 0; i < s.size(); ) {
        if (s[i] == '(') { d++; md = max(md, d); i++; }
        else if (s[i] == ')') { d--; i++; }
        else if (isdigit(s[i])) {
            int n = 0;
            while (i < s.size() && isdigit(s[i])) {
                n = n * 10 + (s[i] - '0'); i++;
            }
            m[d].push_back(n);
        } else i++;
    }

    while (md > 0 && m.find(md) == m.end()) md--;
    cout << *max_element(m[md].begin(), m[md].end()) << "\n";
}