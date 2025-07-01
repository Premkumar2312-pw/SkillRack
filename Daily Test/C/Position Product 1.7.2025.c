#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
        
    for(int i = 0; i < n; i++) {
        int idx = (a[i] > 0) ? (a[i] - 1) : a[i];
        printf("%d ", a[i] * a[idx]);
    }
    
    return 0;
}