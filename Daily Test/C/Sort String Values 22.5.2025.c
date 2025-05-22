#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int order[256];

int compare(const void *a, const void *b) {
    const char *x = *(const char **)a;
    const char *y = *(const char **)b;
    while (*x && *y) {
        if (order[(int)*x] != order[(int)*y])
            return order[(int)*x] - order[(int)*y];
        x++; y++;
    }
    return strlen(*(const char **)a) - strlen(*(const char **)b);
}

int main() {
    int n;
    scanf("%d", &n);
    char *w[n], s[101];
    for (int i = 0; i < n; i++) {
        w[i] = (char *)malloc(101);
        scanf("%s", w[i]);
    }
    scanf("%s", s);
    for (int i = 0; s[i]; i++) {
        order[(int)s[i]] = i;
    }
    qsort(w, n, sizeof(char *), compare);
    for (int i = 0; i < n; i++) {
        printf("%s\n", w[i]);
        free(w[i]);
    }
    return 0;
}