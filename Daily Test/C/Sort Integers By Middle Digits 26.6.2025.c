#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getMidDigit(char *s) {
    int len = strlen(s);
    return s[len / 2] - '0';
}

int cmp(const void *a, const void *b) {
    char *x = *(char **)a;
    char *y = *(char **)b;
    int m1 = getMidDigit(x);
    int m2 = getMidDigit(y);
    if (m1 != m2) return m1 - m2;
    return atoi(x) - atoi(y);
}

int main() {
    int n;
    scanf("%d", &n);
    char *a[n];
    for (int i = 0; i < n; i++) {
        a[i] = malloc(11);
        scanf("%s", a[i]);
    }
    qsort(a, n, sizeof(char*), cmp);
    for (int i = 0; i < n; i++) {
        printf("%s ", a[i]);
        free(a[i]);
    }
    return 0;
}