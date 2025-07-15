#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, x, y;
    cin >> n;
    map<int, vector<int>> m;
    while (n--) {
        cin >> x >> y;
        m[y].push_back(x);
    }
    int res = -1;
    for (auto &[_, v] : m) {
        if (v.size() >= 2) {
            sort(v.begin(), v.end());
            res = max(res, v.back() - v.front());
        }
    }
    cout << res;
}