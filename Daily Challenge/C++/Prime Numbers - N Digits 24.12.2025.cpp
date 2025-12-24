#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; ++i)
        if (x % i == 0) return false;
    return true;
}

void genPerm(int depth, int maxLen, int curVal,
             const vector<int>& a, vector<int>& used,
             set<int>& ans) {
    if (depth > 0 && depth <= maxLen) {
        if (isPrime(curVal)) ans.insert(curVal);
    }
    if (depth == maxLen) return;

    int n = a.size();
    for (int i = 0; i < n; ++i) {
        if (!used[i]) {
            used[i] = 1;
            genPerm(depth + 1, maxLen, curVal * 10 + a[i],
                    a, used, ans);
            used[i] = 0;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    set<int> ans;
    vector<int> used(n, 0);

    for (int len = 1; len <= 3; ++len) {
        fill(used.begin(), used.end(), 0);
        genPerm(0, len, 0, a, used, ans);
    }

    for (int x : ans) cout << x << ' ';
    return 0;
}