#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length(), c = 0;

    for (int i = 0; i < n; ++i) {
        int j = i;
        while (j < n && s[j] == s[i]) {
            ++c;
            ++j;
        }
    }

    for (int i = 1; i < n - 1; ++i) {
        int l = 1;
        while (i - l >= 0 && i + l < n && s[i - 1] == s[i - l] && s[i + l] == s[i - 1] && s[i] != s[i - 1]) {
            ++c;
            ++l;
        }
    }

    cout << c;
    return 0;
}