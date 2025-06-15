#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* m[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

int getMonth(char *s) {
    for (int i = 0; i < 12; i++) {
        if (strcmp(m[i], s) == 0) return i + 1;
    }
    return 0;
}

typedef struct {
    int d, m, y;
    char s[20];
} T;

int cmp(const void *a, const void *b) {
    T *x = (T*)a, *y = (T*)b;
    if (x->d != y->d) return x->d - y->d;
    if (x->m != y->m) return x->m - y->m;
    return x->y - y->y;
}

int main() {
    int n;
    scanf("%d", &n);
    T t[n];
    for (int i = 0; i < n; i++) {
        char mon[4];
        scanf("%s", t[i].s);
        sscanf(t[i].s, "%d-%3s-%d", &t[i].d, mon, &t[i].y);
        t[i].m = getMonth(mon);
    }
    qsort(t, n, sizeof(T), cmp);
    for (int i = 0; i < n; i++) {
        printf("%s\n", t[i].s);
    }
    return 0;
}