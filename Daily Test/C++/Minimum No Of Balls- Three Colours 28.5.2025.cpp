#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, r, g, b;
    cin >> n >> r >> g >> b;

    for (int i = 1; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        int nr = x + min(g, b);
        int ng = y + min(r, b);
        int nb = z + min(r, g);
        r = nr; g = ng; b = nb;
    }

    cout << min({r, g, b}) << endl;
    return 0;
}