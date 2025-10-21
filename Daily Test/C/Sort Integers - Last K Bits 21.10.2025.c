#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int key; // last k bits as integer
    int val; // original number
} Pair;

int cmp(const void *a, const void *b) {
    Pair *pa = (Pair*)a, *pb = (Pair*)b;
    return pa->key - pb->key;
}

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    Pair pa[n];
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    for(int i=0; i<n; i++) {
        int num = arr[i];
        int lastk = num & ((1 << k) - 1); // bitwise for last k bits
        pa[i].key = lastk;
        pa[i].val = num;
    }
    qsort(pa, n, sizeof(Pair), cmp);
    for(int i=0; i<n; i++) printf("%d ", pa[i].val);
    return 0;
}