#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int bin_val(int n) {
    int b = 0, m = 1;
    while (n) {
        b += (n % 2) * m;
        m *= 10;
        n /= 2;
    }
    return b;
}

struct NumCalc {
    int val, calc;
};

bool cmp(const NumCalc &a, const NumCalc &b) {
    if (a.calc == b.calc) return a.val < b.val;
    return a.calc < b.calc;
}

int main() {
    int n;
    cin >> n;
    vector<NumCalc> arr(n);
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        arr[i].val = stoi(s);
        arr[i].calc = 0;
        for (char c : s)
            arr[i].calc += (c - '0') * bin_val(c - '0');
    }
    sort(arr.begin(), arr.end(), cmp);
    for (auto &x : arr) cout << x.val << ' ';
    return 0;
}