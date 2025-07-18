#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int count_factors(int n) {
    int c = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            c++;
            if (i != n / i) c++;
        }
    }
    return c;
}

int cmp_desc(const void *a, const void *b) {
    return *(int *)b - *(int *)a;
}

int main() {
    int n, a[100], f[100], i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    for (i = 0; i < n; i++) f[i] = count_factors(a[i]);

    for (int fc = 100; fc >= 1; fc--) {
        int temp[100], idx = 0;
        for (j = 0; j < n; j++) {
            if (f[j] == fc) temp[idx++] = a[j];
        }
        if (idx > 0) {
            qsort(temp, idx, sizeof(int), cmp_desc);
            for (j = 0; j < idx; j++) printf("%d ", temp[j]);
            printf("\n");
        }
    }
    return 0;
}