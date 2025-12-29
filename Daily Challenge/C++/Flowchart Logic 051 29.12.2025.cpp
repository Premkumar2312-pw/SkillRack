#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y;
    cin >> x >> y;
    while (true) {
        int n;
        cin >> n;
        if (n % 2 == 0) {
            n += x;
            y--;
        } else {
            n += y;
            x--;
        }
        cout << n << " ";
        if (n <= 0) break;
    }
    return 0;
}