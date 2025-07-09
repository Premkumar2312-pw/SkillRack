#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSortedAsc(const vector<int>& v) {
    for (size_t i = 1; i < v.size(); ++i)
        if (v[i - 1] > v[i]) return false;
    return true;
}

bool allEqual(const vector<int>& a, const vector<int>& b) {
    int val = a[0];
    for (int x : a) if (x != val) return false;
    for (int x : b) if (x != val) return false;
    return true;
}

void print(const vector<int>& v) {
    for (int x : v) cout << x << " ";
    cout << endl;
}

int main() {
    int m, n;
    cin >> m;
    vector<int> a(m);
    for (int& x : a) cin >> x;
    cin >> n;
    vector<int> b(n);
    for (int& x : b) cin >> x;

    bool sa = isSortedAsc(a);
    bool sb = isSortedAsc(b);

    if (allEqual(a, b)) {
        print(a);
        print(b);
    } else if (sa && !sb) {
        print(a);
        print(b);
    } else if (!sa && sb) {
        print(b);
        print(a);
    } else {
        print(a);
        print(b);
    }

    return 0;
}