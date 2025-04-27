#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    
    vector<int> buckets(n);
    for (int i = 0; i < n; i++) {
        cin >> buckets[i];
    }
    cin >> x;
    
    for (int i = n - 1; i >= 0; i--) {
        if (buckets[i] > x) {
            int leak = buckets[i] - x;
            buckets[i] = x;
            if (i > 0) {
                buckets[i - 1] += leak;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << buckets[i] << " ";
    }
    cout << endl;
    
    return 0;
}