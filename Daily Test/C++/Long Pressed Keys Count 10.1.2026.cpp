#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int i = 0, j = 0, cnt = 0;

    while (j < b.length()) {
        if (i < a.length() && a[i] == b[j]) {
            i++; j++;
        }
        else if (j > 0 && b[j] == b[j - 1]) {
            cnt++;
            while (j < b.length() && b[j] == b[j - 1])
                j++;
        }
        else {
            j++;
        }
    }

    cout << cnt;
}