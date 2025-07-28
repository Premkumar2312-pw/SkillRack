#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) { return *(int*)a - *(int*)b; }

void swap(char *x, char *y) { char t = *x; *x = *y; *y = t; }

void permute(char *s, int l, int r, int *res, int *idx) {
    if (l == r) {
        res[(*idx)++] = atoi(s);
        return;
    }
    for (int i = l; i <= r; i++) {
        swap(&s[l], &s[i]);
        permute(s, l + 1, r, res, idx);
        swap(&s[l], &s[i]);
    }
}

int main() {
    char n[12], a[12];
    scanf("%s %s", n, a);
    int res[5040], idx = 0;
    permute(n, 0, strlen(n) - 1, res, &idx);
    qsort(res, idx, sizeof(int), cmp);
    int ai = atoi(a);
    for (int i = 0; i < idx; i++) {
        if (res[i] >= ai) {
            printf("%d", res[i]);
            return 0;
        }
    }
    return 0;
}