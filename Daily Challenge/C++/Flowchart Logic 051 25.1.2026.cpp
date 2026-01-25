#include <iostream>
using namespace std;

int main() {
    int X, Y, D;
    cin >> X >> Y >> D;

    while (X <= Y) {
        int temp = X;
        while (temp > 0) {
            if (temp % 10 == D) {
                cout << X << " ";
                break;
            }
            temp /= 10;
        }
        X++;
    }
    return 0;
}