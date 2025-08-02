#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n*n; i++) {
        for (int j = 0; j < n*n; j++)
            cout << ((i % n == j % n) ? '*' : '-');
        cout << "\n";
    }
}