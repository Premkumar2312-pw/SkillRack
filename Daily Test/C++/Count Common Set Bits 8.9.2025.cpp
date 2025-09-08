#include <bits/stdc++.h>
using namespace std;

int countBits(int x) {
    int cnt = 0;
    while (x) {
        cnt += (x & 1);
        x >>= 1;
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int res = arr[0];
    for (int i = 1; i < n; i++) res &= arr[i];

    cout << countBits(res) << "\n";
}