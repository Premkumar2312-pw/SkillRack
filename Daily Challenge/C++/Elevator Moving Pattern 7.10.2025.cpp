#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, c = 0, d = 0;
    cin >> n;
    vector<int> l(n);
    vector<string> l1(n);
    for (int i = 0; i < n; i++) cin >> l[i];
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            l1[i] = string(l[i], '*');
            c += l[i];
        } else if (l[i] > 0) {
            l1[i] = string(c, '.') + string(l[i], '*');
            c += l[i];
        } else {
            c += l[i];
            l1[i] = string(c - 1, '.') + string(-l[i], '*');
        }
    }
    for (const auto& s : l1)
        if (s.size() > d) d = s.size();
    for (int i = 0; i < n; i++)
        l1[i] += string(d - l1[i].size(), '-');
    for (int i = d - 1; i >= 0; i--) {
        for (int j = 0; j < n; j++)
            cout << l1[j][i];
        cout << endl;
    }
}