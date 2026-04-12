#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    while(a > 0 || b > 0) {
        cout << (a % 10 + b % 10) << " ";
        a /= 10;
        b /= 10;
    }

    return 0;
}