#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    vector<string> s(n);
    for (int i = 0; i < n; i++)
        getline(cin, s[i]);

    int k;
    cin >> k;

    bool done = false;

    while (!done) {
        done = true;

        for (int i = 0; i < n; i++) {
            if (s[i].empty()) {
                k++;
                continue;
            }

            done = false;
            int take = min(k, (int)s[i].size());

            if (k > s[i].size())
                k++;

            if (i % 2 == 0) {
                cout << s[i].substr(0, take);
                s[i] = s[i].substr(take);
            } else {
                cout << s[i].substr(s[i].size() - take);
                s[i] = s[i].substr(0, s[i].size() - take);
            }
        }
    }
}