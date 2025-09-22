#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    for (int i = 0; i < n; i++) cin >> l[i];

    vector<int> s;
    s.insert(s.end(), l.begin(), l.end());
    s.insert(s.end(), l.begin(), l.end());
    s.insert(s.end(), l.begin(), l.end());

    int c = 0, j = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        if (i == 0) {
            cout << s[i] << " " << s[c] << "\n";
            c += 2; j++;
        } else if (j < n + 1) {
            cout << s[i] << " " << s[c] << "\n";
            c += 2; j++;
        }
    }
}