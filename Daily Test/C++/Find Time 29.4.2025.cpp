#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> a[i];
        
    vector<pair<int, int>> t;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && 0 <= a[i] && a[i] <= 23 && 0 <= a[j] && a[j] <= 59)
                t.push_back({a[i], a[j]});
        }
    }
    
    if (t.empty()) 
        cout << -1;
    else {
        pair<int, int> mx = {0, 0};
        for (auto x : t) {
            if (x > mx) 
                mx = x;
        }
        printf("%02d:%02d", mx.first, mx.second);
    }
}