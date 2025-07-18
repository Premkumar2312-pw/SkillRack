#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;

int count_factors(int n) {
    int c = 0;
    for (int i = 1; i*i <= n; ++i) {
        if (n % i == 0) {
            c++;
            if (i != n / i) c++;
        }
    }
    return c;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, vector<int>, greater<int>> d;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        d[count_factors(a[i])].push_back(a[i]);
    }
    for (auto &p : d) {
        sort(p.second.rbegin(), p.second.rend());
        for (int x : p.second) cout << x << " ";
        cout << "\n";
    }
    return 0;
}