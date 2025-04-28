#include <iostream>
using namespace std;

int main() {
    int n, i = 1, p = 0;
    string s = "";
    cin >> n;
    while (s.length() < n * n) s += to_string(i++);
    for (int l = 1; l <= n; l++) {
        cout << string(n - l, '*');
        cout << s.substr(p, 2 * l - 1) << endl;
        p += 2 * l - 1;
    }
}