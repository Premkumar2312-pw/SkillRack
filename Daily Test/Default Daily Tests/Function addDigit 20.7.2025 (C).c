#include <stdlib.h>

int* addDigit(int *a, int n, int d) {
    int *r = (int *)malloc((n + 2) * sizeof(int));
    int c = d, i = n - 1;

    while (i >= 0 && c > 0) {
        int s = a[i] + c;
        r[i + 1] = s % 10;
        c = s / 10;
        i--;
    }

    while (i >= 0) {
        r[i + 1] = a[i];
        i--;
    }

    if (c > 0) {
        r[0] = c;
        r[n + 1] = -1;
        return r;
    } else {
        for (int j = 0; j < n; j++) r[j] = r[j + 1];
        r[n] = -1;
        return r;
    }
}