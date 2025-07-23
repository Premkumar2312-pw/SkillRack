#include <iostream>
#include <string>
using namespace std;

int binToDec(const string &b) {
    int val = 0;
    for (char c : b)
        val = val * 2 + (c - '0');
    return val;
}

int main() {
    int n, total = 0;
    string b;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> b;
        total += binToDec(b);
    }

    int h = total / 3600;
    int m = (total % 3600) / 60;
    int s = total % 60;

    printf("%02d:%02d:%02d\n", h, m, s);
    return 0;
}