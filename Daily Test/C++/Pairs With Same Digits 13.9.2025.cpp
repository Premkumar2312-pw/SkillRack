#include <bits/stdc++.h>
using namespace std;

string uniqueSorted(string s) {
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    return s;
}

int main() {
    int N;
    cin >> N;
    vector<string> val(N);
    for (int i = 0; i < N; i++) cin >> val[i];

    bool flag = true;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (uniqueSorted(val[i]) == uniqueSorted(val[j])) {
                cout << val[i] << " " << val[j] << "\n";
                flag = false;
            }
        }
    }
    if (flag) cout << -1;
}