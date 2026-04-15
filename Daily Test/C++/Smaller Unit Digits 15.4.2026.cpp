#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int num;

    if(a % 10 == b % 10) {
        num = max(a, b);
    } else {
        if(a % 10 < b % 10)
            num = a;
        else
            num = b;
    }

    cout << num;
}