#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int a = num1, b = num2;
    while(a > 0) {
        b = b * 10 + (a % 10);
        a /= 10;
    }
    int sum1 = b;
    a = num1; b = sum1;
    while(b > 0) {
        a = a * 10 + (b % 10);
        b /= 10;
    }
    sum1 += a;
    cout << sum1 << endl;
    return 0;
}