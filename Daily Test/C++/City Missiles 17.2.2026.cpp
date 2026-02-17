#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> cities(n);
    unordered_map<int,int> positions;

    for (int i = 0; i < n; i++) {
        cin >> cities[i].first >> cities[i].second;
        positions[cities[i].first] = cities[i].second;
    }

    for (auto &c : cities) {
        int x1 = c.first, y1 = c.second;
        int target = x1 + y1;

        if (positions.count(target)) {
            int y2 = positions[target];
            if (target - y2 == x1) {
                cout << "YES\n";
                return 0;
            }
        }
    }

    cout << "NO\n";
    return 0;
}
