#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char word[10005];
    int len;
    int idx;
} Item;

int cmp(const void *a, const void *b) {
    Item *x = (Item *)a;
    Item *y = (Item *)b;
    if (x->len != y->len) return x->len - y->len;
    return x->idx - y->idx;  // maintain original order
}

int main() {
    int n;
    scanf("%d", &n);

    char s[10005];
    scanf("%s", s);

    int m[105];
    for (int i = 0; i < n; i++) scanf("%d", &m[i]);

    Item arr[105];
    int pos = 0;

    for (int i = 0; i < n; i++) {
        strncpy(arr[i].word, s + pos, m[i]);
        arr[i].word[m[i]] = '\0';
        arr[i].len = m[i];
        arr[i].idx = i;
        pos += m[i];
    }

    qsort(arr, n, sizeof(Item), cmp);

    for (int i = 0; i < n; i++)
        printf("%s", arr[i].word);

    return 0;
}