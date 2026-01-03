#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> l(n);
    for (int i = 0; i < n; i++) cin >> l[i];

    vector<int> l1, l2;

    for (auto &i : l) {
        string p = "", g = "";
        for (char j : i) {
            if (isdigit(j)) {
                p += j;
                g += j;
            }
            if (j == '|') {
                l2.push_back(stoi(g));
                g = "";
            }
        }
        l1.push_back(stoi(p));
        l2.push_back(stoi(g));
    }

    sort(l2.begin(), l2.end());

    int sum1 = accumulate(l1.begin(), l1.end(), 0);
    int sum2 = 0;
    for (int i = 0; i < l2.size(); i += 2)
        sum2 += stoi(to_string(l2[i]) + to_string(l2[i + 1]));

    cout << sum1 << " " << sum2;
}