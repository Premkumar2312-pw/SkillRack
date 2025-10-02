#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    while(n > 0) {
        int d = n % 10;
        while(d > 0) {
            cout << d;
            if(n % 2 == 0)
                break;
            d--;
        }
        n = n / 10;
    }
    return 0;
}