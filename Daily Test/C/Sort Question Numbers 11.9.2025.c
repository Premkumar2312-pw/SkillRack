#include <stdio.h>
#include <stdlib.h>

int cmp(const void *p1, const void *p2) {
    const int *a = p1;
    const int *b = p2;
    for (int i = 0; i < 4; i++) {
        if (a[i] != b[i]) return a[i] - b[i];
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    int ip[n][4];
    for (int i = 0; i < n; i++)
        scanf("%d.%d.%d.%d", &ip[i][0], &ip[i][1], &ip[i][2], &ip[i][3]);

    qsort(ip, n, sizeof(ip[0]), cmp);

    for (int i = 0; i < n; i++)
        printf("%d.%d.%d.%d\n", ip[i][0], ip[i][1], ip[i][2], ip[i][3]);
    return 0;
}