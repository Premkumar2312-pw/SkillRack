#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    long base = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        base += arr[i];
    }
    long minn = LONG_MAX;
    int k;
    cin >> k;
    for (int i = 0; i < n; i++) {
        long mo = ((long)(arr[i]) >> k) << k;
        long neww = base - arr[i] + mo;
        minn = min(minn, neww);
    }
    cout << minn << endl;
    return 0;
}