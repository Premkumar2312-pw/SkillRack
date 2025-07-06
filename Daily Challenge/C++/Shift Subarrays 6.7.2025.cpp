#include <iostream>
using namespace std;

int main() {
    int n, q, x, y;
    char d;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> q;
    while(q--) {
        cin >> x >> y >> d;
        x--; y--;
        if(d == 'L') {
            int t = a[x];
            for(int i = x; i < y; i++) a[i] = a[i+1];
            a[y] = t;
        } else {
            int t = a[y];
            for(int i = y; i > x; i--) a[i] = a[i-1];
            a[x] = t;
        }
        for(int i = 0; i < n; i++) cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}