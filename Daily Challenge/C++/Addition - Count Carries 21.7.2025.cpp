#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int c = 0, r = 0;
    while (x || y) {
        int a = x % 10;
        int b = y % 10;
        if (a + b + c >= 10) {
            c = 1;
            r++;
        } else {
            c = 0;
        }
        x /= 10;
        y /= 10;
    }
    cout << r;
    return 0;
}