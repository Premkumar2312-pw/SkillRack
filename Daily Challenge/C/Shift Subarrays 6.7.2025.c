#include <stdio.h>

int main() {
    int n, q, i, x, y;
    char d;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &q);
    while(q--) {
        scanf("%d %d %c", &x, &y, &d);
        x--; y--;
        if(d == 'L') {
            int t = a[x];
            for(i = x; i < y; i++) a[i] = a[i+1];
            a[y] = t;
        } else {
            int t = a[y];
            for(i = y; i > x; i--) a[i] = a[i-1];
            a[x] = t;
        }
        for(i = 0; i < n; i++) printf("%d ", a[i]);
        printf("\n");
    }
    return 0;
}