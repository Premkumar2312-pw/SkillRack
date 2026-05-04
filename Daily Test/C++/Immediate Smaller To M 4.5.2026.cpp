#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> m;

    int ans = -1;
    for(int x : arr) {
        if(x < m && x > ans) {
            ans = x;
        }
    }

    cout << ans;
    return 0;
}