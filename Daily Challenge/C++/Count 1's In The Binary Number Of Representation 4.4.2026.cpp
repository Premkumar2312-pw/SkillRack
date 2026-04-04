#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int count = 0;

    while (n > 0) {
        n = n & (n - 1);
        count++;
    }

    cout << count; // input:22 → output:3
}