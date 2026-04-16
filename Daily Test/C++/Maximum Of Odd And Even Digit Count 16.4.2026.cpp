#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int odd = 0, even = 0;

    while(n > 0) {
        if((n % 10) % 2 == 0)
            even++;
        else
            odd++;
        n /= 10;
    }

    cout << max(odd, even);
}