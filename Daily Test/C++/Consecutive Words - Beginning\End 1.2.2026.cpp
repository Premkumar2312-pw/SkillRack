#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> s;
    string x;

    while (cin >> x)
        s.push_back(x);

    for (int i = 1; i < s.size(); i++) {
        if (s[i].find(s[i - 1]) != string::npos &&
            s[i].size() == s[i - 1].size() + 1)
            continue;
        else {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}