#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<int> arr1(n), arr2(n);
    for (int i = 0; i < n; ++i) cin >> arr1[i];
    for (int i = 0; i < n; ++i) cin >> arr2[i];

    for (int idx = 0; idx < n; ++idx) {
        int need = arr2[idx];
        int ele = arr1[idx];
        int cnt = 0, len = 0;
        bool found = false;

        for (int j = idx; j < n; ++j) {
            len++;
            if (arr1[j] == ele) {
                cnt++;
                if (cnt >= need) {
                    cout << len << ' ';
                    found = true;
                    break;
                }
            }
        }
        if (!found) cout << -1 << ' ';
    }
    return 0;
}