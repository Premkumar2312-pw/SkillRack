#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    if(m <= 0) return 0;

    for(int i = m - 1; i < n; i += m)
        cout << arr[i] << " ";

    return 0;
}