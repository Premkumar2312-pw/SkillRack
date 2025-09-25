#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            for (int j = 0; j < 2 * n - 2; j++) cout << "-";
            cout << "*\n";
        } 
        else if (i == n - 1) {
            int c = 0;
            for (int j = 0; j < 4 * (n - 1) + 1; j++) {
                if (c % 2 == 0) cout << "*";
                else cout << "-";
                c++;
            }
            cout << "\n";
        } 
        else {
            for (int j = 0; j < 2 * (n - i) - 2; j++) cout << "-";
            cout << "*";
            for (int j = 0; j < 2 * i - 1; j++) cout << "-";
            cout << "*";
            for (int j = 0; j < 2 * i - 1; j++) cout << "-";
            cout << "*\n";
        }
    }
}