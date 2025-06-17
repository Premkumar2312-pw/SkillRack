#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, m, i, j, c = 0;
    scanf("%d", &n);
    int p[n];
    for (i = 0; i < n; i++) scanf("%d", &p[i]);

    scanf("%d", &m);
    int q[m];
    for (i = 0; i < m; i++) scanf("%d", &q[i]);

    qsort(p, n, sizeof(int), cmp);
    qsort(q, m, sizeof(int), cmp);

    for (i = 0; i < m; i++) {
        int need = 100 - q[i];
        for (j = 0; j < n; j++) {
            if (p[j] >= need) {
                p[j] -= need;
                c++;
                break;
            }
        }
    }
    printf("%d\n", c);
    return 0;
}