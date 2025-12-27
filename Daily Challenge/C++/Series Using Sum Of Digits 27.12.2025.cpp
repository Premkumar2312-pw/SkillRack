#include <bits/stdc++.h>
using namespace std;

int digitSum(int x) {
    int s = 0;
    while (x) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> l(k);
    l[0] = n;

    for (int i = 1; i < k; i++)
        l[i] = l[i - 1] + digitSum(l[i - 1]);

    for (int x : l)
        cout << x << " ";

    return 0;
}