#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, f;
    cin >> n >> f;

    vector<int> c;
    c.reserve(n * n);

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 1) {                     // odd row
            int s = (i - 1) * n + 1;
            for (int j = s; j <= i * n; ++j)
                c.push_back(j);
        } else {                              // even row
            for (int k = i * n; k > (i - 1) * n; --k)
                c.push_back(k);
        }
    }

    cout << c[f - 1] << '
';
    return 0;
}