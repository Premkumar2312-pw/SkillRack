#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, C, x, y;
    cin >> R >> C >> x >> y;
    string S;
    cin >> S;

    set<pair<int,int>> visited;
    visited.insert({x, y});

    for (char d : S) {
        if (d == 'N') {
            x = max(1, x - 1);
            while (visited.count({x, y}) && x > 1) x--;
        }
        if (d == 'S') {
            x = min(R, x + 1);
            while (visited.count({x, y}) && x < R) x++;
        }
        if (d == 'E') {
            y = min(C, y + 1);
            while (visited.count({x, y}) && y < C) y++;
        }
        if (d == 'W') {
            y = max(1, y - 1);
            while (visited.count({x, y}) && y > 1) y--;
        }
        visited.insert({x, y});
    }

    cout << x << " " << y;
}