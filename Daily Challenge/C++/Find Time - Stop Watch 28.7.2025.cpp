#include <iostream>
using namespace std;

int main() {
    int n, t[1000], sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> t[i];
    if(n % 2) cout << -1;
    else {
        for(int i = 0; i < n; i += 2)
            sum += t[i+1] - t[i];
        cout << sum;
    }
    return 0;
}