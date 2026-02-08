#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int val = 1, ctr = 1;

    while (ctr <= n) {
        cout << val << " ";

        if (val == a)
            val = b;
        else if (val == c)
            val = 0;

        val++;
        ctr++;
    }
    return 0;
}