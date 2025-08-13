#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> a = {"0", "1"};
    for (int i = 2; i < n; i++)
        a.push_back(a[i-2] + a[i-1]);

    for (string s : a)
        cout << s << "\n";
    for (int i = n-2; i >= 0; i--)
        cout << a[i] << "\n";
}