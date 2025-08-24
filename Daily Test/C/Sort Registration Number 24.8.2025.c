#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char s[100];
} Str;

int cmp(const void *a, const void *b) {
    const Str *x = a, *y = b;
    int n1 = atoi((char[]){x->s[0], x->s[1], '\0'});
    int n2 = atoi((char[]){y->s[0], y->s[1], '\0'});
    if(n1 != n2) return n2 - n1; // descending

    int cmp2 = strncmp(x->s + 2, y->s + 2, 2);
    if(cmp2 != 0) return cmp2;

    int m1 = atoi(x->s + 4);
    int m2 = atoi(y->s + 4);
    return m1 - m2; // ascending
}

int main() {
    int n; scanf("%d", &n);
    Str arr[n];
    for(int i=0;i<n;i++) scanf("%s", arr[i].s);
    qsort(arr, n, sizeof(Str), cmp);
    for(int i=0;i<n;i++) printf("%s\n", arr[i].s);
    return 0;
}