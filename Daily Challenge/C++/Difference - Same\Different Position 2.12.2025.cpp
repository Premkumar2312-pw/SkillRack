#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[n], b[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];  // copy
    }
    
    sort(b, b + n);
    
    long long X = 0, Y = 0;
    
    for (int i = 0; i < n; i++) {
        if (a[i] == b[i]) X += a[i];
        else Y += a[i];
    }
    
    cout << llabs(X - Y);
    
    return 0;
}