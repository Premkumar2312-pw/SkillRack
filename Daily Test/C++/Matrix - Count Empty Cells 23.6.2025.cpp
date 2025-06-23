#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int r, c, q;
    cin >> r >> c >> q;

    unordered_set<int> rows, cols;

    while (q--) {
        int x, y;
        cin >> x >> y;
        rows.insert(x);
        cols.insert(y);
        int filled = rows.size() * c + cols.size() * r - rows.size() * cols.size();
        cout << r * c - filled << endl;
    }

    return 0;
}