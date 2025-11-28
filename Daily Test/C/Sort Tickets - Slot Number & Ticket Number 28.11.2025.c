#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x, y;
} Pair;

int cmp(const void *a, const void *b) {
    const Pair *p = (const Pair *)a;
    const Pair *q = (const Pair *)b;
    if (p->y != q->y) return p->y - q->y;
    return p->x - q->x;
}

int main() {
    int n;
    scanf("%d", &n);
    Pair *pairs = (Pair *)malloc(n * sizeof(Pair));
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &pairs[i].x, &pairs[i].y);
    }
    qsort(pairs, n, sizeof(Pair), cmp);
    for (int i = 0; i < n; i++) {
        printf("%d %d
", pairs[i].x, pairs[i].y);
    }
    free(pairs);
    return 0;
}