#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    int l[n];
    for (int i=0; i<n; i++) scanf("%d", &l[i]);

    int maxv = l[0];
    for (int i=1; i<n; i++)
        if (l[i] > maxv) maxv = l[i];

    int a = 0, tmp = maxv;
    while (tmp) { a++; tmp /= 2; }

    char m[n][64], d[64] = "";
    for (int i=0; i<n; i++) {
        char buf[64] = "";
        int len = 0, x = l[i];
        while (x) {
            buf[len++] = '0' + (x % 2);
            x /= 2;
        }
        buf[len] = '';

        // zero padding
        while (len < a) buf[len++] = '0';
        buf[len] = '';

        // reverse
        for (int j=0; j<len; j++)
            m[i][j] = buf[len-j-1];
        m[i][len] = '';

        if (i < strlen(m[i]))
            d[i] = m[i][i];
    }

    int dlen = n;
    for (int i=0; i<n/2; i++) {
        char t = d[i];
        d[i] = d[dlen-i-1];
        d[dlen-i-1] = t;
    }
    d[n] = '';

    printf("%d
", (int)strtol(d, NULL, 2));
    return 0;
}