#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y, L, cnt = 0;
    unordered_map<int, unordered_set<int>> d;

    cin >> n;
    while(n--) {
        cin >> x >> y;
        d[x].insert(y);
    }

    cin >> L;

    for(auto &p : d)
        for(int v : p.second)
            if(p.second.count(v + L))
                cnt++;

    cout << cnt;
}