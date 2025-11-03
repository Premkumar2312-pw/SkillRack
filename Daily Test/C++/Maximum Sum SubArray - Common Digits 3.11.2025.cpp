#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;

set<char> digitset(int x) {
    set<char> s;
    string str = to_string(x);
    for (char c : str) s.insert(c);
    return s;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x : a) cin >> x;
    int bl = 0, bs = 0;
    for (int i = 0; i < n; ++i) {
        set<char> c = digitset(a[i]);
        int s = a[i];
        for (int j = i + 1; j < n; ++j) {
            set<char> next = digitset(a[j]);
            set<char> inter;
            for (char d : c) if (next.count(d)) inter.insert(d);
            c = inter;
            if (c.empty()) break;
            s += a[j];
            int l = j - i + 1;
            if (l > bl || (l == bl && s > bs)) {
                bl = l;
                bs = s;
            }
        }
    }
    if (bl == 0) {
        bs = a[0];
        for (int i = 1; i < n; i++) if (a[i] > bs) bs = a[i];
    }
    cout << bs << endl;
    return 0;
}