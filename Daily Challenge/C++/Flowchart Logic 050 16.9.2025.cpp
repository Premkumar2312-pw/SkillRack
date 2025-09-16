#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, N, P = 0;
    cin >> M >> N;

    while (M > 0 || N > 0) {
        if (M % 10 != N % 10) {
            if (M % 10 > N % 10) {
                cout << M % 10;
                P = 1;
            } else {
                cout << N % 10;
                P = 1;
            }
        }
        M /= 10;
        N /= 10;
    }

    if (P == 0)
        cout << "-1";
    return 0;
}