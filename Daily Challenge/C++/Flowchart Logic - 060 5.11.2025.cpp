#include <iostream>
using namespace std;

int main() {
    int N, D1, D2;
    cin >> N >> D1 >> D2;
    bool ok = true;
    while (N > 0) {
        int d = N % 10;
        if (d < D1 || d > D2) {
            cout << "NO" << endl;
            ok = false;
            break;
        }
        N /= 10;
    }
    if (ok) cout << "YES" << endl;
}