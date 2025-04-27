#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);
    
    int buckets[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &buckets[i]);
    }
    scanf("%d", &x);
    
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
        printf("%d ", buckets[i]);
    }
    
    return 0;
}
