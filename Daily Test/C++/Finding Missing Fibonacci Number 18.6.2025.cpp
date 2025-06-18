#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, f = -1;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    if(a[0] + a[1] != a[2]) {
        int d = a[1] - a[0];
        for(int i = 0; i < d; i++) {
            if((i + 1) + a[1] == a[2]) {
                f = i + 1;
                break;
            }
        }
    }

    if(f != -1) {
        cout << f;
        return 0;
    }

    for(int i = 2; i < n; i++) {
        if(a[i] != a[i-1] + a[i-2]) {
            cout << a[i-1] + a[i-2];
            return 0;
        }
    }

    cout << a[n-1];
    return 0;
}