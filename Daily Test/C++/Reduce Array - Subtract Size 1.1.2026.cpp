#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> l(n);
    for (int &x : l) cin >> x;

    while (true) {
        int i = 0, s = l.size();
        while (i < l.size()) {
            if (l[i] > s) {
                l[i] -= s;
                i++;
            } else {
                l.erase(l.begin() + i);
            }
        }
        if (l.empty()) break;
    }

    for (int x : l) cout << x << " ";
}