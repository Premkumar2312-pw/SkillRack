#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m, c = 0;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];

    cin >> m;
    vector<int> q(m);
    for (int i = 0; i < m; i++) cin >> q[i];

    sort(p.begin(), p.end());
    sort(q.begin(), q.end());

    for (int i = 0; i < m; i++) {
        int need = 100 - q[i];
        for (int j = 0; j < n; j++) {
            if (p[j] >= need) {
                p[j] -= need;
                c++;
                break;
            }
        }
    }
    cout << c << endl;
    return 0;
}