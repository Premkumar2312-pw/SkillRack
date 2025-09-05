#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch1, ch2;
    int X, Y;
    cin >> ch1 >> ch2;
    cin >> X >> Y;

    for (char a = ch1; a <= ch2; a++) {
        for (int n = X; n <= Y; n++) {
            for (char b = ch1; b <= ch2; b++) {
                for (int m = X; m <= Y; m++) {
                    cout << a << n << "." << b << "." << m << "\n";
                }
            }
        }
    }
}