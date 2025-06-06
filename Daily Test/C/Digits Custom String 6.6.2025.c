#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    static int p[10];
    static int init = 0;
    if (!init) {
        char s[11];
        scanf("%s", s);
        for (int i = 0; i < 10; i++) p[s[i] - '0'] = i;
        init = 1;
    }
    return p[*(char*)a - '0'] - p[*(char*)b - '0'];
}

int main() {
    char a[101], b[11];
    scanf("%s%s", a, b);
    int pr[10];
    for (int i = 0; i < 10; i++) pr[b[i] - '0'] = i;
    int len = strlen(a);
    qsort(a, len, 1, cmp);
    printf("%s", a);
    return 0;
}