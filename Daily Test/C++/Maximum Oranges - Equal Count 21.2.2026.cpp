#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m = 0;
    cin >> n;

    vector<int> l(n);
    for(int i = 0; i < n; i++)
        cin >> l[i];

    for(int i = 0; i < n; i++) {
        int d = l[i];
        for(int j = i; j < n; j++)
            d = min(d, l[j]);

        int t = d * (n - i);
        m = max(m, t);
    }

    cout << m;
    return 0;
}