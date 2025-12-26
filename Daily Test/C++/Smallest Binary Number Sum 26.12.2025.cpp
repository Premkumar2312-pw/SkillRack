#include <bits/stdc++.h>
using namespace std;

long toDecimalBinary(int k) {
    long dec = 0, p = 1;
    while (k > 0) {
        dec += (k % 2) * p;
        p *= 10;
        k /= 2;
    }
    return dec;
}

int main() {
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        int k = 1;

        while (true) {
            long dec = toDecimalBinary(k);
            if (dec % x == 0) {
                sum += k;
                break;
            }
            k++;
        }
    }

    cout << sum;
    return 0;
}