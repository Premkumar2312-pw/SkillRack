#include <iostream>
using namespace std;

int main() {
    int n, k, s = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> k;

    for(int i = 0; i < n; i++) {
        if(a[i] >= (1 << (k - 1))) {
            a[i] ^= (1 << (k - 1));
        }
        s += a[i];
    }

    cout << s << endl;
    return 0;
}