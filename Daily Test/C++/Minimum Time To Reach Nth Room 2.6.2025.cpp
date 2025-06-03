#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> d(n);
    for (int i = 0; i < n; ++i)
        cin >> d[i];

    int p = 0, t = 0, f = 0;
    while (p < n) {
        int cur = d[p] ^ f;
        if (cur == 0) {
            while (p < n && (d[p] ^ f) == 0)
                p++;
        } else {
            f ^= 1;
            t++;
        }
    }

    cout << t << endl;
    return 0;
}