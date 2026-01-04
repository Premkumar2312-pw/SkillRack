#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int a, b;
} Pair;

int cmp(const void *x, const void *y) {
    Pair *p = (Pair *)x;
    Pair *q = (Pair *)y;
    return p->a - q->a;
}

int main() {
    int n, x;
    scanf("%d", &n);

    Pair res[200];
    int k = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%d-%d", &a, &b);
        scanf("%d", &x);

        if (a < x && x < b) {
            res[k++] = (Pair){a, x};
            res[k++] = (Pair){x, b};
        } else {
            res[k++] = (Pair){a, b};
        }
    }

    qsort(res, k, sizeof(Pair), cmp);

    for (int i = 0; i < k; i++)
        printf("%d-%d\n", res[i].a, res[i].b);

    return 0;
}