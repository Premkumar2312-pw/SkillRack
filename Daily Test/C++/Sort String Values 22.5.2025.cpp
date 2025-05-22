#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int order[256];

bool cmp(const string &a, const string &b) {
    int i = 0;
    while (i < a.size() && i < b.size()) {
        if (order[a[i]] != order[b[i]])
            return order[a[i]] < order[b[i]];
        i++;
    }
    return a.size() < b.size();
}

int main() {
    int n;
    cin >> n;
    vector<string> w(n);
    for (int i = 0; i < n; i++) cin >> w[i];
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) order[s[i]] = i;
    sort(w.begin(), w.end(), cmp);
    for (string &str : w) cout << str << endl;
    return 0;
}