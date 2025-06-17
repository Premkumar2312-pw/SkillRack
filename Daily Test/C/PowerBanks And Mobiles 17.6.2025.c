#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main() {
    int n, c = 0;
    scanf("%d", &n);
    for (int i = 0, x; i < n; i++) {
        scanf("%d", &x);
        c += x;
    }

    int m;
    scanf("%d", &m);
    int a[m];
    for (int i = 0, x; i < m; i++) {
        scanf("%d", &x);
        a[i] = 100 - x;
    }

    qsort(a, m, sizeof(int), compare);

    int count = 0;
    for (int i = 0; i < m; i++) {
        if (c - a[i] >= 0) {
            c -= a[i];
            count++;
        } else break;
    }

    printf("%d\n", count);
    return 0;
}
