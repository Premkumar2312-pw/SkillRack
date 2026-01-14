#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = INT_MAX;

    for (int i = 0; i <= n - k; i++) {
        int m = *max_element(arr.begin() + i, arr.begin() + i + k);
        ans = min(ans, m);
    }

    cout << ans;
    return 0;
}