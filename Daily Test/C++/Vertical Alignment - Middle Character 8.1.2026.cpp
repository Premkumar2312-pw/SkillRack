#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    vector<string> a(n), b(n);
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        getline(cin, a[i]);
        if (a[i].length() > maxLen)
            maxLen = a[i].length();
    }

    for (int i = 0; i < n; i++) {
        int diff = maxLen - a[i].length();
        if (diff > 0) {
            int pad = diff / 2;
            b[i] = string(pad, '*') + a[i] + string(pad, '*');
        } else {
            b[i] = a[i];
        }
    }

    for (int i = 0; i < maxLen; i++) {
        for (int j = 0; j < n; j++)
            cout << b[j][i];
        cout << endl;
    }
    return 0;
}