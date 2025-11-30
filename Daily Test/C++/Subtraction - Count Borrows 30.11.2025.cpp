#include <iostream>
#include <string>
using namespace std;

int main() {
    string x, y;
    cin >> x >> y;

    if (y.size() < x.size())
        y = string(x.size() - y.size(), '0') + y;

    int bc = 0, c = 0;
    for (int i = (int)x.size() - 1; i >= 0; --i) {
        int xd = x[i] - '0';
        int yd = y[i] - '0';
        xd -= c;
        c = 0;
        if (xd < yd) {
            bc++;
            c = 1;
            xd += 10;
        }
    }
    cout << bc << '
';
    return 0;
}