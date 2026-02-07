#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> num(n);
    for (int i = 0; i < n; i++)
        cin >> num[i];

    int x;
    cin >> x;
    int y = x;

    for (int v : num) {
        if (v == x)
            x *= 2;
    }

    cout << (x == y ? 0 : x);
    return 0;
}