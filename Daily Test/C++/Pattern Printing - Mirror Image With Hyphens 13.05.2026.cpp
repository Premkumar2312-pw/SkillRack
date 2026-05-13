#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int dash = 1;
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << i;
        }
        for(int k = 1; k <= dash; k++) {
            cout << "-";
        }
        dash += 2;
        for(int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}
