#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, k, c = 0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    cin >> k;
    int p = a[0];
    for(int i=1;i<n;i++) {
        if(a[i] <= p) {
            int x = ceil((p - a[i] + 1.0) / k);
            a[i] += x * k;
            c += x;
        }
        p = a[i];
    }
    cout << c << endl;
    return 0;
}