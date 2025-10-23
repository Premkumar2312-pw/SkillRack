#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void combine(const vector<int>& arr, int r, int start, vector<int>& comb, vector<int>& sums) {
    if (comb.size() == r) {
        int s = 0;
        for (int v : comb) s += v;
        sums.push_back(s);
        return;
    }
    for (int i = start; i < arr.size(); i++) {
        comb.push_back(arr[i]);
        combine(arr, r, i + 1, comb, sums);
        comb.pop_back();
    }
}

int main() {
    int n, x;
    cin >> n;
    vector<int> arr(n), comb, sums;
    for (int i = 0; i < n; ++i) cin >> arr[i];
    for (int r = 1; r <= n; ++r) combine(arr, r, 0, comb, sums);
    sort(sums.begin(), sums.end());
    for (int s : sums) cout << s << " ";
    return 0;
}