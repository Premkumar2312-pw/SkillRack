#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    deque<long long> dq;

    for (int i = 1; i <= n; i++) {
        long long x;
        cin >> x;
        if (i % 2 == 1) dq.push_front(x);
        else dq.push_back(x);
    }

    // If n is even → reverse final output
    if (n % 2 == 0) {
        reverse(dq.begin(), dq.end());
    }

    for (long long v : dq) {
        cout << v << " ";
    }
    return 0;
}