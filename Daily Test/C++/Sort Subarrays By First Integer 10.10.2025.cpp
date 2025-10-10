#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const vector<int>& a, const vector<int>& b) {
    return a[0] < b[0];
}

int main() {
    int N, K;
    cin >> N;
    vector<int> arr(N);
    for(int i = 0; i < N; ++i)
        cin >> arr[i];
    cin >> K;
    vector<vector<int>> res;
    for(int i = 0; i < N; i += K)
        res.push_back(vector<int>(arr.begin() + i, arr.begin() + min(i+K,N)));
    sort(res.begin(), res.end(), cmp);
    for(const auto& block : res)
        for(int x : block)
            cout << x << ' ';
    return 0;
}