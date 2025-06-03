#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int d[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &d[i]);
    }

    int p = 0, t = 0, f = 0;
    while (p < n) {
        int cur = d[p] ^ f;
        if (cur == 0) {
            while (p < n && (d[p] ^ f) == 0)
                p++;
        } else {
            f ^= 1;
            t++;
        }
    }

    printf("%d\n", t);
    return 0;
}