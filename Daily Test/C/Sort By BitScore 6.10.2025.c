#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int val;
    int calc;
} NumCalc;

int bin_val(int n) {
    int b = 0, m = 1;
    while (n) {
        b += (n % 2) * m;
        m *= 10;
        n /= 2;
    }
    return b;
}

int compare(const void* a, const void* b) {
    NumCalc* x = (NumCalc*)a;
    NumCalc* y = (NumCalc*)b;
    if (x->calc == y->calc) return x->val - y->val;
    return x->calc - y->calc;
}

int main() {
    int n;
    scanf("%d", &n);
    NumCalc arr[n];
    char buf[32];
    for (int i = 0; i < n; i++) {
        scanf("%s", buf);
        arr[i].val = atoi(buf);
        arr[i].calc = 0;
        for (int j = 0; buf[j]; j++)
            arr[i].calc += (buf[j] - '0') * bin_val(buf[j] - '0');
    }
    qsort(arr, n, sizeof(NumCalc), compare);
    for (int i = 0; i < n; i++) printf("%d ", arr[i].val);
    return 0;
}