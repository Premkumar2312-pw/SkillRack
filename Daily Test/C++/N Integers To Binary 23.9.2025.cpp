#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    int maxv = 0;
    for (int i = 0; i < n; ++i) {
        cin >> l[i];
        maxv = max(maxv, l[i]);
    }
    int a = 0;
    while ((1 << a) <= maxv) a++;

    vector<string> m;
    string d;
    for (int i = 0; i < n; ++i) {
        string b = bitset<32>(l[i]).to_string();
        b = b.substr(32 - a);   // Use only a bits
        reverse(b.begin(), b.end());
        m.push_back(b);
        if (i < m[i].size()) d += m[i][i];
    }
    reverse(d.begin(), d.end());
    int ans = stoi(d, nullptr, 2);
    cout << ans << endl;
    return 0;
}