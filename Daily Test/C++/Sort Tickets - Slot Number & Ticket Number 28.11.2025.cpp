#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> pairs(n);
    for (int i = 0; i < n; i++) {
        cin >> pairs[i].first >> pairs[i].second;
    }
    sort(pairs.begin(), pairs.end(),
         [](const pair<int,int>& a, const pair<int,int>& b) {
             if (a.second != b.second) return a.second < b.second;
             return a.first < b.first;
         });
    for (auto &p : pairs) {
        cout << p.first << " " << p.second << "
";
    }
    return 0;
}