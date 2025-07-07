#include <iostream>
using namespace std;
int main() {
    int n, a[1000];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n - 1; i++)
        if((a[i] & a[i + 1]) != a[i]) {
            cout << "NO";
            return 0;
        }
    cout << "YES";
    return 0;
}