#include <stdio.h>
int main() {
    int n, x, a[100], f = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);
    for(int i = 0; i < n - 1; i++) {
        int p = a[i], q = a[i+1];
        int ab = 0, ba = 0, tmp = q;
        while (tmp) { ab *= 10; tmp /= 10; }
        ab = p * (ab ? ab * 10 : 10) + q;
        tmp = p;
        while (tmp) { ba *= 10; tmp /= 10; }
        ba = q * (ba ? ba * 10 : 10) + p;
        if (ab % x == 0) { printf("%d %d\n", p, q); f = 1; }
        else if (ba % x == 0) { printf("%d %d\n", q, p); f = 1; }
    }
    if (!f) printf("-1\n");
    return 0;
}