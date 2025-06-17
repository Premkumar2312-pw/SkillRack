#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, c = 0;
    cin >> n;
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        c += x;
    }

    int m;
    cin >> m;
    vector<int> a(m);
    for (int i = 0, x; i < m; i++) {
        cin >> x;
        a[i] = 100 - x;
    }

    sort(a.begin(), a.end());

    int count = 0;
    for (int i = 0; i < m; i++) {
        if (c - a[i] >= 0) {
            c -= a[i];
            count++;
        } else break;
    }

    cout << count << endl;
    return 0;
}
