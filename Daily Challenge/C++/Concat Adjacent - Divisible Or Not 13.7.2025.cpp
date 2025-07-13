#include <iostream>
using namespace std;

int main() {
    int n, x, a[100], f = 0;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> x;
    for(int i = 0; i < n - 1; i++) {
        string ab = to_string(a[i]) + to_string(a[i + 1]);
        string ba = to_string(a[i + 1]) + to_string(a[i]);
        if (stoi(ab) % x == 0) {
            cout << a[i] << " " << a[i + 1] << "\n";
            f = 1;
        }
        else if (stoi(ba) % x == 0) {
            cout << a[i + 1] << " " << a[i] << "\n";
            f = 1;
        }
    }
    if (!f) cout << "-1\n";
}