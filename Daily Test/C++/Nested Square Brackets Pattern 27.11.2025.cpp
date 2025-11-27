#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> l(n);
    for (int idx = 0; idx < n; idx++) {
        cin >> l[idx].first >> l[idx].second;
    }

    for (auto k : l) {
        int i = k.first;
        int j = k.second;
        int c = 1;

        cout << "[";
        bool firstOuter = true;
        for (int m = 1; m <= i * j + j; m += j) {
            if (!firstOuter) cout << " ";
            firstOuter = false;

            cout << "[";
            bool firstInner = true;
            for (int x = c; x < m; x++) {
                if (!firstInner) cout << " ";
                firstInner = false;
                cout << x;
            }
            cout << "]";
            c = m;
        }
        cout << "]
";
    }
    return 0;
}