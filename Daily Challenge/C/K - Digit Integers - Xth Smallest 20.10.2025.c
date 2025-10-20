#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void* a, const void* b) {
    return (*(int*)a) - (*(int*)b);
}

int main() {
    int N, k, x;
    scanf("%d", &N);
    int c[100], count = 0;
    char arr[100][20];
    for (int i = 0; i < N; ++i) scanf("%s", arr[i]);
    scanf("%d %d", &k, &x);

    for (int i = 0; i < N; ++i) {
        int num = atoi(arr[i]);
        int len = strlen(arr[i]);
        if ((num < 0 && len - 1 == k) || (num > 0 && len == k))
            c[count++] = num;
    }

    qsort(c, count, sizeof(int), cmp);
    if (count < x)
        printf("-1
");
    else
        printf("%d
", c[x-1]);
    return 0;
}