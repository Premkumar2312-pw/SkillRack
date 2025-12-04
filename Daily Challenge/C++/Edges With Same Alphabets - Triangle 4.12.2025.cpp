#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int s = n - 2, b = 1;

    cout << string(n - 1, '*') + "a\n";

    for(int i = 1; i < n - 1; i++) {
        cout << string(s, '*') << "c" << string(b, '*') << "a\n";
        s--;
        b += 2;
    }

    cout << "c" << string(n - 1, ' ');

    return 0;
}