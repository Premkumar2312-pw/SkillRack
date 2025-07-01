#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    for(int i = 0; i < n; i++) {
        int idx = (a[i] > 0) ? (a[i] - 1) : a[i];
        cout << a[i] * a[idx] << " ";
    }
    
    return 0;
}