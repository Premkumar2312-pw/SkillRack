#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> att;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        att[x] = x + y;
    }

    bool f = false;

    for (auto &p : att) {
        int x = p.first;
        int tar = p.second;

        if (att.count(tar) && att[tar] == x) {
            f = true;
            break;
        }
    }

    cout << (f ? "YES" : "NO") << endl;

    return 0;
}
