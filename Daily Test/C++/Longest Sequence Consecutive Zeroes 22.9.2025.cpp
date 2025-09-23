#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string binstr(int x) {
    string res;
    while (x) {
        res += (x % 2) ? '1' : '0';
        x /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    int h;
    cin >> h;
    vector<int> l(h), s, v;
    vector<string> m(h);
    for (int i = 0; i < h; i++) {
        cin >> l[i];
        m[i] = binstr(l[i]);
        reverse(m[i].begin(), m[i].end());
    }
    for (int i = 0; i < h; i++) {
        int k = 0;
        while (k < m[i].size()) {
            if (m[i][k] == '0') {
                int j = k, c = 0;
                while (j < m[i].size() && m[i][j] != '0') {
                    c++; j++; k++;
                }
                s.push_back(c);
                v.push_back(i);
            } else {
                k++;
            }
        }
    }
    int d = *max_element(s.begin(), s.end());
    vector<int> g;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == d && find(g.begin(), g.end(), l[v[i]]) == g.end()) {
            cout << l[v[i]] << " ";
            g.push_back(l[v[i]]);
        }
    }
    return 0;
}