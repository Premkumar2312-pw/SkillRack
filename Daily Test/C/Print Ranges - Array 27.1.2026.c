#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    qsort(a, n, sizeof(int), cmp);

    int start = 1;

    for(int i = 0; i < n - 1; i++) {
        if(start)
            printf("%d-", a[i]);

        if(a[i] == a[i+1] || a[i] == a[i+1] - 1)
            start = 0;
        else {
            printf("%d ", a[i]);
            start = 1;
        }
    }

    if(start)
        printf("%d-%d", a[n-1], a[n-1]);
    else
        printf("%d", a[n-1]);

    return 0;
}