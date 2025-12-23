// C++
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    vector<int> num(n), res;
    for (int i = 0; i < n; ++i) cin >> num[i];

    for (int x : num) {
        string b;
        while (x > 0) {
            b.push_back((x & 1) + '0');
            x >>= 1;
        }
        reverse(b.begin(), b.end());
        if (b.empty()) b = "0";
        int l = (int)b.size();
        int mid = l / 2;
        string left, right;
        if (l % 2 == 0) {
            left = b.substr(0, mid);
            right = b.substr(mid);
        } else {
            left = b.substr(0, mid + 1);
            right = b.substr(mid + 1);
        }
        res.push_back(stoi(left, nullptr, 2));
        if (!right.empty())
            res.push_back(stoi(right, nullptr, 2));
        else
            res.push_back(0);
    }
    sort(res.begin(), res.end());
    for (int i = 0; i < (int)res.size(); ++i) {
        if (i) cout << ' ';
        cout << res[i];
    }
    return 0;
}