#include <stdio.h>
#include <math.h>

int main() {
    int n, k, i, c = 0;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    int p = a[0];
    for(i=1;i<n;i++) {
        if(a[i] <= p) {
            int x = ceil((p - a[i] + 1.0)/k);
            a[i] += x * k;
            c += x;
        }
        p = a[i];
    }
    printf("%d\n", c);
    return 0;
}