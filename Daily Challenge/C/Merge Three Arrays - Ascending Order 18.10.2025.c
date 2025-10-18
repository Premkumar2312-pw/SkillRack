#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char key[10];
    int value;
} Pair;

int cmp(const void *a, const void *b) {
    return ((Pair*)a)->value - ((Pair*)b)->value;
}

int main() {
    int A, B, C, i, idx = 0;
    scanf("%d", &A);
    int val1[A];
    for (i = 0; i < A; i++) scanf("%d", &val1[i]);
    scanf("%d", &B);
    int val2[B];
    for (i = 0; i < B; i++) scanf("%d", &val2[i]);
    scanf("%d", &C);
    int val3[C];
    for (i = 0; i < C; i++) scanf("%d", &val3[i]);
    Pair d[A + B + C];

    for (i = 0; i < A; i++) {
        sprintf(d[idx].key, "a%d", i);
        d[idx++].value = val1[i];
    }
    for (i = 0; i < B; i++) {
        sprintf(d[idx].key, "b%d", i);
        d[idx++].value = val2[i];
    }
    for (i = 0; i < C; i++) {
        sprintf(d[idx].key, "c%d", i);
        d[idx++].value = val3[i];
    }
    qsort(d, idx, sizeof(Pair), cmp);
    for (i = 0; i < idx; i++) {
        printf("%s ", d[i].key);
    }
    return 0;
}