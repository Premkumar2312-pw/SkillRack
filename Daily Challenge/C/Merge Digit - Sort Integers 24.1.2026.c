#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int N;
    scanf("%d", &N);

    int res[N / 2];
    int idx = 0;

    for (int i = 0; i < N; i += 2) {
        int a, b;
        scanf("%d %d", &a, &b);

        int ah = a / 100, at = (a / 10) % 10, ao = a % 10;
        int bh = b / 100, bt = (b / 10) % 10, bo = b % 10;

        int merged =
            (ah > bh ? ah : bh) * 100000 +
            (ah < bh ? ah : bh) * 10000 +
            (at > bt ? at : bt) * 1000 +
            (at < bt ? at : bt) * 100 +
            (ao > bo ? ao : bo) * 10 +
            (ao < bo ? ao : bo);

        res[idx++] = merged;
    }

    qsort(res, N / 2, sizeof(int), cmp);

    for (int i = 0; i < N / 2; i++)
        printf("%d ", res[i]);

    return 0;
}