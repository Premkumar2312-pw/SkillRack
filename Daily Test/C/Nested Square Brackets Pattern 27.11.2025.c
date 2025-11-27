#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[100][2];
    for (int idx = 0; idx < n; idx++) {
        scanf("%d %d", &a[idx][0], &a[idx][1]);
    }

    for (int idx = 0; idx < n; idx++) {
        int i = a[idx][0];
        int j = a[idx][1];
        int c = 1;

        printf("[");
        int firstOuter = 1;
        for (int m = 1; m <= i * j + j; m += j) {
            if (!firstOuter) printf(" ");
            firstOuter = 0;

            printf("[");
            int firstInner = 1;
            for (int x = c; x < m; x++) {
                if (!firstInner) printf(" ");
                firstInner = 0;
                printf("%d", x);
            }
            printf("]");
            c = m;
        }
        printf("]
");
    }
    return 0;
}