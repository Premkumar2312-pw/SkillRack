#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    while (a > 0 && b > 0) {
        cout << a << ' ';
        cout << b << '
';

        a = a - 1;
        b = b - 1;

        if (a % 10 == 0) {
            int temp = a;
            a = b;
            b = temp;
        }
    }
    return 0;
}