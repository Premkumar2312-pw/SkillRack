#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int bestLen = 0, bestSum = 0;

    for (int i = 0; i < n - 1; ) {
        int start = i;
        int sum = stoi(arr[i]);

        while (i < n - 1 && arr[i].back() == arr[i + 1].front()) {
            sum += stoi(arr[i + 1]);
            i++;
        }

        int len = i - start + 1;
        if (len >= 2) {
            if (len > bestLen || (len == bestLen && sum > bestSum)) {
                bestLen = len;
                bestSum = sum;
            }
        }
        i++;
    }

    if (bestLen == 0) {
        int mx = 0;
        for (auto &s : arr) mx = max(mx, stoi(s));
        cout << mx;
    } else {
        cout << bestSum;
    }
}