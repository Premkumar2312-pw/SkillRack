#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    while (x > 0 || y > 0) {
        if (x > 0) {
            cout << x << " ";
            y--;
        }
        if (y > 0) {
            cout << y << " ";
            x--;
        }
        x--;
        y--;
    }
    return 0;
}