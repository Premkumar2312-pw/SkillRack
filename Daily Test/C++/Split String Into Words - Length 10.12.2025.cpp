#include <bits/stdc++.h>
using namespace std;

struct Item {
    string word;
    int len;
    int idx;
};

bool cmp(const Item &a, const Item &b) {
    if (a.len != b.len) return a.len < b.len;
    return a.idx < b.idx; // maintain original order
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> m(n);
    for (int &x : m) cin >> x;

    vector<Item> v(n);
    int pos = 0;

    for (int i = 0; i < n; i++) {
        v[i].word = s.substr(pos, m[i]);
        v[i].len = m[i];
        v[i].idx = i;
        pos += m[i];
    }

    sort(v.begin(), v.end(), cmp);

    for (auto &x : v) cout << x.word;
    return 0;
}