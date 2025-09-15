#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long res = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        string b = bitset<64>(x).to_string();
        // strip leading zeros
        b = b.substr(b.find('1'));
        if (b.empty()) b = "0";
        b[0] = '0';                 // replace MSB
        long long val = stoll(b, nullptr, 2);
        res += val;
    }
    cout << res << "\n";
    return 0;
}