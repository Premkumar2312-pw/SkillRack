#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int l, b, h, v;
    scanf("%d %d", &l, &b);
    scanf("%d", &h);

    int hc[h + 2];
    hc[0] = 0;
    for (int i = 1; i <= h; i++) 
        scanf("%d", &hc[i]);
    hc[h + 1] = l;
    qsort(hc, h + 2, sizeof(int), cmp);

    scanf("%d", &v);
    int vc[v + 2];
    vc[0] = 0; 
    for (int i = 1; i <= v; i++) scanf("%d", &vc[i]);
    vc[v + 1] = b;
    qsort(vc, v + 2, sizeof(int), cmp);

    int mh = 0, mw = 0;
    for (int i = 0; i < h + 1; i++)
        if (hc[i+1] - hc[i] > mh) mh = hc[i+1] - hc[i];

    for (int i = 0; i < v + 1; i++)
        if (vc[i+1] - vc[i] > mw) mw = vc[i+1] - vc[i];

    printf("%d\n", mh * mw);
    return 0;
}