#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    int k;
    cin >> k;

    stringstream ss(line);
    vector<string> w;
    string s;
    while (ss >> s) w.push_back(s);

    int c = 0;
    for (int i = 0; i < w.size(); i++) {
        c += w[i].size() + (c > 0);

        if (w[i].size() > k) {
            cout << "NO";
            return 0;
        }

        if (i == w.size() - 1)
            cout << (c <= k ? "YES" : "NO");
        else if (c + 1 + w[i + 1].size() > k) {
            if (c == k || c == k - 1)
                c = 0;
            else {
                cout << "NO";
                return 0;
            }
        }
    }
}