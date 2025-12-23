/* C */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp_int(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

int bin_to_int(const char *s) {
    int v = 0;
    for (int i = 0; s[i]; ++i) {
        v = v * 2 + (s[i] - '0');
    }
    return v;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int *num = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) scanf("%d", &num[i]);

    int *res = (int *)malloc(2 * n * sizeof(int));
    int rc = 0;

    for (int i = 0; i < n; ++i) {
        int x = num[i];
        char b[64];
        int len = 0;
        if (x == 0) {
            b[len++] = '0';
        } else {
            char tmp[64];
            int tlen = 0;
            while (x > 0) {
                tmp[tlen++] = (x & 1) + '0';
                x >>= 1;
            }
            for (int j = tlen - 1; j >= 0; --j) b[len++] = tmp[j];
        }
        b[len] = '';

        int mid = len / 2;
        char left[64], right[64];
        if (len % 2 == 0) {
            memcpy(left, b, mid);
            left[mid] = '';
            memcpy(right, b + mid, len - mid);
            right[len - mid] = '';
        } else {
            memcpy(left, b, mid + 1);
            left[mid + 1] = '';
            memcpy(right, b + mid + 1, len - mid - 1);
            right[len - mid - 1] = '';
        }
        res[rc++] = bin_to_int(left);
        res[rc++] = right[0] ? bin_to_int(right) : 0;
    }

    qsort(res, rc, sizeof(int), cmp_int);
    for (int i = 0; i < rc; ++i) {
        if (i) printf(" ");
        printf("%d", res[i]);
    }
    free(num);
    free(res);
    return 0;
}