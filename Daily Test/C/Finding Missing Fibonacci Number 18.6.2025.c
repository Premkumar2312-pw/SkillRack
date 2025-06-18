#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, i, f = -1;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++) scanf("%d", &a[i]);

    qsort(a, n, sizeof(int), cmp);

    if(a[0] + a[1] != a[2]) {
        int d = a[1] - a[0];
        for(i = 0; i < d; i++) {
            if((i + 1) + a[1] == a[2]) {
                f = i + 1;
                break;
            }
        }
    }

    if(f != -1) {
        printf("%d", f);
        return 0;
    }

    for(i = 2; i < n; i++) {
        if(a[i] != a[i-1] + a[i-2]) {
            printf("%d", a[i-1] + a[i-2]);
            return 0;
        }
    }

    printf("%d", a[n-1]);
    return 0;
}