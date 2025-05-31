#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, h1, m1, h2, m2;
    cin >> n;
    vector<pair<int, int>> e;
    for(int i = 0; i < n; i++) {
        char c;
        cin >> h1 >> c >> m1 >> h2 >> c >> m2;
        int s = h1 * 60 + m1;
        int t = h2 * 60 + m2;
        e.push_back({s, t});
    }
    sort(e.begin(), e.end());
    bool ok = true;
    for(int i = 1; i < n; i++) {
        if(e[i].first < e[i-1].second) {
            ok = false;
            break;
        }
    }
    cout << (ok ? "YES" : "NO") << endl;
    return 0;
}