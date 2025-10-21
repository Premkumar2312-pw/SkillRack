#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; ++i) cin >> arr[i];
    cin >> k;

    vector<pair<int,int>> pa;
    for(int i=0; i<n; ++i) {
        int lastk = arr[i] & ((1 << k) - 1); // bitwise for last k bits
        pa.push_back({lastk, arr[i]});
    }
    sort(pa.begin(), pa.end());
    for(int i=0; i<n; ++i) cout << pa[i].second << " ";
    return 0;
}