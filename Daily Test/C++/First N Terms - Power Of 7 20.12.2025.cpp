#include <bits/stdc++.h>
using namespace std;

int bin_to_base7_value(int x) {
    vector<int> bits;
    while (x > 0) {
        bits.push_back(x % 2);
        x /= 2;
    }
    int res = 0;
    int pow7 = 1;
    for (int i = (int)bits.size() - 1; i >= 0; --i) {
        res += bits[i] * pow7;
        pow7 *= 7;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cout << bin_to_base7_value(i) << " ";
    }
    return 0;
}