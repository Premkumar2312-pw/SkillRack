#include <iostream>
#include <vector>
using namespace std;

bool is_asc(const vector<int>& v) {
    for (int i = 1; i < v.size(); ++i)
        if (v[i] < v[i-1]) return false;
    return true;
}

bool is_desc(const vector<int>& v) {
    for (int i = 1; i < v.size(); ++i)
        if (v[i] > v[i-1]) return false;
    return true;
}

bool all_equal(const vector<int>& v) {
    for (int i = 1; i < v.size(); ++i)
        if (v[i] != v[0]) return false;
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
    for (int i = 0; i < m; ++i) cin >> a[i];

    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; ++i) cin >> b[i];

    if (all_equal(a) && all_equal(b)) {
        if (a[0] < b[0]) { print(a); print(b); }
        else if (b[0] < a[0]) { print(b); print(a); }
        else { print(a); print(b); }
    } else if (is_asc(a) && is_desc(b)) {
        print(a); print(b);
    } else if (is_desc(a) && is_asc(b)) {
        print(b); print(a);
    } else {
        print(a); print(b);
    }

    return 0;
}
