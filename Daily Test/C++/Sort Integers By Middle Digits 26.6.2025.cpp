#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a.begin(), a.end(), [](string &x, string &y) {
        int mx = x[x.size() / 2] - '0';
        int my = y[y.size() / 2] - '0';
        if (mx != my) return mx < my;
        return stoi(x) < stoi(y);
    });

    for (string &s : a)
        cout << s << " ";
}