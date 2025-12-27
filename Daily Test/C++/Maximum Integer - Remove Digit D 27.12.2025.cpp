#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    char d;
    cin >> n >> d;

    long long ans = -1;

    for (int i = 0; i < n.size(); i++) {
        if (n[i] == d) {
            string t = n.substr(0, i) + n.substr(i + 1);
            ans = max(ans, stoll(t));
        }
    }

    cout << ans;
    return 0;
}