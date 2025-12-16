#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int,int>> l;
    vector<int> l1;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        l.push_back({a, b});
    }

    for (int i = 0; i < l.size(); i++) {
        for (int j = i + 1; j < l.size(); j++) {
            if (l[i].second == l[j].second) {
                if (l[i].first > l[j].first)
                    l1.push_back(l[i].first - l[j].first);
                else
                    l1.push_back(l[j].first - l[i].first);
            }
        }
    }

    if (l1.empty()) {
        cout << -1;
    } else {
        sort(l1.begin(), l1.end());
        for (int x : l1)
            cout << x << " ";
    }

    return 0;
}